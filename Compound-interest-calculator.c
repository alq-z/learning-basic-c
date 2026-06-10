#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    //compound interest calculator

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator: ");
    scanf("%lf", &principal);

    printf("Enter Interest rate: ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter # of times compounded per year (n): ");
    scanf("%d", &timesCompounded);



    total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);

    printf("Loading...\n");
    printf("After %d years, the total will be $%.2lf\n", years, total);



    return 0;
}
