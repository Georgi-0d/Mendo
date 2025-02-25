#include<iostream>
using namespace std;
int main()
{
    int n,cifra,zbir;
    cin>>n;
    zbir=0;
    while (n>0)
    {
          cifra=n%10;
          zbir=zbir+cifra;
          n=n/10;
    }
    cout<<zbir<<endl;
 
 
return 0;
}