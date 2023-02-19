#include <stdio.h>

int main()
{
	int a, b, sum;
	
	printf("Enter two numbers\n");
	scanf("%d %d,", &a, &b);
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	sum = a + b;
	printf("Sum = %d", sum);
	
	return 0;
}
