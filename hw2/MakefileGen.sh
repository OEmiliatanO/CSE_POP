container=("list" "stack" "queue")
types=("char" "short" "int" "long" "float" "double" "ptr_to_char" "ptr_to_short" "ptr_to_int" "ptr_to_long" "ptr_to_float" "ptr_to_double")
CC="gcc"
Flag=("-Wall" "-Wextra" "-Werror")
printf "" > Makefile_
for ((c=0;c<3;++c)); do
	for ((i=0;i<12;++i)); do
		DIR=${container[$c]}_${types[$i]}
		TARGET=$DIR.o
		SOURCE=$DIR.c
		printf "$TARGET:$DIR/$SOURCE\n" >> Makefile_
		printf "\t$CC ${Flag[*]} -c $DIR/$SOURCE\n" >> Makefile_
	done
done

for ((c=1;c<3;++c)); do
	for ((i=0;i<12;++i)); do
		DIR=${container[$c]}_${types[$i]}
		TARGET=main_$DIR.o
		SOURCE=main_$DIR.c
		printf "$TARGET:$DIR/$SOURCE\n" >> Makefile_
		printf "\t$CC ${Flag[*]} -c $DIR/$SOURCE\n" >> Makefile_
	done
done

printf "mm.o:mm.c\n" >> Makefile_
printf "\t$CC ${Flag[*]} -c mm.c\n" >> Makefile_

for ((c=1;c<3;++c)); do
	for ((i=0;i<12;++i)); do
		DIR=${container[$c]}_${types[$i]}
		TARGET=main_$DIR
		SOURCE=main_$DIR.o
		DEP=($SOURCE mm.o list_${types[$i]}.o $DIR.o)
		printf "$TARGET:$SOURCE ${DEP[*]}\n" >> Makefile_
		printf "\t$CC ${Flag[*]} -o $TARGET ${DEP[*]}\n" >> Makefile_
	done
done

# dep
printf "dep:\n" >> Makefile_
printf "\t$CC -M *.c " >> Makefile_
for ((c=1;c<3;++c)); do
	for ((i=0;i<12;++i)); do
		DIR=${container[$c]}_${types[$i]}
		printf "$DIR/*.c " >> Makefile_
	done
done
printf " > .dep\n" >> Makefile_

# all
printf "all: " >> Makefile_
for ((c=1;c<3;++c)); do
	for ((i=0;i<12;++i)); do
		DIR=${container[$c]}_${types[$i]}
		printf "main_$DIR " >> Makefile_
	done
done
printf "\n" >> Makefile_
printf ".PHONY: clean\nclean:\n\t-rm -rf *.o\n" >> Makefile_
