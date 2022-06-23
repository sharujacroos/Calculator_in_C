#include <stdio.h>

float num1,num2;
int Addition(int a, int b);
int Subtraction(int a, int b);
int Multiplication(int a, int b);
int Division(int a, int b);
int Power(int a, int b);
int Remainder(int a, int b);
int select_op(char choice);
int Operations(char choice);

int main() {

    int k = 0;
    do  {
        char choice = ' ';
        printf("Select operation.\n");
        printf("1.Add       : +\n");
        printf("2.Subtract  : -\n");
        printf("3.Multiply  : *\n");
        printf("4.Divide    : /\n");
        printf("5.Power     : ^\n");
        printf("6.Remainder : %\n");
        printf("7.Terminate : #\n");
        printf("8.Reset     : $\n");
        scanf("%c",&choice);
        printf("%c\n",choice);
        if(select_op(choice) == -1){
            printf("Calculator is Terminated");
            break;
        }
        else if(select_op(choice) == 2) {
            printf("%0.2f %c %0.2f = %0.2f\n\n",(float)num1,choice,(float)num2,(float) Operations(choice));
        }
        else if(select_op(choice) == 1){

        }
    } while (k != 7);
    return 0;
}
int select_op(char choice){
    if(choice == '#'){
        return -1;
    }
    else{
        if(choice == '$'){
            return 1;
        } else{
            return 2;
        }
    }
}

int Addition(int a, int b) {
    return (a + b);
}
int Subtraction(int a, int b) {
    return (a - b);
}
int Multiplication(int a, int b) {
    return (a * b);
}
int Division(int a, int b) {
    return (a / b);
}
int Power(int a, int b) {
    return (a ^ b);
}
int Remainder(int a, int b) {
    return (a % b);
}
int Operations(char choice) {
    printf("Enter the number : ");
    scanf("%f",&num1);
    printf("Enter the number : ");
    scanf("%f",&num2);
    if(choice == '+') {
        return Addition(num1, num2);
    }
    else if(choice == '-') {
        return Subtraction(num1, num2);
    }
    else if(choice == '*') {
        return Multiplication(num1, num2);
    }
    else if(choice == '/') {
        return Division(num1, num2);
    }
    else if(choice == '^') {
        return Power(num1, num2);
    }
    else if(choice == '%') {
        return Remainder(num1, num2);
    } else{
        return 2;
    }
}
