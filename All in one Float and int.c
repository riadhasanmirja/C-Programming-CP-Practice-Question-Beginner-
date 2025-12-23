#include <stdio.h>

int main() {
    
    int a;
    float b;
    
    printf("Enter your integer value a :");
    scanf("%d",&a);
    
    printf("Enter your Floating value b :");
    scanf("%f",&b);
    
    float Sum = a + b;
    printf("Sum is : %f\n",Sum);
    
    float Difference = a - b;
    printf("Difference is : %f\n",Difference);
    
    float Product = a * b;
    printf("Product is : %f\n",Product);
    
    float Divided = a / b;
    printf("Divided is : %f\n",Divided);
    
    float average = (a+b)/2;
    printf("Average is : %f",average);
    
    return 0;
}
