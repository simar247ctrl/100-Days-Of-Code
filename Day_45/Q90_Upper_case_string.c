/* Q90 (Strings)
Toggle case of each character in a string.*/

#include <stdio.h>
#include <ctype.h>
#define MAX 100

int main() {
    char arr[MAX];
    char x;
    int  i = 0;

    printf("Enter a string: ");
    scanf("%s", arr);
    
    while(arr[i] != '\0'){
        if(islower(arr[i]) ){
            arr[i] = toupper(arr[i]);
           
        }
        else if(isupper(arr[i])){
            arr[i] = tolower(arr[i]);
        }
        i++;
       
    }
    printf("%s", arr);
 

   
    return 0;
}