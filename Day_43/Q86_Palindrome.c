
/* Q86 (Strings) Check if a string is a palindrome.*/
#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
  
  
    char arr[MAX];
    int j ,  i = 0;;
    printf("Enter string: ");
    scanf("%s", arr);
    j = strlen(arr) - 1;
    while(arr[i] != '\0' ){
        if(arr[i] != arr[j]){
            printf("Not palindrome! ");
            return 0;
        }
        i++;
        j--;
    }
    printf("Palindrome ");
   

  

    
    
  
  
  
    
  

    return 0;
}