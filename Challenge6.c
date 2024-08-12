#include<stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
    int x=0;

    printf("Entrer un num : ");
    scanf("%d",&x);
    
    if (x<0){
        
        printf("numero negatif ");
        
    }else if(x>0){
        
        printf("numero positif ");
        
    }else{
        
        printf("Null ");
    }
}