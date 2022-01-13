#include <stdio.h>

int main(void) {
  
  int A, B, C;

  scanf("%d %d %d", &A, &B, &C);

  int result;

  if(B>=C)
  {
    printf("-1\n");
    return 0;
  }
  result = A/(B-C)*(-1)+1;
  
  if(result>=0)
  {
    printf("%d\n",result);
  }else{
    printf("-1\n");
  }

  return 0;
}
