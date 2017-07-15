#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <dos.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;
string melange(string mot){
    string mot_melanger;
    int position;
    while(mot.size() != 0){
        // on prend unu position aleatoire dans la chaine de caractere
        position = rand() % mot.size();
        // varaible melange prend ce caractere
        mot_melanger += mot[position];
        //On eface le caractere prix;
        mot.erase(position, 1);
    }
    return mot_melanger;
}
void mystere(){
    string mon_choix;
    ifstream zumba("dictionnaire.txt", ios::in);
    string ligne, reponse, melangus;
    if (zumba){
        do//boucle kap repeter a chaque fois que utilisateur la dit oui
        {
            while(getline(zumba, ligne)){//nou pranyon ligne
            melangus = melange(ligne);
                do
                {
                    cout << "Quelle est le mot cache dans << " << melangus << " >> ?  "<< endl;
                    cin >> reponse;
                    if (reponse == ligne){
                        cout << "C'est exacte, felicitation" << endl;
                    }
                    else{
                        cout << "Ce n'est pas ca mais vous y etes presque, essaye a nouveau :-( " << endl << endl;
                    }
                }while(reponse != ligne);
                cout << "Voulez-vous rejouer ? " << endl << "<< OUI >> \t\t\t << NON >>" << endl;
                cin >> mon_choix;
                if (mon_choix == "non"){
                    break;
                }
            }
        }while(mon_choix == "oui");

    }
}
void nbr_mysterieux(){
    int nbr_aleatoire = rand() % 21;
    cout << " L'ordinateur vient de choisir aleatoirement un nombre entre 0 et 20 \n A vous de deviner lequel: " << endl;
    int choix;
    do
    {
        cin >> choix;
        if (choix > nbr_aleatoire){
            cout << "Attention la, c'est trop grand essayez encore : "<< endl;
        }
        else if (choix < nbr_aleatoire){
            cout << "trop petit mon vieux essayer a nouveau " << endl;
        }
        else if (choix == nbr_aleatoire){
            cout << "Bravo, Vous avez trouvez" << endl;
        }
    }while(choix != nbr_aleatoire);
}

void menu(){
    cout << "Choisissez le jeux de votre choix " << endl;
    cout << "1) Devinez le mot mystere " << endl;
    cout << "2) Trouvez le nombre cache" << endl;
    cout << "3) fermeture " << endl;
}

int main(){
    srand(time(0));
    int choice;
    do
    {
        system("cls");
        menu();
        cin >> choice;
        switch (choice){
        case 1:
            system("cls");
            mystere();
            getch();
            break;
        case 2:
            system("cls");
            nbr_mysterieux();
            getch();
            break;
        case 3:
            cout << "Merci et aurevoir";
            system("exit");
            break;
        default:
            cout << "Je n'ai pas conpris essayer encore"<< endl;
            break;
        }
    }while (choice != 3);

}
