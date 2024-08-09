#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

int f=0 , c=0;

char sr[100];

printf("entrez la temperature en Fahrenheit: ");
scanf("%d",&f);

c = (f-32)/1.8;

if (c<0){
    char sr[] = "trop froid";
}else if(c<20){

    char sr[] = "froid";
}else if (c<30){

    char sr[] = "chaud";
}else{
    char sr[] = "trop chaud";
}

printf("la temperature en Celsius est: %d , la sensation ressentie est %s",c,sr);


return 0;
}
