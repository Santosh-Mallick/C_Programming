//Question4. Write a program to create a text file named "MyInfo.txt", open it, type-in some information About yourself and count the number of characters in the file.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char information[1000];
    int characterCount = 0;

    file = fopen("MyInfo.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    printf("Type some information about yourself (max 999 characters):\n");
    fgets(information, sizeof(information), stdin);

    fprintf(file, "%s", information);
    fclose(file);

    file = fopen("MyInfo.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while (fgetc(file) != EOF) {
        characterCount++;
    }
    fclose(file);

    printf("Number of characters in the file: %d\n", characterCount);

    return 0;
}

// OUTPUT
// Type some information about yourself (max 999 characters):
// I am a hard-working and driven individual who isn't afraid to face a challenge.
// Number of characters in the file: 80


//EXPLANATION(isko nahi likna hai)
// This program first creates a file named "MyInfo.txt" and prompts the user to type some information about themselves, which is then written to the file. Afterward, it reopens the file for reading and counts the number of characters by reading the file character by character until 'EOF' (End of File) is reached. Finally, it prints out the total number of characters in the file.