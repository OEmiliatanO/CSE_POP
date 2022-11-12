#include <stdio.h>
#include "src/mm.h"
#include "src/list.h"
#include "src/queue.h"

int main()
{
	queue_char* qc;
	queue_short* qs;
	queue_int* qi;
	queue_long* ql;
	queue_float* qf;
	queue_double* qd;
	
	queue_ptr_to_char* qpc;
	queue_ptr_to_short* qps;
	queue_ptr_to_int* qpi;
	queue_ptr_to_long* qpl;
	queue_ptr_to_float* qpf;
	queue_ptr_to_double* qpd;

	qc = new_queue_char();
	qs = new_queue_short();
	qi = new_queue_int();
	ql = new_queue_long();
	qf = new_queue_float();
	qd = new_queue_double();

	qpc = new_queue_ptr_to_char();
	qps = new_queue_ptr_to_short();
	qpi = new_queue_ptr_to_int();
	qpl = new_queue_ptr_to_long();
	qpf = new_queue_ptr_to_float();
	qpd = new_queue_ptr_to_double();
	int op;
	while(1)
	{
		printf("\n1:enqueue, 2:dequeue, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			int ty;
			printf("(0) char, (1) short, (2) int, (3) long, (4) float, (5) double, (6) char* (7) short*, (8) int*, (9) long*, (10) float*, (11) double*\n");
			printf("value type and value to be enqueued: ");
			scanf("%d%*c", &ty);
			switch(ty)
			{
				case 0:
					{
						char x;
						scanf("%c%*c", &x);
						queue_char_push(qc, x);
						break;
					}
				case 1:
					{
						short x;
						scanf("%hd%*c", &x);
						queue_short_push(qs, x);
						break;
					}
				case 2:
					{
						int x;
						scanf("%d%*c", &x);
						queue_int_push(qi, x);
						break;
					}
				case 3:
					{
						long x;
						scanf("%ld%*c", &x);
						queue_long_push(ql, x);
						break;
					}
				case 4:
					{
						float x;
						scanf("%f%*c", &x);
						queue_float_push(qf, x);
						break;
					}
				case 5:
					{
						double x;
						scanf("%lf%*c", &x);
						queue_double_push(qd, x);
						break;
					}
				case 6:
					{
						char v;
						char* x = (char *)mymalloc(sizeof(char));
						scanf("%c%*c", &v);
						*x = v;
						queue_ptr_to_char_push(qpc, x);
						break;
					}
				case 7:
					{
						short v;
						short* x = (short *)mymalloc(sizeof(short));
						scanf("%hd%*c", &v);
						*x = v;
						queue_ptr_to_short_push(qps, x);
						break;
					}
				case 8:
					{
						int v;
						int* x = (int *)mymalloc(sizeof(int));
						scanf("%d%*c", &v);
						*x = v;
						queue_ptr_to_int_push(qpi, x);
						break;
					}
				case 9:
					{
						long v;
						long* x = (long *)mymalloc(sizeof(long));
						scanf("%ld%*c", &v);
						*x = v;
						queue_ptr_to_long_push(qpl, x);
						break;
					}
				case 10:
					{
						float v;
						float* x = (float *)mymalloc(sizeof(float));
						scanf("%f%*c", &v);
						*x = v;
						queue_ptr_to_float_push(qpf, x);
						break;
					}
				case 11:
					{
						double v;
						double* x = (double *)mymalloc(sizeof(double));
						scanf("%lf%*c", &v);
						*x = v;
						queue_ptr_to_double_push(qpd, x);
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
						printf("value returned: %c\n", queue_char_top(qc));
						queue_char_pop(qc);
					}
					else
						printf("empty\n");
					break;
				case 1:
					if (qs->size)
					{
						printf("value returned: %hd\n", queue_short_top(qs));
						queue_short_pop(qs);
					}
					else
						printf("empty\n");
					break;
				case 2:
					if (qi->size)
					{
						printf("value returned: %d\n", queue_int_top(qi));
						queue_int_pop(qi);
					}
					else
						printf("empty\n");
					break;
				case 3:
					if (ql->size)
					{
						printf("value returned: %ld\n", queue_long_top(ql));
						queue_long_pop(ql);
					}
					else
						printf("empty\n");
					break;
				case 4:
					if (qf->size)
					{
						printf("value returned: %f\n", queue_float_top(qf));
						queue_float_pop(qf);
					}
					else
						printf("empty\n");
					break;
				case 5:
					if (qd->size)
					{
						printf("value returned: %lf\n", queue_double_top(qd));
						queue_double_pop(qd);
					}
					else
						printf("empty\n");
					break;
				case 6:
					if (qpc->size)
					{
						printf("value returned: %c\n", *queue_ptr_to_char_top(qpc));
						myfree(queue_ptr_to_char_top(qpc));
						queue_ptr_to_char_pop(qpc);
					}
					else
						printf("empty\n");
					break;
				case 7:
					if (qps->size)
					{
						printf("value returned: %hd\n", *queue_ptr_to_short_top(qps));
						myfree(queue_ptr_to_short_top(qps));
						queue_ptr_to_short_pop(qps);
					}
					else
						printf("empty\n");
					break;
				case 8:
					if (qpi->size)
					{
						printf("value returned: %d\n", *queue_ptr_to_int_top(qpi));
						myfree(queue_ptr_to_int_top(qpi));
						queue_ptr_to_int_pop(qpi);
					}
					else
						printf("empty\n");
					break;
				case 9:
					if (qpl->size)
					{
						printf("value returned: %ld\n", *queue_ptr_to_long_top(qpl));
						myfree(queue_ptr_to_long_top(qpl));
						queue_ptr_to_long_pop(qpl);
					}
					else
						printf("empty\n");
					break;
				case 10:
					if (qpf->size)
					{
						printf("value returned: %f\n", *queue_ptr_to_float_top(qpf));
						myfree(queue_ptr_to_float_top(qpf));
						queue_ptr_to_float_pop(qpf);
					}
					else
						printf("empty\n");
					break;
				case 11:
					if (qpd->size)
					{
						printf("value returned: %lf\n", *queue_ptr_to_double_top(qpd));
						myfree(queue_ptr_to_double_top(qpd));
						queue_ptr_to_double_pop(qpd);
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
						printf("value returned: %c\n", queue_char_top(qc));
					else
						printf("empty\n");
					break;
				case 1:
					if (qs->size)
						printf("value returned: %hd\n", queue_short_top(qs));
					else
						printf("empty\n");
					break;
				case 2:
					if (qi->size)
						printf("value returned: %d\n", queue_int_top(qi));
					else
						printf("empty\n");
					break;
				case 3:
					if (ql->size)
						printf("value returned: %ld\n", queue_long_top(ql));
					else
						printf("empty\n");
					break;
				case 4:
					if (qf->size)
						printf("value returned: %f\n", queue_float_top(qf));
					else
						printf("empty\n");
					break;
				case 5:
					if (qd->size)
						printf("value returned: %lf\n", queue_double_top(qd));
					else
						printf("empty\n");
					break;
				case 6:
					if (qpc->size)
						printf("value returned: %c\n", *queue_ptr_to_char_top(qpc));
					else
						printf("empty\n");
					break;
				case 7:
					if (qps->size)
						printf("value returned: %hd\n", *queue_ptr_to_short_top(qps));
					else
						printf("empty\n");
					break;
				case 8:
					if (qpi->size)
						printf("value returned: %d\n", *queue_ptr_to_int_top(qpi));
					else
						printf("empty\n");
					break;
				case 9:
					if (qpl->size)
						printf("value returned: %ld\n", *queue_ptr_to_long_top(qpl));
					else
						printf("empty\n");
					break;
				case 10:
					if (qpf->size)
						printf("value returned: %f\n", *queue_ptr_to_float_top(qpf));
					else
						printf("empty\n");
					break;
				case 11:
					if (qpd->size)
						printf("value returned: %lf\n", *queue_ptr_to_double_top(qpd));
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
