#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

int x=0 , y=0 ;

    printf("entrer deux nombre : ");
    scanf("%d",&x);
    scanf("%d",&y);



    printf("%d + %d = %d\n",x,y,x+y);
    printf("%d - %d = %d\n",x,y,x-y);
    printf("%d / %d = %d\n",x,y,x/y);
    printf("%d * %d = %d\n",x,y,x*y);
    printf("%d modulo %d = %d\n",x,y,x%y);



    return 0;
}