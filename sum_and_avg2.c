#include <stdio.h> // standard input output

void sumAndAvg(int n1, int n2, int n3, int n4, int n5){
    float sum = n1 + n2 + n3 + n4 + n5;
    float avg = sum/5.0;

    
    printf("The average of these 5 numbers is : %f\n", avg);

}

int main(){
    int n1;
    printf("Enter n1: ");
    scanf("%d", &n1);
    int n2;
    printf("Enter n2: ");
    scanf("%d", &n2);
    int n3;
    printf("Enter n3: ");
    scanf("%d", &n3);
    int n4;
    printf("Enter n4: ");
    scanf("%d", &n4);
    int n5;
    printf("Enter n5: ");
    scanf("%d", &n5);
    sumAndAvg(n1,n2,n3,n4,n5);
    return 0;
}