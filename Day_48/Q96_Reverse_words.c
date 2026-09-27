/* Q96 (Strings) Reverse each word in a sentence without changing the word order.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int start = 0;

    for (int i = 0;; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            int end = i - 1;

            // Reverse the current word
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    printf("Output: %s", str);

    return 0;
}