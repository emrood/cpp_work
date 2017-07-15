#include <iostream>
using namespace std;
int main(){
    cout << " Notre programme debute ici " << endl;
    int n;
    do
    {
        cout << " * Entrez n >= 2 " << endl;
        cin >> n;
    }while(n<2);
    int vec1[n];
    int vec2[n];
    int scalaire[n];
    cout << " Nous allons remplir les vecteurs " << endl;
    for (int i = 0; i <= n-1; i++){
        cout << " Entrez une valeur pour V["<<i<<"]"<<endl;
        cin >> vec1[i];
        cout << " Entrez une valeur pour T["<<i<<"]"<<endl;
        cin >> vec2[i];
        scalaire[i] = vec1[i] * vec2[i];
    }
    cout << " Les vecteurs sont : " << endl;
    cout << " V["<<n<<"] = ";
    for (int i = 0; i <= n-1; i++){
        cout << " | " << vec1[i];
    }
    cout << "| " << endl;
    cout << " \n\ " ;
    cout << " T["<<n<<"] = ";
     for (int i = 0; i <= n-1; i++){
        cout << " | " << vec2[i];
    }
    cout << " | " << endl << endl;
    cout << " Le produit scalaire de ces deux vecteurs est : P["<<n<<"] = ";
    for (int i = 0; i <= n-1; i++){
        cout << " | " << scalaire[i];
    }
    cout << " | " << endl;
}
