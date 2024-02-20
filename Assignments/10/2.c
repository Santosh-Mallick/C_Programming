//Question2. Write a program to display the contents of a file.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("File does not exist or cannot be opened.\n");
        exit(1);
    }

    printf("Contents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}

// OUTPUT
// Contents of the file:
// Hello From Mars


//EXPLANATION(isko nahi likna hai)
// This program opens a file named "input.txt", reads its contents character by character, and displays them on the screen. If the file does not exist or cannot be opened, it prints an error message.


//NOTE(isko nahi likna hai)
//Q. What is EOF?
//A. In the code provided, EOF stands for "End of File". It's a constant defined in the <stdio.h> header file and typically has a value of -1.In the context of file input/output in C, when you read from a file using functions like fgetc() or fgets(), the value returned by these functions will be EOF when the end of the file is reached. This signals that there are no more characters to read from the file.So, in the while loop condition while ((ch = fgetc(file)) != EOF), the loop continues as long as fgetc() doesn't return EOF, meaning there are still characters to read from the file. Once EOF is encountered, the loop exits.