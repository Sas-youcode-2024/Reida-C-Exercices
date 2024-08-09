#include <stdio.h>
#include <stdlib.h>


int main(int argc ,char *argv[]){

int num=0 , inverce=0;


printf("entrer un nombre de trois chiffre : ");
scanf("%d",&num);

int cent= num/100;
int dix=(num%100)/10;
int un=num%10;

inverce=un*100+dix*10+cent;


printf("le nombre inverce est : %d",inverce);

return 0;
}
