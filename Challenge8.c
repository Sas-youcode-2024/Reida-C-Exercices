#include<stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int x=0;

    printf("Entrer la moyenne des notes : ");
    scanf("%d",&x);
    
    if(x>20 || x<0){
        
        printf("Note invalide ,la note doit etre entre 0 et 20");
        
    }else if(x<10){
        
        printf("recalé");
        
    }else if (x>=10 && x<12){
        
        printf("passable");
    
    }else if (x>=12 && x<14){
        
        printf("assez bien");
        
    }else if (x>=14 && x<16){
        
        printf("bien");
        
    }else if (x>=16 ){
        
        printf("très bien");
        
    }
    
}