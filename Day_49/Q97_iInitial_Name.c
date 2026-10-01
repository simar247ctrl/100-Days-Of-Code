/* Q96 (Strings) Reverse each word in a sentence without changing the word order.*/

#include <stdio.h>

int main() {
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print first initial
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Print initials after each space
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf(".%c", name[i]);
    }

    printf("\n");

    return 0;
}