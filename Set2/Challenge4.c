#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]){
    
    float a=0,b=0,c=0,delta=0,x1=0,x2=0,x=0;
    
    printf("entrer a : ");
    scanf("%f",&a);
    printf("entrer b : ");
    scanf("%f",&b);
    printf("entrer c : ");
    scanf("%f",&c);
    
    delta=pow(b,2)-4*a*c;
    
    if(delta<0){
        
        printf("cette équation n’admet pas de solutions réelles");
        
    }else if(delta>0){
        
         x1=(-b-sqrt(delta))/(2*a);
         x2=(-b+sqrt(delta))/(2*a);
        printf("cette équation admet deux solutions distinctes %f et %f",x1,x2);
        
    }else{
        
         x =-b/(2*a);
        printf("alors cette équation admet une solution unique %f",x);
    }
    
}