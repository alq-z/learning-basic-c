#include <stdio.h>
#include <string.h>

int main(){
    
    char items[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(items, sizeof(items), stdin);
    items[strlen(items) - 1] = '\0';

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s", quantity, items);
    printf("The total is %c%.2f\n", currency, total);

    return 0;
}