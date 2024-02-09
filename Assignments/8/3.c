#include <stdio.h>

struct employee {
  int employee_id;
  char employee_name[30];
  float basic_salary;
  float pf;
  float hra;
  float da;
  float gross_salary;
  float net_salary;
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
// Employee ID: 25
// Employee Name: a
// Basic Salary: 10000.00
// PF: 2500.00
// HRA: 3600.00
// DA: 1000.00
// Gross Salary: 14600.00
// Net Salary: 12100.00

// Employee ID: 26
// Employee Name: b
// Basic Salary: 5800.00
// PF: 2600.00
// HRA: 850.00
// DA: 2000.00
// Gross Salary: 8650.00
// Net Salary: 6050.00

// Employee ID: 261
// Employee Name: g
// Basic Salary: 14000.00
// PF: 2600.00
// HRA: 1200.00
// DA: 1500.00
// Gross Salary: 16700.00
// Net Salary: 14100.00

// Employee ID: 7081068
// Employee Name: n
// Basic Salary: 16000.00
// PF: 2400.00
// HRA: 1500.00
// DA: 17.00
// Gross Salary: 17517.00
// Net Salary: 15117.00

// Employee ID: 24
// Employee Name: m
// Basic Salary: 15000.00
// PF: 2600.00
// HRA: 3250.00
// DA: 2480.00
// Gross Salary: 20730.00
// Net Salary: 18130.00