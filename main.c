
#include <stdio.h>

int main() {

    // Declare variables
    float basicSalary, housingAllowance;
    float transportAllowance, deductions;
    float grossSalary, netSalary;

    // Accept employee information
    printf("Enter Basic Salary (NAD): ");
    scanf("%f", &basicSalary);

    printf("Enter Housing Allowance (NAD): ");
    scanf("%f", &housingAllowance);

    printf("Enter Transport Allowance (NAD): ");
    scanf("%f", &transportAllowance);

    printf("Enter Deductions (NAD): ");
    scanf("%f", &deductions);

    // Calculate gross salary
    grossSalary = basicSalary + housingAllowance
                  + transportAllowance;

    // Calculate net salary
    netSalary = grossSalary - deductions;

    // Display salary information
    printf("\n----- EMPLOYEE SALARY DETAILS -----\n");

    printf("Gross Salary: NAD %.2f\n", grossSalary);
    printf("Net Salary: NAD %.2f\n", netSalary);

    // Determine income category
    if (netSalary >= 20000) {
        printf("Income Category: High Income\n");
    } else {
        printf("Income Category: Standard Income\n");
    }

    return 0;
}
