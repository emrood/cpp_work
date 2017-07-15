#include <iostream>
#include <ctime>
using namespace std;
int main(){
    time_t rawtime;
    time(&rawtime);
    cout << "L'heure courant est : " << ctime(&rawtime) << endl;
}
