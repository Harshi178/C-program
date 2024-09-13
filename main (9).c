#include <stdio.h>
void test()
{
  int n;
  printf("Enter the value of n:  ");
  scanf("%d",&n);
  if (n%2==0)
    printf("the given number is even");
  else{
    printf("the given number is odd");
  }
  
}
int main(){
  test();
}