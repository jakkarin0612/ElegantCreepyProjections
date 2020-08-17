#include <stdio.h>
int main(void)
{
  int b, h, abc;    
  float ans;     
  printf("Enter b : ");
  scanf("%d", &b);		 
  printf("Enter h : ");
  scanf("%d", &h);		 
  printf("Enter abc : ");
  scanf("%d", &abc);		 
  abc = 0.5*b*h ;		
  printf("Answer is %f", abc); 
  return 0;
}
