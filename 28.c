#include<stdio.h>
void main(){
    float a,b,c,average;

    printf("enter marks obtained in first subject",a);
    printf("enter marks obtained in second subject",b);
    printf("enter marks obtained in third subject",c);
    scanf("%f %f %f",&a,&b,&c);

    average=(a+b+c)/3;
    printf("average is:%f\n",average);

    if(average>=70)
    printf("distinction");

    if(average>=60 && average<70)
    printf("first class");

    if(average>=50 && average<60)
    printf("second class");

    if(average>=35 && average<50)
    printf("third class");

    if(average<35)
    printf("fail");
}
