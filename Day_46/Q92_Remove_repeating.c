/* Q92 (Strings) Find the first repeating lowercase alphabet in a string.*/
#include <stdio.h>
#include <string.h>
#define MAX 100

char findFirstRepeating(const char *str) {
    // Array to keep track of visited characters (26 lowercase letters)
    // Initialized to 0 (false)
    int visited[26] = {0};

    // Traverse the string character by character
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if the character is a lowercase alphabet
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a'; // Map 'a'-'z' to 0-25

            // If it's already visited, this is the first repeating character
            if (visited[index] > 0) {
                return ch;
            }

            // Mark the character as visited
            visited[index] = 1;
        }
    }

    // Return a null character if no repeating lowercase letter is found
    return '\0'; 
}

int main() {
    char str[MAX] ;

    printf("Enter a string: ");
    scanf("%s", &str);

    
    
    char result = findFirstRepeating(str);
    
    if (result != '\0') {
        printf("The first repeating lowercase alphabet is: '%c'\n", result);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    
    return 0;
}
