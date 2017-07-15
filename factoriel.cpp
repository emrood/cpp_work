#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main() {
    int N, i, facto;
    facto = 1;
    cout << "S'il vous plait, Entrez la valeur de N" << endl;
    cin >> N;
    while (N<0) {
            cout << "Entrez N positif!!!" << endl;
            cin >> N;
    }
    if (N == 0){
        facto = 0;
        cout << "Factoriel de " << N << " = " << facto << endl;
    }
    else{
        for(i=1; i<=N; i++) {
                facto = facto * i;
        }
        cout << "Factoriel de " << N << " = " << facto << endl;
    }

}
