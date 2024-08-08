#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

char nom[30];
char prenom[30];
int age=0;
char sex[30];
int numTel=0;
printf("Entrez votre nom : ");
scanf("%s", nom);

printf("Entrez votre prenom: ");
scanf("%s",prenom);

printf("Entrez votre age : ");
scanf("%d",&age);

printf("Entrez votre sexe (homme/femme) : ");  
scanf("%s",sex);

printf("Entrez votre numero de telephone : ");
scanf("%d",&numTel);

printf("Bonjour %s %s vous etes %s vous avez %d et votre numero de telephone est %d",prenom,nom,sex,age,numTel);

return 0;
}