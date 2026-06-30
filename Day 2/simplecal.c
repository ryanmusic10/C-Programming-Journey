#include <stdio.h>
#include <math.h>


int main(){

    float a= 0.0f;
    float b= 0.0f;
    float add= 0.0f;
    float sub= 0.0f;
    float mul= 0.0f;
    float div= 0.0f;


    printf("Enter a Number: ");
    scanf("%f", &a);
    printf("Enter another number: ");
    scanf("%f", &b);

    add = a + b;
    sub = a - b;
    mul = a*b;
    div = a/b;

    printf( "The Sum of the numbers is %.2f\nSubtraction of the numbers is %.2f\nMuliplication of the numbers is %.2f\nand Division of the numbers is %.2f" , add, sub, mul, div );


    return 0;
}