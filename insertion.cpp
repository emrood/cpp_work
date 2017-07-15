#include <iostream>
using namespace std;
int main() {
    int A[11];
    cout << "Entrez les elements dans les differentes cases : "<< endl;
    for (int i = 0; i < 10; i++){
        cout << "Entrez une valeur pour A["<<i<<"] :";
        cin >> A[i];
    }
    cout << " Notre tableau est : ";
    for (int i = 0; i < 10; i++){
        cout << A[i] <<" | ";
    }
    cout << endl << endl;
    int i = 11;
    while(i > 5){
        A[i] = A[i-1];
        i--;
    }
    A[5] = 100;
    cout << "En ajoutant 100 a la 6eme case; \n Notre tableau est : ";
    for (int i = 0; i < 11; i++){
        cout << A[i] <<" | ";
    }

}
