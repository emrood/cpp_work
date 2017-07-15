#include <iostream>
using namespace std;
int main()
{

    int y = 10;
    int z = ++y + y++;
    cout << "La valeur de z:" << z << endl;
    cout << "La valeur de y:" << y << endl;
    int w = (z++) + (++y) + (y++) + (++z);
    cout << "La valeur de w:" << w << endl;
    cout << "La valeur de z:" << z << endl; // z =24, y = 14 , w = 71
    cout << "La valeur de y:" << y << endl;
    int a = --w + (z++) + (y--);
    int b = (++a) + (z--) - (y++);
    cout << "La valeur de w:" << w << endl;
    cout << "La valeur de z:" << z << endl;
    cout << "La valeur de y:" << y << endl;
    cout << "La valeur de a:" << a << endl;
    cout << "La valeur de b:" << b << endl;


}
