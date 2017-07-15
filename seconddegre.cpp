#include <iostream>
#include <math.h>
using namespace std;
int main ()
{

  float x, a, b, c, delta, x1, x2;
  cout << "Nous allons resoudre une equation de la forme ax2+bx+c=0" << " Vous allez entre les valeurs l'une apres l'autre"  << endl;
  cout << "svp, entrez a " << endl;
  cin >> a;
  cout << "svp, entrez b" << endl;
  cin >> b;
  cout << "svp, entrez c" << endl;
  cin >> c;
    if ( b > 0) {
        if ( c > 0) {
                cout << "Votre equation est :" << endl;
                cout << a << "x2+" << b<< "x" << "+" <<c<< "=0" << endl;
        }
        else{
            cout << "Votre equation est :" << endl;
            cout << a << "x2+" << b << "x" << c << "=0" << endl;
            }
        }
    else {
        if (c > 0) {
            cout << "Votre equation est :" << endl;
            cout << a << "x2" << b << "x+" << c << "=0" << endl;
            }
        else {
            cout << "Votre equation est :" << endl;
            cout << a << "x2" << b << "x" << c << "=0" << endl;
        }
   }
   if ( a == 0){
        cout << "On a une equation du premier degre" << endl; // On a une equation du type bx+c
        if ((b == 0) && (c == 0)) {
            cout << "On a une infinite de solution" << endl;

        }
        if ((b == 0) && (c != 0)) {
            cout << "La resolution de cette equation est impossible" << endl;

        }
        if (b != 0) {
            x = -c/b;
            cout << "Le resultat est: " << x << endl;
        }
   }
   else {
    delta = (b*b) - 4*a*c;
    if (delta < 0) {
        cout << "Impossible a resoudre car delta est egale a '0' " << endl;
    }
    if (delta == 0) {
        x = b / (2*a);
        cout << "L'equation admet une solution unique: " << "x = " << x << endl;
    }
    if (delta > 0) {
        x1 =  ( (- b) - sqrt(delta))/ (2*a);
        x2 = ( (- b) + sqrt(delta))/ (2*a);
        cout << "l'equation admet une racine double " << "les resultats sont : x1 = " << x1 << " et x2 = " << x2 << endl;
    }
   }
}

