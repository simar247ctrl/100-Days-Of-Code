/* Q89 (Strings)
Count frequency of a given character in a string.*/

#include <stdio.h>
#define MAX 100

int main() {
    char arr[MAX];
    char x;
    int count = 0, i = 0;

    printf("Enter a string: ");
    scanf("%s", arr);

    printf("Enter a character to count frequency: ");
    scanf(" %c", &x);

    

    while(arr[i] != '\0'){
        if(arr[i] == x){
            count++;
           
        }
         i++;
    }
    printf("Frequency of %c: %d\n", x, count);

   
    return 0;
}