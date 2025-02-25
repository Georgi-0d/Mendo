#include <iostream>
 
using namespace std;
 
int main()
{
    //a*x+b=0
    int a,b;
    cin>>a>>b;
    int c;
    if(a==0 && b!=0){
        cout<<"nema resenie";
    }
    else if(a==0&&b==0){
        cout<<"ima beskonecno resenija";
    }
    else if (a!=0){
        cout<<-b/a;
    }
    return 0;
}