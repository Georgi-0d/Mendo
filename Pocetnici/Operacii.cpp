#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b;
    char x;
    cin>>a>>b;
    cin>>x;
    if(x=='+'){
        cout<<a+b;
    }
    else if (x=='-'){
        cout<<a-b;
    }
    else if(x=='*'){
        cout<<a*b;
    }
    else{
        cout<<a/b;
    }
    return 0;
}