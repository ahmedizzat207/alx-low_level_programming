#ifndef CALCULATOR
#define CALCULATOR

/**
 * struct op - a structure to store operators and it's functions
 *
 * @op: a pointer to character that store the operator's sign
 * @f: a pointer to function that execute the operation assigned to the
 * operator
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;


int (*get_op_func(char *s))(int, int);

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


#endif /* #ifndef CALCULATOR */
