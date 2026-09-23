
/* Q81 (Strings)
Count characters in a string without using built-in length functions.*/
#include <stdio.h>
#define MAX 100

int main() {
    int count = 0;
    char arr[MAX];
    printf("Enter string: ");
    scanf("%s", &arr);
   

    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    printf("%d", count);
    
  

    return 0;
}
