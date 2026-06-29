#include <stdio.h>
#include <string.h>

int main() {
    // shopping cart program

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char unit = '$';
    float total = 0.0f;

    printf("What item would you like to purchase? : ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0'; // Remove the newline character from the input

    printf("What is the price of each of the items? : ");
    scanf("%f", &price);
    printf("How many items would you like to purchase? : ");
    scanf("%d", &quantity);

    total = price * quantity;
    printf("You have purchased %d %s at a price of %c%.2f each.\n", quantity, item, unit, price);
    printf("Your total is: %c%.2f",unit, total);
    return 0;
}