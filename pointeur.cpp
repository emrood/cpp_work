#include <iostream>
using namespace std;
#include <conio.h>
int main(){
    int a = 4;
    cout << "La valeur de a est : " << a << endl;
    cout << "L'emplacement memoire se trouve a l'adresse: " << &a << endl<<endl;
    cout << "---------------------------------------------------" <<endl;

    int *p1;
    cout << "La valeur de p est: " << p1 << endl;
    cout << "l'emplacement de memoire de p est " << &p1 << endl;
    p1 = &a;
    cout << "La valeur de p est: " << p1 << endl;
    cout << "La valeur de la variable pointee est: " << *p1 << endl;

    getch();


}
