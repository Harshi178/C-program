#include <stdio.h>
int main() {
  FILE *fp;
  char c[10];
  fp=fopen("chandu.txt","r");
  fgets(c,5,fp); 
  printf("Character is %c\n",c);
  fclose(fp);
  return 0;

}