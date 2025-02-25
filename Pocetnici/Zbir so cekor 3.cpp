#include <iostream>
 
using namespace std;
 
int main()
{
    int k=1,n,x=1;
    cin>>n;
    for(int i=1; i<n; i++){
        k+=3;
        x+=k;
    }
    cout<<x;
    return 0;
}