
#include <stdio.h>

int main()
{
   int pos,value;
   scanf("%d %d",&pos,&value);

   int a[10] = { 1, 4 ,5 ,6,7};
   int n=5;
   for(int i=n;i>pos;i--){
       a[i]=a[i-1];
   }
    
    a[pos]=value;
    n++;
    for(int i =0 ; i< n ; i++){
        printf("%d ",a[i]);
    }
   
    return 0;
}