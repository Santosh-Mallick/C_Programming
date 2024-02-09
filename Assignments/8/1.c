#include <stdio.h>

struct Student {
  char name[50];
  int roll_number;
  int age;
  double total_marks;
};

int main() {
  struct Student students[5];

  for (int i = 0; i < 5; i++) {
    printf("Enter the name of student %d: ", i + 1);
    scanf("%s", students[i].name);

    printf("Enter the roll number of student %d: ", i + 1);
    scanf("%d", &students[i].roll_number);

    printf("Enter the age of student %d: ", i + 1);
    scanf("%d", &students[i].age);

    printf("Enter the total marks of student %d: ", i + 1);
    scanf("%lf", &students[i].total_marks);
  }

  printf("\nDetails of all students:\n");
  for (int i = 0; i < 5; i++) {
    printf("Name: %s\n", students[i].name);
    printf("Roll number: %d\n", students[i].roll_number);
    printf("Age: %d\n", students[i].age);
    printf("Total marks: %.2lf\n\n", students[i].total_marks);
  }

  return 0;
}


// Output
// Details of all students:
// Name: abdul
// Roll number: 60
// Age: 19
// Total marks: 300.00

// Name: anuj
// Roll number: 12
// Age: 17
// Total marks: 302.00

// Name: sharad
// Roll number: 27
// Age: 18
// Total marks: 304.00

// Name: yuvraj
// Roll number: 3
// Age: 18
// Total marks: 350.00

// Name: saad
// Roll number: 13
// Age: 18
// Total marks: 325.00