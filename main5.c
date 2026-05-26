#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; //Character is 1 only and single quote
    char name[30] = ""; // this is string and it set to 30 string or bit
    // I need to use null terminator \0 in an empty char or string value to effectively clear it our effectively the input buffer
    // or getchar() to clear the input buffer
    printf("Enter Your Age: ");
    scanf("%d", &age);

    

    printf("Enter your gpa:");
    scanf("%f", &gpa);

    

    printf("enter your Grade:");
    scanf(" %c", &grade); //need to clear the input buffer by putting before %c

    

    getchar();
    printf("Namae wa nan deska?:");
    fgets(name, sizeof(name), stdin); //stdin is standard input
    // scanf("%s", name);
    name[strlen(name) - 1] = '\0';
   
    printf("So your'e name is %s\n", name);
    printf("Oh! Your'e in your %ds\n", age);
    printf("So your gpa is %.2f \n", gpa);
    printf("Your Grade is %c \n", grade);
   


    return 0;
}