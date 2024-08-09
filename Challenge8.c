#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

int num =0,num1=0 ,i=0;
int x[100]={0};
char y[100]={};

printf("Enter a number: ");
scanf("%d",&num);

num1=num;

while(num!=0){
    
x[i]= num % 8;
num =num/8;
i++;

}
printf("la valeur en octal est ");
for (int j=i-1;j>=0;j--){
    
printf("%d",x[j]);

}
i=0;
while(num1!=0){
    
int h=num1 % 16;

if (h<10){

y[i]= h+'0' ;

}else{

y[i]= (h-10)+'A' ;    
    
}

num1 =num1/16;
i++;  
}
printf("\nla valeur en hexadecimal est ");
for (int j=i-1;j>=0;j--){
    
printf("%c",y[j]);
}

    
}