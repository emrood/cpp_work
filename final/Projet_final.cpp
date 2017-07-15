#include <iostream>
#include <conio.h>
#include <dos.h>
#include <fstream>
#include <string>
#include <math.h>
#include <stdlib.h>
using namespace std;
//Definition des fonctions

void menu(){
   cout << "\n **************** Options *****************"<< endl;
   cout << " T/t -> Pour les matrices Triangulaires" << endl;
   cout << " P/p -> Pour savoir si un nombre est premier" << endl;
   cout << " M/m -> Carre magique d'ordre pair" << endl;
   cout << " B/b -> Base de donnee etudiant" << endl;
   cout << " Q/q -> Quitter le programme" << endl;
}

void option2(){
    cout << "E/e -> Enregistrement " << endl;
    cout << "T/t -> Trouver un etudiant " << endl;
    cout << "C/c -> Consulter la liste des etudiants " <<endl;
    cout << "R/r -> Retour" << endl;
}

void carre_magique(){

}
void option1(){
    cout << "S/s -> Triangulaire superieue " <<endl;
    cout << "I/i -> Triangulaire inferieure " << endl;
    cout << "R/r -> Retour" << endl;
}
void inferieure(){
    int val;
    cout << " choisissez l'ordre de la matrice: " ;
    cin >> val;
    int Matrice[val][val];
    cout <<"\n Remplissez votre matrice"<<endl;
    for (int i = 0; i < val; i++){
        for(int j = 0; j< val; j++){
            cout <<"Entrez une valeur pour M["<<i<<"]["<<j<<"] : " ;
            cin >> Matrice[i][j];
            if(j>i){
                Matrice[i][j] = 0;
            }
        }
    }
    cout << "Transformation...." << endl << endl;
    cout << "\n\n La matrice devient : " << endl;
    for(int i = 0; i< val; i++){
        for(int j = 0; j< val; j++){
            cout << "\t" << Matrice[i][j];
        }
        cout << endl;
    }
    cout << endl << endl;
}
void superieure(){
    int val;
    cout << " Entrez l'ordre de la matrice: " ;
    cin >> val;
    int Matrice2[val][val];
    cout <<" \n\n Remplissez votre matrice "<< endl;
    for (int i = 0; i < val; i++){
        for(int j = 0; j< val; j++){
            cout <<"Entrez une valeur pour M["<<i<<"]["<<j<<"] : " ;
            cin >> Matrice2[i][j];
            if(i>j){
                Matrice2[i][j] = 0;
            }
        }
    }
    cout << "Transformation...." << endl;
    cout << "La matrice devient : " << endl;
    for(int i = 0; i< val; i++){
        for(int j = 0; j< val; j++){
            cout << "\t" << Matrice2[i][j];
        }
        cout << endl;
    }
    cout << endl << endl;
}
int id = 4;
void enregistrement(){
    string nom, prenom;
    char sexe;
    int age;
    cout << "Entree le nom de l'etudiant : ";
    cin >> nom;
    cout << "Entrez le prenom : ";
    cin >> prenom;
    do
    {
        cout << "Entrez le sexe : ";
        cin >> sexe;
    }while((sexe != 'M') && (sexe != 'F'));
    do
    {
        cout << "Entrez l'age : ";
        cin >> age;
    }while(age < 18);
    ofstream cadeau("info1.txt", ios::out | ios::app);
    if (cadeau){
        cadeau << endl;
        cadeau <<id<< "\t\t"<< nom << "\t\t" << prenom << "\t\t" << sexe << "\t\t" << age ;
        id++;
        cout << "\n ***** Operation efectuee avec succes **** "<< endl;
        if (sexe == 'M'){
            cout << "Bienvenue Monsieur " << nom << endl << endl;
        }
        else{
            cout << "Bienvenue Mademoiselle " << nom << endl << endl;
        }
        cadeau.close();
    }
    else{
        cerr << "Le fichier n'existe pas" << endl << endl << endl;
    }
}
void premier(){
    int valeur;
    do
    {
       cout << " \n Entrez un nombre superieur ou egale a 2 : ";
       cin >> valeur;
    }while(valeur <= 1);
    int temoin = 0;
    for (int z = 1; z <= valeur; z++){
        if(valeur % z == 0){
            temoin++;
        }

    }
    if (temoin == 2){
        cout << valeur << " est un nombre premier" << endl << endl << endl;
    }
    else{
        cout << valeur << " n'est pas un nombre premier" << endl << endl << endl;
    }
}
void recherche(){
       /* char cherche, Id;
        int temoin = 0;
        string info;
        cout << "Entrez l'identifiant souhaite : ";
        cin >> cherche;
        ifstream esih("info1.txt", ios::in);
        if (esih){
            while(getline(esih, Id)){
                if (Id == cherche){
                    temoin = 1;
                    getline(esih, info);
                    break;
                }
                else{
                    cout << "Cet identifiant n'existe pas " << endl;
                }
            }
            cout << info << endl;
            esih.close();
        }
        else{
            cerr << "Ce fichier n'existe pas"<<endl;
        } */

}
void consultation(){
        ifstream ritchy("info1.txt", ios::in);
        if (ritchy){
            string ligne;
            while(getline(ritchy, ligne)){
                cout << ligne;//affichage du contenu ligne par ligne
                cout << endl;
            }
            ritchy.close();
        }
        else{
            cerr << "impossible d'ouvrir le fichier !" << endl;
        }
}
//fonction principale
int main(){
    //variables qui va contenir les choix
    char choix_principale;
    char choix_secondaire;
    do
    {
     system("cls");
     cout << endl;
     menu();
     cin >> choix_principale;
    switch (choix_principale){
    case 't':
    case 'T':
        do
        {
            getch();
            system("cls");
            cout << endl;
            option1();
            cin >> choix_secondaire;
            switch (choix_secondaire){
            case 's':
            case 'S':
                cout << endl;
                superieure();
                break;
            case 'i':
            case 'I':
                cout << endl;
                inferieure();
                break;
            case 'r':
            case 'R':
                cout << endl;
            default:
                cout << "\n Erreur de saisie " << endl;
            }
        }while((choix_secondaire != 'R') && (choix_secondaire != 'r'));
        getch();
        break;
    case 'p':
    case 'P':
        cout << endl;
        premier();
        break;
    case 'm':
    case 'M':
        cout << endl;
        carre_magique();
        break;
    case 'b':
    case 'B':
        do{
            getch();
            system("cls");
            cout << endl;
            option2();
            cin >> choix_secondaire;
            switch (choix_secondaire){
            case 'e':
            case 'E':
                cout << endl;
                enregistrement();
                break;
            case 't':
            case 'T':
                cout << endl;
                recherche();
                break;
            case 'c':
            case 'C':
                cout << endl;
                consultation();
                break;
            case 'r':
            case 'R':
                cout << endl;
                break;
            default:
                cout << "Erreur de saisie /n/n" << endl;
            }
        }while((choix_secondaire != 'R') && (choix_secondaire != 'r'));
        break;
    case 'q':
    case 'Q':
        cout << "merci et aurevoir \n *Pressez n'impote quelle touche pour fermer la boite de dialogue" << endl;
        break;
    default:
        cout << "\n Erreur de saisie \n" << endl;
        break;
     }

    }while((choix_principale != 'q') && (choix_principale != 'Q'));

}

