#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string reponse_a = "Patati patata";
    string reponse_b = "PAtata Patati";
    string reponse_c = "Tipiti Pototo";
    char reponse;
    string *choix(0);
    cout << "Q'est ce que la gonophobie ? " << endl;
    cout << "A)" << reponse_a << endl;
    cout << "B)" << reponse_b << endl;
    cout << "C)" << reponse_c << endl;
    cin >> reponse;
    switch (reponse){
    case 'a':
        choix = &reponse_a;
        break;
    case 'b':
        choix = &reponse_b;
        break;
    case 'c':
        choix = &reponse_c;
        break;
    default:
        cout << "je n'ai pas compris " << endl;
        break;

    }
    cout << "Vous avez choisit : " << *choix << endl;

    return 0;
}
