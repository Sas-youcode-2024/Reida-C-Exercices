
#include<stdio.h>
#include<stdlib.h>



int main(int argc, char *argv[]) {
    int x=0 , y=1;
    
    printf("Entrez le nombre des lignes : ");
    scanf("%d",&x);
    
    for (int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            
            printf("*");
        }
       y++;
       printf("\n");
        
        
    }
    
    
}