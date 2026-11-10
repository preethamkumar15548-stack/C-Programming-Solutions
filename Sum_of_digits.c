#include <stdio.h>

int main()
{
	int num;

	int sum=0;

	printf("Num: ");
	scanf("%d",&num);

		if(num < 0) {
			num = -num ;}
		

	while(num !=0) {
		int digit=num%10;

		sum=sum+digit;

		num= num/10;
	}

	printf("Sum of digits is %d",sum);

	return 0;
}
	\\in case if  you want to do multiplication of the digits then we have to declare prodect =1 in case of sum = 0.
