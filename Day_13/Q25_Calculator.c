
#include <stdio.h>

int main() {
    int n1,n2;
    char op;

    printf("Enter a number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    printf("Enter a character for operation: ( +, -, *,/, %.): ");
    scanf(" %c", &op);
    switch(op){
        case '+': printf("%d ", n1+n2); break;
        case '-': printf("%d ", n1 - n2); break;
        case '*': printf("%d ", n1 *n2); break;
        case '/': printf("%d ", n1/n2 ); break;
        case '%': printf("%d ", n1 %n2); break;
    }

 
    

    return 0;
}