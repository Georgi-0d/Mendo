#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    cin>>a;
    if(a<=7){
        if(a%2!=0 && a!=2){
            cout<<"31";
        }
        else if (a%2==0 && a!=2) {
            cout<<"30";
        }
        else
        cout<<"28";
    }
    else if(a>=8){
        if(a%2!=0 && a!=2){
            cout<<"30";
        }
        else if (a%2==0 && a!=2) {
            cout<<"31";
        }
        else
        cout<<"28";
    }
 
    return 0;
}