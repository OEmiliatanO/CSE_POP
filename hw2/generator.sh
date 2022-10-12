container=("list" "stack" "queue")
types=("char" "short" "int" "long" "float" "double")
pttypes=("ptr_to_char" "ptr_to_short" "ptr_to_int" "ptr_to_long" "ptr_to_float" "ptr_to_double")
pt=("char*" "short*" "int*" "long*" "float*" "double*")

for ((c=0;c<3;++c)); do
	for ((i=0;i<6;++i)); do
		SOURCE_C=./template/${container[$c]}_method_template.c
		SOURCE_H=./template/${container[$c]}_template.h
		DIR=./${container[$c]}_${types[$i]}
		TARGET_C=$DIR.c
		TARGET_H=$DIR.h
		mkdir $DIR 2>/dev/null
		cp $SOURCE_C $TARGET_C
		sed -i "s/<type>/${types[$i]}/g" $TARGET_C
		cp $SOURCE_H $TARGET_H
		sed -i "s/<type>/${types[$i]}/g" $TARGET_H
		mv $TARGET_H src/
		mv $TARGET_C $DIR/
	done
done
for ((c=0;c<3;++c)); do
	for ((i=0;i<6;++i)); do
		SOURCE_C=./template/${container[$c]}_method_template.c
		SOURCE_H=./template/${container[$c]}_template.h
		DIR=./${container[$c]}_${pttypes[$i]}
		TARGET_C=$DIR.c
		TARGET_H=$DIR.h
		mkdir $DIR 2>/dev/null
		cp $SOURCE_C $TARGET_C
		sed -i "s/<type>/${pttypes[$i]}/g" $TARGET_C
		sed -i "3s/^/typedef ${pt[$i]} ${pttypes[$i]};\n/" $TARGET_C
		cp $SOURCE_H $TARGET_H
		sed -i "s/<type>/${pttypes[$i]}/g" $TARGET_H
		sed -i "3s/^/typedef ${pt[$i]} ${pttypes[$i]};\n/" $TARGET_H

		mv $TARGET_H src/
		mv $TARGET_C $DIR/
	done
done

<<com
for ((i=0;i<6;++i)); do
	cp main_stack_template.c main_stack_${types[$i]}.c
	sed -i "s/<type>/${types[$i]}/g" main_stack_${types[$i]}.c
	mv main_stack_${types[$i]}.c stack_${types[$i]}/
	
	cp main_stack_template.c main_stack_${pttypes[$i]}.c
	sed -i "s/<type>/${pttypes[$i]}/g" main_stack_${pttypes[$i]}.c
	mv main_stack_${pttypes[$i]}.c stack_${pttypes[$i]}/
	
	cp main_queue_template.c main_queue_${types[$i]}.c
	sed -i "s/<type>/${types[$i]}/g" main_queue_${types[$i]}.c
	mv main_queue_${types[$i]}.c queue_${types[$i]}/

	cp main_queue_template.c main_queue_${pttypes[$i]}.c
	sed -i "s/<type>/${pttypes[$i]}/g" main_queue_${pttypes[$i]}.c
	mv main_queue_${pttypes[$i]}.c queue_${pttypes[$i]}/
done
com

