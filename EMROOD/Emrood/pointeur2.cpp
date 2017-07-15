#include <iostream>
using namespace std;
int main(){
    int *ptr(0);
    ptr = new int;
    cout << "Quel age avez vous ? ";
    cin >> *ptr;
    cout << "Vous avez " << *ptr << " ans." << endl;
    delete ptr;
    ptr = 0;
    return 0;

}
