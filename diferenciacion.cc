//Ricardo Velazco Castillo
//Clase del Martes 21 de Noviembre
#include     <iostream>
#include     <cmath>
using namespace std;
int main(){
  cout<<"Dame un angulo en radianes :";
  double angulo;
  cin>>angulo;
  double coseno = cos(angulo);
  cout<<"El coseno de " << angulo << " es "  << coseno << endl;
  return 0;
}
