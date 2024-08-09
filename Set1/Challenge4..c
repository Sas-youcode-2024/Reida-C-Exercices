#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){
int x=0,somme=0;
for (int i=0;i<4;i++){

printf("entrer le numero %d",i);
scanf("%d",&x);

somme+=x;

}

printf("la somme des 4 numero egale : %d,la moyen egale %d ",somme,somme/4);


    return 0;
}
