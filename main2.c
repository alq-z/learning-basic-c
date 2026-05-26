#include <stdio.h>
#include <stdbool.h>

int main() {
    //Variable = A reusable container for a value.
    // Behave as if it wre the valueit contains.

    int age = 25;
    int year = 2029;
    int quantity = 1;

    float gpa = 3.6;
    float price = 19.99;

    double pi = 3.123456789012345;
    double e = 2.798730911719799;


    printf("I am %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d of x items \n", quantity);
    
    printf("Your gpa is %.1f \n", gpa);
    printf("The price is$%f\n", price);

    printf("The value of pi is %lf\n", pi);
    printf("The value of e is %.14lf\n", e);

    // ---- char it store a single character and it use single quote
    // char format specifier is %c

    char grade = 'F';
    char symbol = '8';
    char currency = '%';
    

    printf("My grade is %c\n", grade);
    printf("My favorate symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);

    // Array of Character can store more than 1 character and it's double qoute
    // format specifier is %s

    char name[] = "Dio Gynarra";
    char nickName[] ="Diggy";
    char email[] = "dbm456@gmail.com";

    printf("Hi I'm %s\n", name);
    printf("And My nickname is %s\n", nickName);
    printf("Email me at %s\n", email);
    
    // Bool is either true or false, 1 or 0. But to work with booleans you need to #include <stdbool.h> meaning standard boolean
    // The format specifier is %d

    bool isOnline = true;
    bool isStudent = 0;

    printf("%d\n", isOnline);

    if(isStudent){
        printf("You can enter!\n");
    }else{
        printf("You Shall Not Pass!\n");
    }


    // lesson
    /*
    variable = A reusable container for a value.
    - Behaves as if it were the value it contains.

    int = Whole numbers (4 bytes in modern systems) The Specifier is %d
    float = single-precision decimal number (4 bytes) The Specifier is %f
    double = double-precision decimal number (8 bytes) The Specifier is %lf
    char = single character (1 byte) The Specifier is %c
    char[] = array of characters or known as string (size varies) The Specifier is %s
    bool = true or false (1 byte, requires <stdbool.h>) The Specifier is %d
    
    */

    int age = 48;
    printf("My age is %d\n", age);

    float gpa =  4.5;
    printf("My average grade is %f\n", gpa);
    float score = 6.6;
    printf("My score is %.1f\n", score);

    double pi = 6.34529828983;
    printf("This Pi is will show 6 degits defaul %lf\n",pi);
    double e = 8.7938934747;
    printf("This is will show full digits %.10lf\n", e);

    char grade = 'B';
    printf("my grade is %c\n",grade);

    char fullName[] = "Giorno Giovanni";
    printf("My name is %s\n", fullName);

    bool isFull = true;
    printf("%d", isFull);










    return 0;
}