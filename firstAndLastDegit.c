#include<stdio.h>
void main(){
    int input, firstNumber, lastNumber;

    printf("Enter a number: ");
    scanf("%d", &input);
    lastNumber = input%10;
    
    firstNumber = input;

    while(firstNumber >= 10)
    {
        firstNumber /= 10; 
    }
    int n=lastNumber+firstNumber*10;
    if(input%n==0){
        printf("%d is Divided by %d ",input,n);
    }else{
        printf("%d is Not Divided by %d ",input,n);
    }
}
