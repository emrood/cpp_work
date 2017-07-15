#include <iostream>
#include <string>
using namespace std;

int main() {
    string mot, inverse;
    inverse = "";
    cout << " Entrez un mot : ";
    cin >> mot;
    for (int e = 0; e <= mot.length(); e++) {
        inverse = mot[e] + inverse;
    }
    cout << "L'inverse de " << mot << " est : " << inverse << endl;

}
