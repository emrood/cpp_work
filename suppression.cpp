#include <iostream>
using namespace std;
int main(){
    int A[10] = {1,4,5,6,7,2,0,8,2,12};
    for (int i = 0; i < 10; i++){
        cout << A[i] <<" | ";
    }
    cout << endl << "Nous allons supprimer le 5eme element"<< endl;
    for (int i = 4; i < 9; i ++){
        A[i] = A[i+1];
    }
    cout << " Notre vecteur deviens : ";
    for (int i = 0; i < 9; i++){
        cout << A[i] <<" | ";
    }



}

