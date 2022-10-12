container=("list" "stack" "queue")
types=("char" "short" "int" "long" "float" "double")
pttypes=("ptr_to_char" "ptr_to_short" "ptr_to_int" "ptr_to_long" "ptr_to_float" "ptr_to_double")
pt=("char*" "short*" "int*" "long*" "float*" "double*")

for ((c=0;c<3;++c)); do
	for ((i=0;i<6;++i)); do
		mkdir ${container[$c]}_${types[$i]} 2>/dev/null
		mkdir ${container[$c]}_${pttypes[$i]} 2>/dev/null
		printf "#include \"gen/${container[$c]}_gen.h\"\ndefine_${container[$c]}(${types[$i]})\n" >> ${container[$c]}_${types[$i]}_gen.h

		printf "#include \"gen/${container[$c]}_gen.h\"\ndefine_${container[$c]}(${pttypes[$i]})\n" >> ${container[$c]}_${pttypes[$i]}_gen.h

		printf "#include \"gen/${container[$c]}_method_gen.h\"\ndefine_${container[$c]}_method(${types[$i]})" > ${container[$c]}_${types[$i]}_gen.c
		printf "#include \"gen/${container[$c]}_method_gen.h\"\ndefine_${container[$c]}_method(${pttypes[$i]})" > ${container[$c]}_${pttypes[$i]}_gen.c
		
		printf "#include <stddef.h>\n" > ${container[$c]}_${types[$i]}_.h
		printf "#include <stddef.h>\n" > ${container[$c]}_${pttypes[$i]}_.h
		
		printf "#include <stddef.h>\n" > ${container[$c]}_${types[$i]}.c
		printf "#include <stddef.h>\n" > ${container[$c]}_${pttypes[$i]}.c

		printf "#include \"../src/${container[$c]}_${types[$i]}.h\"\n" >> ${container[$c]}_${types[$i]}.c
		printf "#include \"../src/${container[$c]}_${pttypes[$i]}.h\"\n" >> ${container[$c]}_${pttypes[$i]}.c

		printf "#include \"../src/mm.h\"\n" >> ${container[$c]}_${types[$i]}.c
		printf "#include \"../src/mm.h\"\n" >> ${container[$c]}_${pttypes[$i]}.c

		if [ "${container[$c]}" != "list" ];
		then
			printf "#include \"../src/list_${types[$i]}.h\"\n" >> ${container[$c]}_${types[$i]}.c
			printf "#include \"../src/list_${pttypes[$i]}.h\"\n" >> ${container[$c]}_${pttypes[$i]}.c
			printf "#include \"list_${types[$i]}.h\"\n" >> ${container[$c]}_${types[$i]}_.h
			printf "#include \"list_${pttypes[$i]}.h\"\n" >> ${container[$c]}_${pttypes[$i]}_.h
		fi

		printf "typedef ${pt[$i]} ${pttypes[$i]};\n" >> ${container[$c]}_${pttypes[$i]}_.h
		printf "typedef ${pt[$i]} ${pttypes[$i]};\n" >> ${container[$c]}_${pttypes[$i]}.c
		
		gcc -E ${container[$c]}_${types[$i]}_gen.h >> ${container[$c]}_${types[$i]}_.h
		gcc -E ${container[$c]}_${pttypes[$i]}_gen.h >> ${container[$c]}_${pttypes[$i]}_.h
		{ printf "#ifndef __${container[$c]}_${types[$i]}_H__\n#define __${container[$c]}_${types[$i]}_H__\n"; cat ${container[$c]}_${types[$i]}_.h; } > ${container[$c]}_${types[$i]}.h
		{ printf "#ifndef __${container[$c]}_${pttypes[$i]}_H__\n#define __${container[$c]}_${pttypes[$i]}_H__\n"; cat ${container[$c]}_${pttypes[$i]}_.h; } > ${container[$c]}_${pttypes[$i]}.h
		printf "#endif" >> ${container[$c]}_${types[$i]}.h
		printf "#endif" >> ${container[$c]}_${pttypes[$i]}.h
		mv ${container[$c]}_${types[$i]}.h src/
		mv ${container[$c]}_${pttypes[$i]}.h src/
		gcc -E ${container[$c]}_${types[$i]}_gen.c >> ${container[$c]}_${types[$i]}.c
		gcc -E ${container[$c]}_${pttypes[$i]}_gen.c >> ${container[$c]}_${pttypes[$i]}.c
		
		mv ${container[$c]}_${types[$i]}.c ${container[$c]}_${types[$i]}/
		mv ${container[$c]}_${pttypes[$i]}.c ${container[$c]}_${pttypes[$i]}/

		rm ${container[$c]}_${types[$i]}_gen.h
		rm ${container[$c]}_${pttypes[$i]}_gen.h
		rm ${container[$c]}_${types[$i]}_gen.c
		rm ${container[$c]}_${pttypes[$i]}_gen.c
		rm ${container[$c]}_${types[$i]}_.h
		rm ${container[$c]}_${pttypes[$i]}_.h
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

