#include <stdio.h> 
 
int countOccurrences(char str[], char ch) { 
    int count = 0; 
    for (int i = 0; str[i] != '\0'; i++) { 
        if (str[i] == ch) { 
            count++; 
        } 
    } 
    return count; 
} 
 
int main() { 
    char str[100]; 
    char ch; 
     
    printf("Enter a string: "); 
    scanf("%[^\n]%*c", str); // Reading the whole line, including spaces 
    printf("Enter the character to find occurrences of: "); 
    scanf("%c", &ch); 
 
    int occurrence = countOccurrences(str, ch); 
    printf("The character '%c' occurs %d times in the string.\n", ch, occurrence); 
 
    return 0; 
} 

// Output
// Enter a string: mississippi
// Enter the character to find occurrences of: s
// The character 's' occurs 4 times in the string.
