#include <stdio.h>

struct employee {
  int employee_id;
  char employee_name[30];
  float basic_salary,pf,hra,da,gross_salary,net_salary;
};

int main() {
  struct employee employees[5];

  for (int i = 0; i < 5; i++) {
    printf("Enter the details of employee %d:\n", i + 1);
    printf("Employee ID: ");
    scanf("%d", &employees[i].employee_id);
    printf("Employee Name: ");
    scanf("%s", employees[i].employee_name);
    printf("Basic Salary: ");
    scanf("%f", &employees[i].basic_salary);
    printf("PF: ");
    scanf("%f", &employees[i].pf);
    printf("HRA: ");
    scanf("%f", &employees[i].hra);
    printf("DA: ");
    scanf("%f", &employees[i].da);

    employees[i].gross_salary = employees[i].basic_salary + employees[i].hra + employees[i].da;

    employees[i].net_salary = employees[i].gross_salary - employees[i].pf;
  }

  printf("\nDetails of all employees:\n");
  for (int i = 0; i < 5; i++) {
    printf("Employee ID: %d\n", employees[i].employee_id);
    printf("Employee Name: %s\n", employees[i].employee_name);
    printf("Basic Salary: %.2f\n", employees[i].basic_salary);
    printf("PF: %.2f\n", employees[i].pf);
    printf("HRA: %.2f\n", employees[i].hra);
    printf("DA: %.2f\n", employees[i].da);
    printf("Gross Salary: %.2f\n", employees[i].gross_salary);
    printf("Net Salary: %.2f\n\n", employees[i].net_salary);
  }

  return 0;
}
// Output
// Details of all employees:
// Employee ID: 1002
// Employee Name: Praveen
// Basic Salary: 15000.00
// PF: 2550.00
// HRA: 1000.00
// DA: 500.00
// Gross Salary: 16500.00
// Net Salary: 13950.00

// Employee ID: 1003
// Employee Name: Ankit
// Basic Salary: 18000.00
// PF: 2730.00
// HRA: 1100.00
// DA: 600.00
// Gross Salary: 19700.00
// Net Salary: 16970.00

// Employee ID: 1004
// Employee Name: Amit
// Basic Salary: 16000.00
// PF: 2300.00
// HRA: 1200.00
// DA: 400.00
// Gross Salary: 17600.00
// Net Salary: 15300.00

// Employee ID: 1005
// Employee Name: Kabir
// Basic Salary: 15500.00
// PF: 2650.00
// HRA: 1020.00
// DA: 550.00
// Gross Salary: 17070.00
// Net Salary: 14420.00

// Employee ID: 1006
// Employee Name: Aman
// Basic Salary: 19000.00
// PF: 2120.00
// HRA: 1200.00
// DA: 700.00
// Gross Salary: 20900.00
// Net Salary: 18780.00