#include <stdio.h>

int main(void) {
  
  int h,m;

  scanf("%d %d", &h, &m);

  if(m<60 && h<24 && m>=0 && h >=0)
  {
    if(m<45)
    {
      if(h==0)
      {
        h=23;
        m=m+15;
        printf("%d %d\n",h,m);
      }
      else
      {
      h=h-1;
      m=m+15;
      printf("%d %d\n",h,m);
      }
    }else if(m>=45){   
      m=m-45;
      printf("%d %d\n",h,m);
     }
  }
  return 0;
}
