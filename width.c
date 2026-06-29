#include <stdio.h>

int main() {

// width precision flags

float price1 = 100.33;
float price2 = 230.66;
float price3 = -312.99;

printf("The price of the apples are %+4.2f\n", price1);
printf("The price of the oranges are %+4.2f\n", price2);
printf("The price of the bananas are %+4.2f\n", price3);

return 0;

}
