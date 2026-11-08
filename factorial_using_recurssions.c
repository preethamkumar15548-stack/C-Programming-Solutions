#include <stdio.h>

int factorial(int n) {
	if (n==0 || n==1) {
		return 1;
	}
	return n * factorial(n-1);
}



int main()
{
	int a;
	int i;
//	for(i=0; i<=5; i++) {
		printf("For which number u want to know the factorial of:");
		scanf("%d",&a);
		printf("factorial of %d is %d\n",a,factorial(a));
//	}

//for loop is used to find factorial of multiple numbers but here we are taking input from user for only one number and finding its factorial using recursion.
	return 0;
}
