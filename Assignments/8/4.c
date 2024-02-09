#include <stdio.h>
#include <string.h>

struct address {
  char street[100];
  char city[100];
  char state[100];
  int zipcode;
};

struct employee {
  int id;
  char name[100];
  struct address addr;
};

int main() {
  struct employee emp;

  emp.id = 1;
  strcpy(emp.name, "Aman Singh");
  strcpy(emp.addr.street, "123 Main Street");
  strcpy(emp.addr.city, "uptown");
  strcpy(emp.addr.state, "LA");
  emp.addr.zipcode = 12345;

  printf("Employee ID: %d\n", emp.id);
  printf("Employee Name: %s\n", emp.name);
  printf("Employee Address:\n");
  printf("  Street: %s\n", emp.addr.street);
  printf("  City: %s\n", emp.addr.city);
  printf("  State: %s\n", emp.addr.state);
  printf("  Zipcode: %d\n", emp.addr.zipcode);

  return 0;
}

// Output
// Employee ID: 1
// Employee Name: Aman Singh
// Employee Address:
//   Street: 123 Main Street
//   City: uptown
//   State: LA
//   Zipcode: 12345