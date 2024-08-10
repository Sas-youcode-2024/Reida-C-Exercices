#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    int num=0 , res=0;
    
    printf("entrer un numero : ");
    scanf("%d",&num);
    
    
    res=num%2;
    if(res==0){
        
        printf("paire");
        
    }else{
        printf("impaire");
    }
    
    
    
}