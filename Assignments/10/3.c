//Question3. Write a program to copy the contents of one file to another file.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Unable to open source file.\n");
        exit(1);
    }

    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        printf("Unable to create destination file.\n");
        fclose(sourceFile); 
        exit(1);
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}

//OUTPUT
//File copied successfully.


//NOTE(isko nahi likna hai)
//This program opens a source file named "source.txt" for reading and a destination file named "destination.txt" for writing. Then, it copies the contents of the source file to the destination file character by character using fgetc() and fputc() functions. Finally, it closes both files.