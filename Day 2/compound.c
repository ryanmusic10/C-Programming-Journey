#include <stdio.h>
#include <math.h>

int main () {

double principal = 0.0;
double rate = 0.0;
int years = 0.0;
int timesCompounded = 0.0;
double total = 0.0;

printf("Compund Interest Calculator\n");

printf("Enter the principal amount: ");
scanf("%lf", &principal);
printf("Enter the rate of interest (as a decimal): ");
scanf("%lf", &rate);
rate = rate / 100; // Convert percentage to decimal
printf("Enter the time in years: ");
scanf("%d", &years);
printf("Enter the number of times interest is compounded per year: ");
scanf("%d", &timesCompounded);


total = principal * pow(1 + (rate / timesCompounded), timesCompounded * years);

printf("The total amount after %d years is: $%.2lf\n", years, total);

    return 0;
}