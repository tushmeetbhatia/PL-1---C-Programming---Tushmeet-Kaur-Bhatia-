/* Program (37) -> Write a program to accept two strings and perform operations using built-in functions
1) Copy one string into another
2) Reversing the string
3) Length of the string
4) Compare two strings
5) Concatenate one string to another

Solution :using any built-in string functions
*/
#include <stdio.h>
#include <string.h>                                     //Header file for string functions
int main() {
    char str1[100], str2[100],str3[100];                          
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");                             
    scanf("%s", str2);
    //1) Copy one string into another
    strcpy(str3, str1);
    printf("\nCopied String: %s\n", str3);
    //2) Reversing the first string
    printf("\nReversed of the first String:%s", strrev(str1));
    //3) Length of the first string
    printf("\nLength of first string: %d", strlen(str1)); 
    printf("\nLength of second string: %d", strlen(str2));
    //4) Compare two strings
    if(strcmp(str1, str2) == 0) {
        printf("\nBoth strings are equal");
    } else {
        printf("\nBoth strings are not equal");
    }
    //5) Concatenate one string to another
    strcat(str1, str2);                                 
    printf("\nConcatenated String: %s", str1);
    return 0;
}