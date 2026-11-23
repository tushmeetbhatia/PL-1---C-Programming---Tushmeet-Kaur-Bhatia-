/* Program (35) -> Write a program to accept the details of N employees using an array of structures and display
the stared employee information.
*/
#include <stdio.h>
struct Employee {
    int emp_id;
    char name[50];
    float salary;
};
int main() {
    int n,i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee emp[n];                             //Declare an array of structures
    //Accept employee details
    for(i=0; i<n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].emp_id);
        printf("Enter Employee Name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("Enter Employee Salary: ");
        scanf("%f", &emp[i].salary);
    }
    //Display stored employee details
    printf("\n======Employee Details======\n");
    for(i=0; i<n; i++) {
        printf("Employee ID: %d\n", emp[i].emp_id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }
    return 0;
}