#include <stdio.h>

int main() {

char operator = '\0';
double num1 = 0.0;
double num2 = 0.0;
double result = 0.0;

printf("Enter the first Number: ");
scanf("%lf", &num1);

printf("Enter an operation (+, -, *, /): ");
scanf(" %c", &operator); //clear the buffer by adding a space before %c to avoid reading a newline character

printf("Enter the Second Number: ");
scanf("%lf", &num2);

switch(operator){

case '+':

result = num1 + num2;
printf("Your result is: %.2lf\n", result);
break;

case '-':

result = num1 - num2;
printf("Your result is: %.2lf\n", result);
break;

case '*':

result = num1 * num2;
printf("Your result is: %.2lf\n", result);
break;

case '/':

if(num2==0){
 
    printf("You cannot divide by zero\n");
}

else{
    
result = num1 / num2;
printf("Your result is: %.2lf\n", result);
}
break;


default:
printf("Error: Invalid operator. Please use +, -, *, /\n");

}


    return 0;
}