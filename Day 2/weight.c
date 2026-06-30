#include <stdio.h>

int main() {

int choice = 0;
float pounds = 0.0f;
float kilograms = 0.0f;

printf("Weight Conversion Calculator\n"); 
printf("1. Kilograms to Pounds\n"); 
printf("2. Pounds to Kilograms\n");
printf("Enter a Choice --> 1 or 2 : "); 
scanf("%d", &choice);

if (choice == 1) {
 printf("Enter Weight in Kilograms: ");
 scanf("%f", &kilograms);
 pounds= kilograms * 2.20462;
 printf("The Weight in Pounds is %.2lf lbs", pounds);



}

else if (choice == 2) {

     printf("Enter Weight in Pounds: ");
      scanf("%f", &pounds);
      kilograms = pounds / 2.20462;
      printf("The Weight in Kilogram is %.2lf kgs", kilograms);


    

}

else{

    printf("Invalid Choice, Please Enter 1 or 2");
}




    return 0;
}