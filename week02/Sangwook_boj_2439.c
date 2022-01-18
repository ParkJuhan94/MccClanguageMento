#include <stdio.h>

int main(void) {
  
  int i,j;
  int input;
  int count;
  
  scanf("%d",&input);
  
  for(count=1 ; count <= input ; count++)
  {
    
    for(i=0 ; i < input-count ; i++)
    {
      printf(" ");
    }
    
    for(j=0 ; j < count ; j++)
    {
      printf("*");
    }
    
    printf("\n");
  }


  return 0;
}
