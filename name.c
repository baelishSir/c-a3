#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

void main(){
    char prompt[256];
    char commande[256];

    strcpy(prompt, "EXIA >");
    *commande = 0;
    while(1){
        printf("%s",prompt);
        fgets(commande,15,stdin);
        printf("%s\n",commande);
    }
    puts("Bye");
}