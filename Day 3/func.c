#include <stdio.h>
#include <string.h>

void birthdaysong(char Name[], int Age) {

printf("\nHappy Birthday to You!\n");
printf("Happy Birthday to You!\n");
printf("Happy Birthday Dear %s!\n", Name);
printf("Happy Birthday to You!\n");
printf("You are %d years old!\n", Age);

}

int main() {

    char Name[50] = "Ryan";
    int Age = 19;

    printf("Enter your name: ");
    fgets(Name, sizeof(Name), stdin);
    Name[strlen(Name) - 1] = '\0'; // Remove newline character from input

    printf("Enter your age: ");
    scanf("%d", &Age);
    birthdaysong(Name, Age);

    return 0;
}