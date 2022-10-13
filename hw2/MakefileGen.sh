container=("list" "stack" "queue")
types=("char" "short" "int" "long" "float" "double" "ptr_to_char" "ptr_to_short" "ptr_to_int" "ptr_to_long" "ptr_to_float" "ptr_to_double")
CC="gcc"
Flag=("-Wall" "-Wextra" "-Werror")
printf "" > Makefile
for ((c=0;c<3;++c)); do
	for ((i=0;i<12;++i)); do
		DIR=${container[$c]}_${types[$i]}
		TARGET=$DIR.o
		SOURCE=$DIR.c
		printf "$TARGET:$DIR/$SOURCE\n" >> Makefile
		printf "\t$CC ${Flag[*]} -c $DIR/$SOURCE\n" >> Makefile
	done
done

for ((c=1;c<3;++c)); do
	for ((i=0;i<12;++i)); do
		DIR=${container[$c]}_${types[$i]}
		TARGET=main_$DIR.o
		SOURCE=main_$DIR.c
		printf "$TARGET:$DIR/$SOURCE\n" >> Makefile
		printf "\t$CC ${Flag[*]} -c $DIR/$SOURCE\n" >> Makefile
	done
done

printf "mm.o:mm.c\n" >> Makefile
printf "\t$CC ${Flag[*]} -c mm.c\n" >> Makefile

for ((c=1;c<3;++c)); do
	for ((i=0;i<12;++i)); do
		DIR=${container[$c]}_${types[$i]}
		TARGET=main_$DIR.elf
		SOURCE=main_$DIR.o
		DEP=($SOURCE mm.o list_${types[$i]}.o $DIR.o)
		printf "$TARGET: ${DEP[*]}\n" >> Makefile
		printf "\t$CC ${Flag[*]} -o $TARGET ${DEP[*]}\n" >> Makefile
	done
done

# dep
printf "dep: " >> Makefile
for ((c=0;c<3;++c)); do
	for ((i=0;i<12;++i)); do
		DIR=${container[$c]}_${types[$i]}
		TARGET=$DIR.o
		printf "$TARGET " >> Makefile
	done
done

for ((c=1;c<3;++c)); do
	for ((i=0;i<12;++i)); do
		DIR=${container[$c]}_${types[$i]}
		TARGET=main_$DIR.o
		printf "$TARGET " >> Makefile
	done
done

printf "\n" >> Makefile

# all
printf "all: " >> Makefile
for ((c=1;c<3;++c)); do
	for ((i=0;i<12;++i)); do
		DIR=${container[$c]}_${types[$i]}
		printf "main_$DIR.elf " >> Makefile
	done
done
printf "\n" >> Makefile
printf ".PHONY: clean\nclean:\n\t-rm -rf *.o\n" >> Makefile
printf "include .dep" >> Makefile
