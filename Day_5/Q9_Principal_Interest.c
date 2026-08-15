

#include <stdio.h>
#include <math.h>

int main() {

    float principal, rate, time;
    float simpleinterest, compoundinterest;
    float simpleamount, compoundamount;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest in (%%): ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    simpleinterest = (principal * rate * time) / 100;
    simpleamount = principal + simpleinterest;

    compoundamount = (principal * pow(1  + rate/100, time)) ;
    compoundinterest = compoundamount - principal;

    printf("Simple interest: %.2f\n", simpleinterest);
    printf("Simple amount: %.2f\n", simpleamount);

    printf("Compund interest: %.2f\n",compoundinterest);
    printf("Compound amount: %.2f\n", compoundamount);

    return 0;
}