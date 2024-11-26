/*95)WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.*/

#include <stdio.h>
#include <string.h>

struct Employee {
    int empNumber;
    char empName[50];
    float basicPay;
};

int main() {
    struct Employee employees[50];  
    struct Employee *ptr = employees; 
    int n;

    printf("Enter the number of employees (max 50): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &(ptr + i)->empNumber);
        printf("Employee Name: ");
        scanf(" %[^\n]", (ptr + i)->empName);
        printf("Basic Pay: ");
        scanf("%f", &(ptr + i)->basicPay);
    }

    printf("\nEmployee Details:\n");
    printf("Emp No.\tName\t\tBasic Pay\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%-15s\t%.2f\n", (ptr + i)->empNumber, (ptr + i)->empName, (ptr + i)->basicPay);
    }

    return 0;
}
