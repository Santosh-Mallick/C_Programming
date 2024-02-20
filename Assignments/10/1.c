//Question1. Write a program to read data from keyboard, write it to a file called input, again read the same data from the input file and display it on the screen.

#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

int main() {
    char data[MAX_LENGTH];

    printf("Enter data: ");
    fgets(data, MAX_LENGTH, stdin);

    FILE *file = fopen("input.txt", "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening file.\n");
        exit(1);
    }
    fprintf(file, "%s", data);
    fclose(file);

    file = fopen("input.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file.\n");
        exit(1);
    }
    printf("Data read from input file:\n");
    while (fgets(data, MAX_LENGTH, file) != NULL) {
        printf("%s", data);
    }
    fclose(file);

    return 0;
}

// OUTPUT
// Enter data: Hello From Mars
// Data read from input file:
// Hello From Mars


//EXPLANATION(isko nahi likna hai)
// This program reads data from the keyboard, writes it to a file named "input.txt", reads the same data from the file, and displays it on the screen.


//NOTE(isko nahi likna hai)
//Q. what is stderr?
//A. stderr refers to the standard error stream in C. It's a predefined file stream in the C standard library that is typically used to output error messages and diagnostics.

// In the context of the code:
// fprintf(stderr, "Error opening file.\n");

// Here, fprintf() is used to print the error message "Error opening file." to the stderr stream. This is commonly done when there is an issue with file handling, such as failing to open a file for reading or writing. By printing the error message to stderr, it separates error messages from normal output, making it easier to distinguish and redirect error messages separately from the standard output.Using stderr ensures that error messages are displayed promptly, even if standard output is redirected to a file or another program. It's a good practice to use stderr for error messages to differentiate them from regular program output.
