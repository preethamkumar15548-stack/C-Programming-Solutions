
#include <stdio.h>

int main() {

	int a[]= {12, 45, 7, 89,34,67};
		int high,second;
	high = a[0];
	second = a[-1];


	for(int i=1; i<6; i++) {
		if(a[i]>high) {

			high = a[i];

		}
		if(a[i]<high && a[i]>second) {
			second = a[i];
		}


	}

	printf("%d\n",high);
	printf("%d",second);


	return 0;
}
