
#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    printf("Enter text:");
    fgets(str,sizeof(str),stdin);
printf("%s",str);    


    /*there are some more other things we can do with strings which include:
    1>strcpy:this copies string from one char to another char.

    char a[50] = {"SNIST"};
    char b[50];
    strcpy(b,a);

    printf("%s",b);
    
    //int he above code sting b gets the value stored in a.

    
        2>strcmp:this compares two strings
        in case if u want to get to know if both strings are equal use if condition and prive it
        if(strcmp(a,b)==0){
        printf("Strings are equal");
        }


        3>strcat:this combines 2 strings together
        like if string a=this is C and b =Language
        then use strcat(a,b) this combines both a and b strings but without any gap between them.
       
        
        4>strrev:this reverses the string and gives the output.*/
  
    return 0;
    
}
