#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int x;
    cout << "Nous allons resoudre l'equation ax+b =0" << endl;
    cout << "Entez une valeur pour a :" << endl;
    cin >> a;
    cout << "Entrez une valeur pour b: " << endl;
    cin >> b;
    if (b > 0){
        cout << a << "x+" << b << "=0"<< endl;
        }
    else{
        cout << a << "x" << b << "=0"<< endl;
    }
    if (a == 0){
        if (b == 0){
            cout << "infinit"<<char(130)<< endl;
        }
        else{
            cout << "Impossible"<< endl;
        }

    }
    else {
        cout <<"x = "<<(float)-b/a << endl;
    }

}
