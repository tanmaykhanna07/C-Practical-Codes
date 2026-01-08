#include <stdio.h>

int main(){
    float pricipalI = 15;
    float rate = 24;
    float time = 2;
    
    float simpleInterest = pricipalI * rate * time / 100;

    printf("The simiple interest is %.2f", simpleInterest);
    return 0;
}



