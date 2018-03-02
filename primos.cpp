#include<iostream>
int main()
{
  int a, b;
  std::cout << " inserte el numero que desea saber si es primo: ";
  std::cin >> a;
  for(b=2;b<a;b=b+1){
    if (a%b==0){
      std::cout << a << " no es primo\n";
      break;
    }
    else{
      std::cout << a << " es primo \n";
      }
  }
  return 0;
}
