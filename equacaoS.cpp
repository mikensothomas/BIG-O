#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int a, b, c;
  cout << "Digite o primeiro numero: ";
  cin >> a;
  cout << "Digite o segundo numero: ";
  cin >> b;
  cout << "Digite o terceiro numero: ";
  cin >> c;

  float delta, x, x1, x2;
  delta= pow(b, 2) - 4*a*c;
  cout << "O valor de delta e " << delta <<endl;
  if (delta < 0){
    cout << "Não tem raiz quadrada\n";
  }else if (delta == 0){
    cout << "Há um raiz\n";
    x = -b / 2*a;
    cout << "O valor de x e: " << x << endl;
  }else{
    cout << "Há dois raizes\n";
    x1 = (-b-sqrt(delta))/2*a;
    x2 = (-b+sqrt(delta))/2*a;
    cout << "O valor de x1 e: " << x1 << endl;
    cout << "O valor de x2 e: " << x2 << endl;
  }
   return 0;
}