#include <stdio.h>

int main(){
    float pricipalI;
    float rate;
    float time;
    printf("Enter principal amount: ");
    scanf("%f", &pricipalI);
    
    printf("Enter rate: ");
    scanf("%f", &rate);
    
    printf("Enter time: ");
    scanf("%f",&time);

    float simpleInterest = pricipalI * rate * time / 100;

    printf("The simiple interest is %.2f", simpleInterest);
    
}

