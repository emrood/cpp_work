#include <iostream>
using namespace std;
int main() {
    int n, i, j, l, c;
    do
    {
        cout << "Entrez n >= 3 et impair : ";
        cin >> n;
    }while((n<3) || (n%2 == 0));
    int Tab[30][30];
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            Tab[i][j] = 0;
        }
    }
    l = n-1;
    c = (n-1)/2;
    for(i = 1; i <= n*n; i++){
        Tab[l][c] = i;
        if(l = n-1){
            if(c = n-1){
                l=l-1;
            }
            else{
                l = 0;
                c = c+1;
            }
        }
        else{
            if(c= n-1){
                c = 0;
                l = l+1;
            }
            else{
                if(Tab[l+1][c+1] = 0){
                    l = l+1;
                    c = c+1;
                }
                else{
                    l=l-1;
                }
            }
        }
    }
    for (i = 0; i<= n-1; i++){
            cout << " | ";
            for(j = 0; j<=n-1; j++){
                cout << Tab[i][j] << " | ";
            }
            cout << endl;
    }
}
