
#include<stdio.h>
#include<math.h>

int main() {
	float a;
	float b;
	float c;
	printf("a , b , c:");
	scanf("%f %f %f",&a,&b,&c);

	float D= b*b-4*a*c;

	if(D>0) {
		float root1 = (-b+sqrt(D))/(2*a);
		float root2 = (-b-sqrt(D))/(2*a);

		printf("%f , %f",root1,root2);
	}

	else if(D == 0)
	{
		float root1;
		root1=-b/(2*a);

		printf("%f",root1);
	}

	else
	{
		float real = -b / (2*a);
		float imaginary = sqrt(-D) / (2*a);

		printf("%.2f + %.2fi\n", real, imaginary);
		printf("%.2f - %.2fi", real, imaginary);
	}
	return 0;
}