#include<stdio.h>
void input(float *b, float *h)
{
 
  printf("enter the values of b and h");
  scanf("%f%f",b,h);
}

void find_area(float b,float h,float *area)

  
{
  *area=((b*h)/2);
}

void output(float b,float h,float area)
{
  printf("The area is %f*%f is %f",b,h,area);
}
int main()
{
  float b,h,area;
 input(&b,&h);
 find_area(b,h,&area);
  output(b,h,area);
  return 0;
}

