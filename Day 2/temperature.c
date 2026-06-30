#include <stdio.h>

int main() {

int choice = 0;
float cel = 0.0f;
float fah = 0.0f;
float kel = 0.0f;

printf("Temperature Conversion\n");
printf("Choose a Number Based on the given information\n");
printf("1. Celsius to Fahrenheit\n");
printf("2. Fahrenheit to Celsius\n");
printf("3. Celsius to Kelvin\n");
printf("4. Kelvin to Celsius\n");
printf("5. Fahrenheit to Kelvin\n");
printf("6. Kelvin to Fahrenheit\n");

scanf("%d", &choice);

if(choice == 1) {
    printf("Enter Temperature in Celsius : ");
    scanf("%f", &cel);
    fah= (cel * 9.0/5.0) + 32;
    printf("The temperature in Fahrenheit is %.2f F", fah);



}

else if(choice == 2) {
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f", &fah);
    cel = (fah - 32) * 5.0/9.0;
    printf("The temperature in Celsius is %.2f C", cel);


}

else if(choice== 3) {

printf("Enter Temperature in Celsius : ");
    scanf("%f", &cel);
    kel = cel + 273.15;
    printf("The temperature in Kelvin is %.2f K", kel);

}

else if(choice== 4) {

printf("Enter Temperature in Kelvin : ");
    scanf("%f", &kel);
    cel = kel - 273.15;
    printf("The temperature in Celsius is %.2f C", cel);

}

else if(choice== 5) {

printf("Enter Temperature in Fahrenheit : ");
    scanf("%f", &fah);
    kel = ((fah - 32) * 5.0/9.0 ) + (273.15);
    printf("The temperature in Kelvin is %.2f K", kel);
}

else if(choice== 6) {

printf("Enter Temperature in Kelvin : ");
    scanf("%f", &kel);
    fah = ((kel - 273.15) * 9.0/5.0) + 32;
    printf("The temperature in Celsius is %.2f F", fah);
}

else{

printf("Error Please Enter according to given options");



}

}