#include<stdio.h>
int input()
{
  int a,b;
  printf("Enter the numbers:");
  scanf("%d",&a);
  return a;
}
int gcd1(int a,int b)
{
 int i,gcd;
for(i=1; i<=a && i<=b; i++)
{
  if((a % i ==0) && (b%i==0))
  {
      gcd=i;
    } 
}
  return gcd;
}
  void output(int a,int b,int gcd)
  {
    printf("GCD of %d and %d is %d",a,b,gcd);
  }
  int main()
  {
    int a,b,gcd;
  a=input();
  b=input();
  gcd=gcd1(a,b);
  output(a,b,gcd);
    return 0;
  }
