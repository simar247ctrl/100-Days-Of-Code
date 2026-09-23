/* Q82 (Strings)
Print each character of a string on a new line.*/
#include <stdio.h>
#define MAX 100

int main() {
  
    char arr[MAX];
    printf("Enter string: ");
    scanf("%s", &arr);
   

    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c\n", arr[i]);
    }
  
    
  

    return 0;
}
