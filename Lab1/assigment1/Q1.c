#include <stdio.h>
int main(){
  int x=25;
  int *p=&x;
  printf("value of x : %d ,and address is : %d \n",x,p);
   printf("value of p : %d ,and value of p: %d",p,*p);
  

}