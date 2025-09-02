#include<stdio.h>
int main(){
   float interest,a,b,c;
   printf("enter principal amount",a);
   scanf("%f",&a);
   printf("enter rate of interest",b);
   scanf("%f",&b);
   printf("enter number of periods",c);
   scanf("%f",&c);

   interest=a*b*c/100;
   printf("%f",interest);

   return 1;
}
