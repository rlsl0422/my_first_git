#include <stdio.h>

int main(){
  printf("hello_world\n");
  printf("hellllllllllllllllllllllo!!!\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n",i*10);
  }
  for (int i = 0; i < 10; i++)
  {
    if (i%2 != 1) printf("%d\n",i);
  }
  printf("end");
  return 0;
}
