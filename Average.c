#include <stdio.h>

int main() {
    
    float a;
    float b;
    
    printf("Enter your Floating value a :");
    scanf("%f",&a);
    
    printf("Enter your Floating value b :");
    scanf("%f",&b);
    
    float average = (a+b)/2;
    printf("Average is : %f",average);
    
    return 0;
}
