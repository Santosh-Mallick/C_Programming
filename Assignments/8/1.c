#include <stdio.h>
#include <string.h>

union student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    union student s1;

    // Initialize the union
    s1.roll = 1;
    strcpy(s1.name, "John Doe");
    s1.marks = 90.0;

    // Display the union
    printf("Roll number: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %f\n", s1.marks);

    return 0;
}