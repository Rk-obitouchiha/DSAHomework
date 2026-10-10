#include <stdio.h>
int main(){
  int x=25;
  int *p=&x;
  printf("value of x : %d ,and address is : %d \n",x,p);
   printf("value of p : %d ,and value of p: %d \n",p,*p);

//change x indirectly
*p=100;
printf("the value of x is %d \n",x);

//read input from user to swap
int l,m;
printf("enter number a and b from user to swap:");
scanf("%d %d",&l,&m);
swapfn(&l,&m);
printf("a=%d , b=%d",l,m);
}

//swapfunction
void swapfn(int *a ,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}