#include <stdio.h>

void greatestOfFive(int n1,int n2, int n3, int n4, int n5){
    if(n1 > n2 && n1 > n3 && n1 >n4 && n1 > n5){
        printf("The grestest number is: %d" , n1);
    }
    else if(n2 > n1 && n2 > n3 && n2 >n4 && n2 > n5){
        printf("The grestest number is: %d" , n2);
    }
    else if(n3 > n2 && n3 > n1 && n3 >n4 && n3 > n5){
        printf("The grestest number is: %d" , n3);
    }
    else if(n4 > n2 && n4 > n3 && n4 >n1 && n4 > n5){
        printf("The grestest number is: %d" , n4);
    }
    else if(n5 > n2 && n5 > n3 && n5 >n4 && n5 > n1){
        printf("The grestest number is: %d" , n5);
    } else{
        printf("No single greatest number exists");
    }
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
    greatestOfFive( n1, n2,  n3,  n4, n5 );
    return 0;
}