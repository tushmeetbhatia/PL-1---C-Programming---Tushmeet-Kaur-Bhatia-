/* Program (34) -> Write a program to define a union containing an integer, a float, and a character 
 and demonstrate how memory is shared among its members.
*/
#include <stdio.h>
union Data {
    int i;
    float f;
    char ch;
};
int main() {
    union Data d;                                                    //Declare a union variable
    //Display the total memory allocated to the union
    printf("Size of union: %lu bytes\n", sizeof(d));
    //Display the memory size of each member
    printf("\nMemory size of Each Member:\n");
    printf("Size of integer: %lu bytes\n", sizeof(d.i));             //Display size of integer
    printf("Size of float: %lu bytes\n", sizeof(d.f));               //Display size of float
    printf("Size of character: %lu bytes\n", sizeof(d.ch));          //Display size of character
    //Display the memory address of each member
    printf("\nMemory Address of Each Member:\n");
    printf("Address of integer: %p\n", (void*)&d.i);                 //Display integer address
    printf("Address of float: %p\n", (void*)&d.f);                   //Display float address
    printf("Address of character: %p\n", (void*)&d.ch);              //Display character address
    //Assign a value to the integer member
    d.i = 100;                                                       //store 100 in integer member
    printf("\nInteger Value: %d\n", d.i);                            //Display integer value
    //Assign a value to the float member
    d.f = 25.5;                                                      //store 25.5 in float member
    printf("Float Value: %.2f\n", d.f);                              //Display float value
    //Assign a value to the character member
    d.ch = 'A';                                                      //store 'A' in character member
    printf("Character Value: %c\n", d.ch);                           //Display character value
    return 0;
}
