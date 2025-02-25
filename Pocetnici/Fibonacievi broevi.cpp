#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b,c,n;
    cin>>n;
    a=1;
    b=1;
    c=a+b;
    cout<<a<<endl;
    cout<<b<<endl;
    while(c<=n){
        cout<<c<<endl;
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}