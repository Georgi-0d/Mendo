#include <iostream>
 
using namespace std;
 
int main()
{
    int n,a,x=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a;
        x+=a;
    }
    cout<<x;
    return 0;
}