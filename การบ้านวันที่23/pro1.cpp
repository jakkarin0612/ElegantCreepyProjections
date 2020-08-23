#include <stdio.h>
int main(void)
{
  float  l1,l2,suml,height,Area;
  int over;
  printf("Enter l1 = ");
  scanf("%f",&l1);
  printf("Enter l2 = ");
  scanf("%f",&l2);
  printf("Enter height = ");
  scanf("%f",&height);
  over = (l2/l1)*100;
  printf("l2 = %d %\n" ,over );
  suml =l2+l1;
  if (over>=40){;
  	Area = 0.5*height * suml;
  	printf("Enter Area = %0.3f \n",Area);
  }
  return 0;
}
