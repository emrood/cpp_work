#include <iostream>
#include <string>
using namespace std;
int main() {
 string i;
 cout << "Entez la couleur du feu" << endl;
 cin >> i;

switch (i)
 {
    case "vert":
        cout << "Passer" << endl;
        break;
    case "jaune":
        cout << "Ralentir" << endl;
    case "rouge":
        cout << "s'arreter" << endl;
        break;
    default:
        cout << "Je ne comprends pas" << endl;
        break;



    }




}

