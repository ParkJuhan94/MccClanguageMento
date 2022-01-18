#include <stdio.h>


int calc(int n)
{
  int temp=n;

  while(n>0)
  {
    temp=temp+n%10;
    n= n/10;
  }
  return temp;
}


int main(void) {

  int result[10001]={0};
  int i;
  int check;

  for(i=0 ; i < 10000 ; i++)
  {
    check=calc(i+1);
    if(check <= 10000)
    {
      result[check]=1;
    }
  }

  for(i=0 ; i < 10000 ; i++)
  {
    if(result[i+1]!=1)
    {
      printf("%d\n",i+1);
    }
  }

  return 0;
}
