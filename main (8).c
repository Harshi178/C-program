#include <stdio.h>
int main() {
  FILE *fp;
  char c;
  fp=fopen("chandu.txt","r");
  c=fgetc(fp);
  printf("Character is %c\n",c);
  fclose(fp);
  return 0;

}