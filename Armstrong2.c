#include<stdio.h>
int main() {
  int n,temp,remainder,result=0;
  printf("Enter a number: ");
  scanf("%d",&n);
  temp=n;
  while(temp!=0){
    temp/=10;
  }
  rem=temp%10;
  result=result+rem*rem*rem;
  temp=temp%10;
  }
  if(result==n)
    printf("%d is  an Armstrong number.\n",n);
}
    
  