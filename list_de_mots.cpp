#include <iostream>
#include <string>
using namespace std;
void liste (string entry){
    string entry;
    int i = 0;
    while((entry != 'stop')||(i<N)){
            cout << "Entrez un mot : ";
            cin >> entry;
            Tab[i] = entry;
            i++;
        }

    }
void menu(){
    cout <<" Pour Entrez les mots, pressez 'E' \nPour afficher les mots entres pressez 'A' " << endl;

}
void affichage(){
    for (int a = 0; a < N; a++){
        cout << Tab[i] << endl;
    }
}
int main(){
    int N;
    string Tab[N];



}
