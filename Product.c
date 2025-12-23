#include <stdio.h>

int main() {
   
   int a;
   int b;
   
   printf("Enter your integer value a :");
   scanf("%d",&a);
   
   printf("Enter your integer value b :");
   scanf(" %d",&b);      
   
   int Product = a*b;
   printf("Product value is :%d",Product);

    return 0;
}
