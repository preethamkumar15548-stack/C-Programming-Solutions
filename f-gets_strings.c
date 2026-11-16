
#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    printf("Enter text:");
    fgets(str,sizeof(str),stdin);
printf("%s",str);    


/*   
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100] = "SNIST";
    char b[100] = "College";
    char c[100];

    // 1. strlen() - Calculates the length of a string
    printf("Length of a = %d\n", (int)strlen(a));


    // 2. strcpy() - Copies one string into another
    strcpy(c, a);
    printf("Copied string = %s\n", c);


    // 3. strcmp() - Compares two strings
    if(strcmp(a, b) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }


    // 4. strcat() - Combines two strings
    strcat(a, b);
    printf("Concatenated string = %s\n", a);


    // 5. strrev() - Reverses a string
    // Note: strrev() is not supported by all C compilers.
    strrev(b);
    printf("Reversed string = %s\n", b);
*/
    return 0;
}

    return 0;
    
}
