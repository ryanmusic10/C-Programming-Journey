#include <stdio.h>

int main() {

char dayofweek = '0';

printf("Enter a day of the week M, T, W, R, F, S, U: ");
scanf("%c", &dayofweek);

switch(dayofweek) {

case 'M':
    printf("It is Monday\n");
    break;

case 'T':
    printf("It is Tuesday\n");
    break;
case 'W':
    printf("It is Wednesday\n");
    break;
case 'R':
    printf("It is Thursday\n");
    break;
case 'F':
    printf("It is Friday\n");
    break;
case 'S':
    printf("It is Saturday\n");
    break;
case 'U':
    printf("It is Sunday\n");
    break;

default:
    printf("Please Enter M, T, W, R, F, S, U\n");
    break;
}

    return 0;
}