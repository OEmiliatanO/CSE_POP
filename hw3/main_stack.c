#include <stdio.h>
#include "src/mm.h"
#include "src/list.h"
#include "src/stack.h"

int main()
{
	stack_char* qc;
	stack_short* qs;
	stack_int* qi;
	stack_long* ql;
	stack_float* qf;
	stack_double* qd;
	
	stack_ptr_to_char* qpc;
	stack_ptr_to_short* qps;
	stack_ptr_to_int* qpi;
	stack_ptr_to_long* qpl;
	stack_ptr_to_float* qpf;
	stack_ptr_to_double* qpd;

	qc = new_stack_char();
	qs = new_stack_short();
	qi = new_stack_int();
	ql = new_stack_long();
	qf = new_stack_float();
	qd = new_stack_double();

	qpc = new_stack_ptr_to_char();
	qps = new_stack_ptr_to_short();
	qpi = new_stack_ptr_to_int();
	qpl = new_stack_ptr_to_long();
	qpf = new_stack_ptr_to_float();
	qpd = new_stack_ptr_to_double();
	int op;
	while(1)
	{
		printf("\n1:push, 2:pop, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			int ty;
			printf("(0) char, (1) short, (2) int, (3) long, (4) float, (5) double, (6) char* (7) short*, (8) int*, (9) long*, (10) float*, (11) double*\n");
			printf("value type and value to be pushed: ");
			scanf("%d%*c", &ty);
			switch(ty)
			{
				case 0:
					{
						char x;
						scanf("%c%*c", &x);
						stack_char_push(qc, x);
						break;
					}
				case 1:
					{
						short x;
						scanf("%hd%*c", &x);
						stack_short_push(qs, x);
						break;
					}
				case 2:
					{
						int x;
						scanf("%d%*c", &x);
						stack_int_push(qi, x);
						break;
					}
				case 3:
					{
						long x;
						scanf("%ld%*c", &x);
						stack_long_push(ql, x);
						break;
					}
				case 4:
					{
						float x;
						scanf("%f%*c", &x);
						stack_float_push(qf, x);
						break;
					}
				case 5:
					{
						double x;
						scanf("%lf%*c", &x);
						stack_double_push(qd, x);
						break;
					}
				case 6:
					{
						char v;
						char* x = (char *)mymalloc(sizeof(char));
						scanf("%c%*c", &v);
						*x = v;
						stack_ptr_to_char_push(qpc, x);
						break;
					}
				case 7:
					{
						short v;
						short* x = (short *)mymalloc(sizeof(short));
						scanf("%hd%*c", &v);
						*x = v;
						stack_ptr_to_short_push(qps, x);
						break;
					}
				case 8:
					{
						int v;
						int* x = (int *)mymalloc(sizeof(int));
						scanf("%d%*c", &v);
						*x = v;
						stack_ptr_to_int_push(qpi, x);
						break;
					}
				case 9:
					{
						long v;
						long* x = (long *)mymalloc(sizeof(long));
						scanf("%ld%*c", &v);
						*x = v;
						stack_ptr_to_long_push(qpl, x);
						break;
					}
				case 10:
					{
						float v;
						float* x = (float *)mymalloc(sizeof(float));
						scanf("%f%*c", &v);
						*x = v;
						stack_ptr_to_float_push(qpf, x);
						break;
					}
				case 11:
					{
						double v;
						double* x = (double *)mymalloc(sizeof(double));
						scanf("%lf%*c", &v);
						*x = v;
						stack_ptr_to_double_push(qpd, x);
						break;
					}
			}
		}
		else if (op == 2)
		{
			int ty;
			printf("(0) char, (1) short, (2) int, (3) long, (4) float, (5) double, (6) char* (7) short*, (8) int*, (9) long*, (10) float*, (11) double*\n");
			printf("type: ");
			scanf("%d%*c", &ty);
			switch(ty)
			{
				case 0:
					if (qc->size)
					{
						printf("value returned: %c\n", stack_char_top(qc));
						stack_char_pop(qc);
					}
					else
						printf("empty\n");
					break;
				case 1:
					if (qs->size)
					{
						printf("value returned: %hd\n", stack_short_top(qs));
						stack_short_pop(qs);
					}
					else
						printf("empty\n");
					break;
				case 2:
					if (qi->size)
					{
						printf("value returned: %d\n", stack_int_top(qi));
						stack_int_pop(qi);
					}
					else
						printf("empty\n");
					break;
				case 3:
					if (ql->size)
					{
						printf("value returned: %ld\n", stack_long_top(ql));
						stack_long_pop(ql);
					}
					else
						printf("empty\n");
					break;
				case 4:
					if (qf->size)
					{
						printf("value returned: %f\n", stack_float_top(qf));
						stack_float_pop(qf);
					}
					else
						printf("empty\n");
					break;
				case 5:
					if (qd->size)
					{
						printf("value returned: %lf\n", stack_double_top(qd));
						stack_double_pop(qd);
					}
					else
						printf("empty\n");
					break;
				case 6:
					if (qpc->size)
					{
						printf("value returned: %c\n", *stack_ptr_to_char_top(qpc));
						myfree(stack_ptr_to_char_top(qpc));
						stack_ptr_to_char_pop(qpc);
					}
					else
						printf("empty\n");
					break;
				case 7:
					if (qps->size)
					{
						printf("value returned: %hd\n", *stack_ptr_to_short_top(qps));
						myfree(stack_ptr_to_short_top(qps));
						stack_ptr_to_short_pop(qps);
					}
					else
						printf("empty\n");
					break;
				case 8:
					if (qpi->size)
					{
						printf("value returned: %d\n", *stack_ptr_to_int_top(qpi));
						myfree(stack_ptr_to_int_top(qpi));
						stack_ptr_to_int_pop(qpi);
					}
					else
						printf("empty\n");
					break;
				case 9:
					if (qpl->size)
					{
						printf("value returned: %ld\n", *stack_ptr_to_long_top(qpl));
						myfree(stack_ptr_to_long_top(qpl));
						stack_ptr_to_long_pop(qpl);
					}
					else
						printf("empty\n");
					break;
				case 10:
					if (qpf->size)
					{
						printf("value returned: %f\n", *stack_ptr_to_float_top(qpf));
						myfree(stack_ptr_to_float_top(qpf));
						stack_ptr_to_float_pop(qpf);
					}
					else
						printf("empty\n");
					break;
				case 11:
					if (qpd->size)
					{
						printf("value returned: %lf\n", *stack_ptr_to_double_top(qpd));
						myfree(stack_ptr_to_double_top(qpd));
						stack_ptr_to_double_pop(qpd);
					}
					else
						printf("empty\n");
					break;
			}
		}
		else if (op == 3)
		{
			int ty;
			printf("(0) char, (1) short, (2) int, (3) long, (4) float, (5) double, (6) char* (7) short*, (8) int*, (9) long*, (10) float*, (11) double*\n");
			printf("type: ");
			scanf("%d%*c", &ty);
			switch(ty)
			{
				case 0:
					if (qc->size)
						printf("value returned: %c\n", stack_char_top(qc));
					else
						printf("empty\n");
					break;
				case 1:
					if (qs->size)
						printf("value returned: %hd\n", stack_short_top(qs));
					else
						printf("empty\n");
					break;
				case 2:
					if (qi->size)
						printf("value returned: %d\n", stack_int_top(qi));
					else
						printf("empty\n");
					break;
				case 3:
					if (ql->size)
						printf("value returned: %ld\n", stack_long_top(ql));
					else
						printf("empty\n");
					break;
				case 4:
					if (qf->size)
						printf("value returned: %f\n", stack_float_top(qf));
					else
						printf("empty\n");
					break;
				case 5:
					if (qd->size)
						printf("value returned: %lf\n", stack_double_top(qd));
					else
						printf("empty\n");
					break;
				case 6:
					if (qpc->size)
						printf("value returned: %c\n", *stack_ptr_to_char_top(qpc));
					else
						printf("empty\n");
					break;
				case 7:
					if (qps->size)
						printf("value returned: %hd\n", *stack_ptr_to_short_top(qps));
					else
						printf("empty\n");
					break;
				case 8:
					if (qpi->size)
						printf("value returned: %d\n", *stack_ptr_to_int_top(qpi));
					else
						printf("empty\n");
					break;
				case 9:
					if (qpl->size)
						printf("value returned: %ld\n", *stack_ptr_to_long_top(qpl));
					else
						printf("empty\n");
					break;
				case 10:
					if (qpf->size)
						printf("value returned: %f\n", *stack_ptr_to_float_top(qpf));
					else
						printf("empty\n");
					break;
				case 11:
					if (qpd->size)
						printf("value returned: %lf\n", *stack_ptr_to_double_top(qpd));
					else
						printf("empty\n");
					break;
			}
		}
		else if (op == 4)
			break;
	}

	return 0;
}
