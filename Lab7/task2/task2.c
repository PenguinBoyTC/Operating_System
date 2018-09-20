#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int sub (int a, int b);
int mul (int a, int b);
int di (int a, int b);
int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	printf("Operand 'a' : 6 | Operand 'b' : 3\nSpecify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide): ");
	int input;
	scanf("%d", &input);
	int (*op[])(int, int) = {add, sub, mul, di};
	printf("x = %d\n", op[input](6,3));
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int sub (int a, int b) { printf ("Subtracting ‘b' from 'a'\n"); return a - b; }
int mul (int a, int b) { printf ("Multiplying 'a' and 'b\n"); return a * b; }
int di (int a, int b) { printf ("Dividing 'a' by 'b'\n"); return a / b; }
