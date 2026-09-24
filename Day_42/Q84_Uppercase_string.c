
/* Q84 (Strings) Convert a lowercase string to uppercase without using built-in functions.*/
#include <stdio.h>
#include <ctype.h>
#define MAX 100

int main() {
  
  
    char arr[MAX];
    printf("Enter string: ");
    scanf("%s", arr);
   

    for(int i = 0; arr[i] != '\0'; i++){
        arr[i] = toupper(arr[i]);
        
     
        }
    
    printf("%s\n", arr);
  
  
    
  

    return 0;
}