#include <iostream>

using namespace std;
int main() {
    int n, x, temoin;
    do
    {
        cout << "Entrez la dimension du tableau : ";
        cin >> n;
    }while(n<2);
    int A[30];
    cout << " Entrez les valeurs : " << endl;
    for (int i = 0; i < n; i++) {
        cout << " A["<< i<<"] = ";
        cin >> A[i];
    }
    cout << " Le vecteur est : \n | ";
    for (int i = 0; i < n; i++){
        cout << A[i] << " | ";
    }
    cout << endl << "Rearangeons ce vecteur par ordre croissant "<< endl;
    temoin = 1;
    while(temoin == 1){
        temoin = 0;
        for (int i = 0; i < n-1; i++){
            if (A[i] > A[i+1]){
                temoin = 1;
                x = A[i];
                A[i] = A[i+1];
                A[i+1] = x;
            }

        }
    }
    for (int i = 0; i < n; i++){
        cout << " | " << A[i];
    }
    cout << " | " << endl;

}
