#include<stdio.h>
void main (){
  int  a,b;
  printf("enter two numbers\n");
  scanf("%d %d",&a,&b);
  if(a>b){
  printf("%d is largest",a);
  printf("%d is smallest",b);}

  else{
  printf("%d is largest",b);
  printf("%d is smallest",a);}
}
