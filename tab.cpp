#include <iostream>
using namespace std;
int main(){
    int tabulation[5];
    int entrer;
    for(int i = 0; i <= 4; i++){
        cout << "entrer une valeur pour Tab["<<i<<"]"<<endl;
        cin >> entrer;
        tabulation[i] = entrer;
    }
    cout << " Notre vecteur est Tab[5] = ";
    for(int i = 0; i <=4; i++){
        cout << tabulation[i] <<" , ";
    }
}
