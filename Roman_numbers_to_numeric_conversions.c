#include <stdio.h>
#include <string.h>

int val(char ch){
    switch(ch){
        case 'I': return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
    }
    return 0;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    char str[20];
    scanf("%19s",str);
    int sum=0;
    int n=strlen(str);
    
    for(int i=0;i<n;i++){
        int curr=val(str[i]);
        int max=val(str[i+1]);
        if(curr<max){
            sum-=curr;
        }
        else
        sum+=curr;
    }
    
    
    printf("%d\n",sum);
}
return 0;
    }
    
    
    
 