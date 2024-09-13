#include <stdio.h>
#include<string.h>
int main(void) {
  char str[100],str1[100];;
  printf("enter first word: ");
  scanf("%s",str);
  printf("enter second word: ");
  scanf("%s",str1);
  strcat(str,str1);
    printf("%s",str);
}