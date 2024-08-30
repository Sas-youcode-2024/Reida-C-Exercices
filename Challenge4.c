
#include<stdio.h>
#include<stdlib.h>



int main(int argc, char *argv[]) {
    int x[10] ;
    int s=0 , max=0;
    
    
    for (int i=0;i<10;i++){
       
        
        do{
            printf("Entrez un numero se terminée par 0 : ");
            scanf("%d",&x[i]);
            
        }while(x[i]%10!=0);    
            
        if(x[i]>=100){
            
            x[i]=0;
            
        }
            s+=x[i];
        
        if(x[i]>=max){
            
            max=x[i];
        }else{
            max=max;
        }
       
        
        
    }
    printf("la somme des numeros : %d, le numero max : %d",s,max);
    
    
}