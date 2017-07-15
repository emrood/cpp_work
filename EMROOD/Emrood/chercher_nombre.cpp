#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <math.h>
using namespace std;

int main(){
    srand(time(0));
    int nbr_aleatoire = rand() % 11;
    cout << " L'ordinateur vient de choisir aleatoirement un nombre entre 0 et 10 \n A vous de deviner lequel: " << endl;
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
