
#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    printf("Enter text:");
    fgets(str,sizeof(str),stdin);
printf("%s",str);    
return 0;
    
}