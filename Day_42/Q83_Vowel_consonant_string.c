/* Q83 (Strings)
Count vowels and consonants in a string. */
#include <stdio.h>
#define MAX 100

int main() {
    int vowel_count = 0, consonant_count = 0;
  
    char arr[MAX];
    printf("Enter string: ");
    scanf("%s", &arr);
   

    for(int i = 0; arr[i] != '\0'; i++){
            if(arr[i] == 'a' || arr[i] == 'e' ||  arr[i] == 'i' ||  arr[i] == 'o' ||  arr[i]  == 'u' ||  arr[i] == 'A' ||  arr[i] == 'E' ||  arr[i] == 'I' ||  arr[i] == 'O' ||  arr[i] == 'U' ){
                vowel_count++;
            }
        else{
            consonant_count++;
        }
    }
    printf("Number of Vowels: %d\nh", vowel_count);
    printf("Number of consonants: %d", consonant_count);
  
    
  

    return 0;
}