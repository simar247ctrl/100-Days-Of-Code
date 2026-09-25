
/* Q85 (Strings) Reverse a string.*/
#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
  
  
    char arr[MAX];
    printf("Enter string: ");
    scanf("%s", arr);
   

    for(int i = strlen(arr); arr[i] != arr[0]; i--){
        printf("%c", arr[i]);
    
 
        
     
        }
    printf("%c", arr[0]);
    
  
  
  
    
  

    return 0;
}