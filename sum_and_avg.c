#include <stdio.h> // standard input output

void sumAndAvg(int n1, int n2, int n3, int n4, int n5){
    int sum = n1 + n2 + n3 + n4 + n5;
    float avg = sum/5.0;

    
    printf("The average of these 5 numbers is : %f\n", avg);

}

int main(){
    sumAndAvg(12,23,21,4,87);
    return 0;
}