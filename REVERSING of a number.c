
#include <stdio.h>

int main()
{
  int n;
  int p;
  int rev=0;
  int rem;
  printf("n:");
  scanf("%d",&n);
  p=n;
  
  while( n!= 0){
      rem = n%10;
      
      rev= rev*10+ rem;
      n=n/10;
    
  }
  printf("reversed number of %d is %d\n",p,rev);
    return 0;
}