#include <stdio.h>

int main(){

    int n1 = 1;
    int n2 = -20;
    int n3 = 300;

    printf("%4d\n", n1);
    printf("%+d\n", n2);
    printf("%-3d\n", n3);

    float price = 29.99;
    float price2 = 2.50;
    float price3 = -2500.00;

    printf("%+7.1f\n",price);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);



    return 0;
}