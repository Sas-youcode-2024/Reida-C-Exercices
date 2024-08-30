
#include<stdio.h>
#include<stdlib.h>



int main(int argc, char *argv[]) {
    int x=0 , s=0;
    
    printf("Entrez un entier : ");
    scanf("%d",&x);
    
    for (int i=2;i<x;i++){
        
        s=x % i;
        
        if(s==0){
            
            printf("%d est un nombre non premier\n",x);
            printf("peut etre deviser par : %d",i);
            break;
        
        }else if(s!=0 && i==x-1){
            
            printf("%d est un nombre premier",x);
            
        }else if(s!=0){
            
            continue;
            
        }
        
        
    }
    
    
}