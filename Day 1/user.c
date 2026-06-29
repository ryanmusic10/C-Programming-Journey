#include <stdio.h>
#include <string.h>

int main() {
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30]= "";

    printf("Enter an age:");
    scanf("%d", &age);
    printf("Enter your gpa:");
    scanf("%f", &gpa);
    printf("Enter your grade:");
    scanf(" %c", &grade); // space before %c to make the input buffer clear
    getchar(); // to clear the input buffer after reading a character specifically for fgets
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin); // using fgets to read string input
    name[strlen(name) - 1] = '\0'; // remove newline character from the string

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    

    return 0;
}