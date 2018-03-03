#include<iostream>
#include<cmath>
double factorial(double a){
  if (a>1)
    return a*factorial(a-1);
  else
    return 1;
}
int main(void)
{
  int a=100;
  int n;
  //std::cin>> a;
  for(n=1;n<=a;n++)
    {
      std::cout<< factorial(n)<< std::endl;
    }
  
  return 0;
  
  }
