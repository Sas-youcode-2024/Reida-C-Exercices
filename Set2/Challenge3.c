#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    int x=0,y=0,s=0;
    
    printf("entrer deux numero : \n");
    scanf("%d",&x);
    scanf("%d",&y);
    
    if(x==y){
        s=(x+y)*3;
        printf("la somme des deux num est : %d",s);
    }else{
        s=x+y;
        printf("la somme des deux num est : %d",s);
        
    }
    
}