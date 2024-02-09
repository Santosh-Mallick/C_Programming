#include <stdio.h>

struct student {
    char name[50];
    int roll_number;
    int marks;
};

int main() {
    struct student s[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter the details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll number: ");
        scanf("%d", &s[i].roll_number);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("The details of all students are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %d\n", s[i].roll_number);
        printf("Marks: %d\n", s[i].marks);
    }

    return 0;
}

// Output
// The details of all students are:
// Student 1:
// Name: a
// Roll number: 1
// Marks: 25
// Student 2:
// Name: b
// Roll number: 35
// Marks: 14
// Student 3:
// Name: c
// Roll number: 48
// Marks: 35
// Student 4:
// Name: d
// Roll number: 28
// Marks: 57
// Student 5:
// Name: e
// Roll number: 48
// Marks: 26