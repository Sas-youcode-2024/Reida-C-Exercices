#include<stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
    

        int x=0;
      
    
    printf("entrer un numero : ");
    scanf("%d",&x);
    
    for(int i=1;i<=10;i++){
        
        printf("%d * %d = %d\n",x,i,x*i);
        
        
    }
}