/* Q98 (Strings) Print initials of a name with the surname displayed in full.*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int lastStart = 0;

    // Find the starting index of the last word
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != '\n')
            lastStart = i + 1;
    }

    // Print initials before the surname
    if (lastStart > 0) {
        printf("%c.", name[0]);

        for (int i = 1; i < lastStart; i++) {
            if (name[i - 1] == ' ' && name[i] != ' ')
                printf("%c.", name[i]);
        }
    }

    // Print surname in full
    printf(" ");
    for (int i = lastStart; name[i] != '\0' && name[i] != '\n'; i++) {
        printf("%c", name[i]);
    }

    return 0;
}