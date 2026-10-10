#include <stdio.h>
int main(){
  int n;
  printf("enter n");
  scanf("%d",&n);
  int arr[n];
  printf("enter no in array");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int *i;

  for(i=arr;i<arr+n;i++){
    printf(" %d ",*i );
  }
  printf("\n");


  //2. largest
  int largest=arr[0];
   for(i=arr;i<arr+n;i++){
    if (*i>largest)
    {
      largest=*i;
    }
  }
  printf("largest :%d",largest);



 return 0;
}

//3. because both value of same memory address in array.