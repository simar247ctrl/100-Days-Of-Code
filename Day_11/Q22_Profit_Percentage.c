#include <stdio.h>

int main() {
    int cost_price, selling_price, profit_percent = 0;

    printf("Enter cost price: ");
    scanf("%d", &cost_price);

    printf("Enter selling price: ");
    scanf("%d", &selling_price);

    if(cost_price > selling_price){
        profit_percent =(cost_price - selling_price) * 100  / cost_price ; 
        printf("Loss: %d%%", profit_percent);

    }
    else if(selling_price > cost_price){
        profit_percent = (selling_price - cost_price) * 100 / cost_price ;
        printf("Profit: %d%%", profit_percent);
    }
    else{
        printf("No profit no loss");
    }
    



    
    return 0;
}