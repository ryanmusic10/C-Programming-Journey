#include <stdio.h>
#include <string.h>

int main () {

    char noun[50];
    char verb [50];
    char adjective1 [50] = "";
    char adjective2 [50] = "";
    char adjective3 [50] = "";

    printf("Enter a adjective(description) :");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0'; // Remove newline character from input

    printf("Enter a noun (person):");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0'; // Remove newline character from input

    printf("Enter a adjective(description of a cat) :");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0'; // Remove newline character from input

    printf("Enter a adjective(description of a cat) :");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0'; // Remove newline character from input

     printf("Enter a verb (action word ending in -ing):");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0'; // Remove newline character from input

    printf("\nToday the %s person named %s , \n who was looking for his %s,  %s cat, \n started %s", adjective1, noun, adjective2, adjective3, verb);

    return 0;
}