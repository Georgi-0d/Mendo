#include <iostream>
 
using namespace std;
 
int main()
{
    char t;
    cin>>t;
    if(t>='a'&&t<='z'){
        cout<<"MALA";
    }
    else if (t>='A' && t<='Z'){
        cout<<"GOLEMA";
    }
    else
        cout<<"GRESKA";
    return 0;
}