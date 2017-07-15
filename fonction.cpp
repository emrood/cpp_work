#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void menu(){
    cout<<"------------------------------------\n\n";
    cout<<"F/f..............Pour avoir la factoriel\n";
    cout<<"C/c..............Pour avoir la combinaison\n";
    cout<<"A/a..............Pour avoir l'arrangement\n";
    cout<<"\t\t Faites un choix \n\n";
    cout<<"------------------------------------\n\n";
    getch();
}
long facto (int nombre){
    if (nombre < 0){
        cout <<"Impossible de calculer la factorielle d'un nombre negatif";
    }
    else{
        if((nombre==0)||(nombre==1)){
            cout<< "La factorielle de "<<nombre<<" est = a 1"<<endl;
        }
        else{
            long factoriel = 1;
            for(int i = 1; i<= nombre; i++){
                factoriel = factoriel * i;
            }
            return factoriel;
        }

    }
}

long arrangement (int n, int p){
    long arrang;
    arrang = facto(n)/facto(n-p);
    return arrang;
    }


int combinaison(int n, int p){
    long combi;
    combi = facto(n)/(facto(p)*facto(n-p));
    return combi;
}
int main(){
    char entry;
    //Appelle a la fonction menu;
do
{
    menu();
    cin >> entry;
    switch(entry){
case 'F':
case 'f':
    {
        int nbr;
        cout << "Entrez le nombre dont on va calculer sa fatoriel : ";
        cin >> nbr;
        cout << "La factorielle de "<<nbr<< " est : "<< facto(nbr)<< endl;
    }
break;
case 'A':
case 'a':
    {
        int c, d;
        do
        {
            cout << "Entrez n : ";
            cin >> c;
        }while(c<1);
        do
        {
            cout << "Entrez p : ";
            cin >> d;
        }while(c<d || d<0);
        cout << "L'arrangement de " << c << " dans " << d << " est " << arrangement(c, d)<<endl;
    }
break;
case 'C':
case 'c':
    {
        int c, d;
        do
        {
            cout << "Entrez n : ";
            cin >> c;
        }while(c<1);

        do
        {
            cout << "Entrez p : ";
            cin >> d;
        }while(c<d || d<0);
        cout << "La combinaison de " << c << " dans " << d << " est " << combinaison(c, d)<<endl;
    }
break;
default:
    cout << "Mauvais choix ";
}

}while(entry=='F'||entry=='f'||entry=='A'||entry=='a'||entry=='C'||entry=='c');

}
