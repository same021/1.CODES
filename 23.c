#include<stdio.h>
int main(){
   float average,a,b,c;
   printf("enter marks obtained in maths",a);
   scanf("%f",&a);
   printf("enter marks obtained in physics",b);
   scanf("%f",&b);
   printf("enter marks obtained in chemistry",c);
   scanf("%f",&c);

   average=(a+b+c)/3;
   printf("%f",average);

   return 1;
}
