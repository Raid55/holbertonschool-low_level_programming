#ifndef CALC
#define CALC
/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
/*op structure*/
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
/*stack of opertator functions*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/*get op function that returns function that gets called afterwards*/
int (*get_op_func(char *s))(int, int);
#endif
