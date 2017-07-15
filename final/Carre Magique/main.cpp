#include <vector>
#include <iostream>

using namespace std;

void CarreMagiqueImpair(vector<vector<int> > &matrix, int n);
void CarreMagiquePairementPair(vector<vector<int> > &matrix, int n);
void CarreMagiqueImpairementPair(vector<vector<int> > &matrix, int n);
void CarreMagique(vector<vector<int> > &matrix, int n);
void AfficherCarreMagique(vector<vector<int> > &matrix, int n);

int main(int argc, char* argv[])
{
  int n;
  cout << "Entrer L\'ordre du carre : ";
  cin >> n;

  vector<vector<int> > matrix(n, vector<int> (n, 0));

  if (n<3)
  {
    cout << "\nErreur: doit etre superieur a 2\n\n";
    return 0;
  }

  CarreMagique(matrix, n);  

  //Affiche les resultats
  AfficherCarreMagique(matrix, n);
    
  return 0;
}

void CarreMagique(vector<vector<int> > &matrix,int n)
{
  if (n%2==1)        //n est impair
    CarreMagiqueImpair(matrix, n);
  else          //n est pair
    if (n%4==0)    //ordre pairement pair
      CarreMagiquePairementPair(matrix, n);
    else      //ordre impairement pair
      CarreMagiqueImpairementPair(matrix, n);
}

void CarreMagiqueImpair(vector<vector<int> > &matrix, int n)
{
  int nsqr = n * n;
  int i=0, j=n/2;     // position de depart

  for (int k=1; k<=nsqr; ++k) 
  {
    matrix[i][j] = k;

    i--;
    j++;

    if (k%n == 0) 
    { 
      i += 2; 
      --j; 
    }
    else 
    {
      if (j==n) 
        j -= n;
      else if (i<0) 
        i += n;
    }
  }
}

void CarreMagiquePairementPair(vector<vector<int> > &matrix, int n)
{
  vector<vector<int> > I(n, vector<int> (n, 0));
  vector<vector<int> > J(n, vector<int> (n, 0));

  int i, j;

  //prepare I, J
  int index=1;
  for (i=0; i<n; i++)
    for (j=0; j<n; j++)
    {
      I[i][j]=((i+1)%4)/2;
      J[j][i]=((i+1)%4)/2;
      matrix[i][j]=index;
      index++;
    }

  for (i=0; i<n; i++)
    for (j=0; j<n; j++)
    {
      if (I[i][j]==J[i][j])
        matrix[i][j]=n*n+1-matrix[i][j];
    }
}

void CarreMagiqueImpairementPair(vector<vector<int> > &matrix, int n)
{
  int p=n/2;

  vector<vector<int> > M(p, vector<int> (p, 0));
  CarreMagique(M, p);
  
  int i, j, k;

  for (i=0; i<p; i++)
    for (j=0; j<p; j++)
    {
      matrix[i][j]=M[i][j];
      matrix[i+p][j]=M[i][j]+3*p*p;
      matrix[i][j+p]=M[i][j]+2*p*p;
      matrix[i+p][j+p]=M[i][j]+p*p;
    }

  if (n==2)
    return;  

  vector<int> I(p, 0);
  vector<int> J;

  for (i=0; i<p; i++)
    I[i]=i+1;

  k=(n-2)/4;
  
  for (i=1; i<=k; i++)
    J.push_back(i);

  for (i=n-k+2; i<=n; i++)
    J.push_back(i);

  int temp;
  for (i=1; i<=p; i++)
    for (j=1; j<=J.size(); j++)
    {
      temp=matrix[i-1][J[j-1]-1];
      matrix[i-1][J[j-1]-1]=matrix[i+p-1][J[j-1]-1];
      matrix[i+p-1][J[j-1]-1]=temp;
    }

  //j=1, i
  //i=k+1, k+1+p
  i=k; 
  j=0;
  temp=matrix[i][j]; matrix[i][j]=matrix[i+p][j]; matrix[i+p][j]=temp;

  j=i;
  temp=matrix[i+p][j]; matrix[i+p][j]=matrix[i][j]; matrix[i][j]=temp;
}


void AfficherCarreMagique(vector<vector<int> > &matrix, int n)
{
  for (int i=0; i<n; i++) 
  {
    for (int j=0; j<n; j++)
      cout << "\t" << matrix[i][j];

    cout << "\n";
  }

  cout << "\n\n";
}