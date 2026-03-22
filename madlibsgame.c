#include <stdio.h>
#include <string.h>
//MAD LIBS GAME

int main() {
    char noun[50];
    char adjective1[50];
    char adjective2[50];
    char adjective3[50];
    char verb[50];
    printf("enter a adjective (describing something): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0'; //removes extra line
 
    printf("enter a noun (animal): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("enter a verb (ending with -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0'; 
    
    printf("enter a adjective(appearence): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("enter a adjective(character): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';
 
    printf("Today i went to a %s park.\n" , adjective1);
    printf("I saw a %s there.\n" , noun);
    printf("The %s was %s.\n", noun , verb);
    printf("It was %s and %s.\n" , adjective3 , adjective2);

    return 0;

   
   
}