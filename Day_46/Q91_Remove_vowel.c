/* Q91 (Strings)
Remove all vowels from a string.*/

#include <stdio.h>
#define MAX 100

int main() {
    char str[MAX];
 
    char x;
    int count = 0, i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);


    while (str[i] != '\0') {
        // Check if the current character is NOT a vowel
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            str[j++] = str[i]; // Keep the character
        }
        i++;
    }
    str[j] = '\0'; // Append the new null terminator

    printf("Modified: %s\n", str);



    

   
   
    return 0;
}