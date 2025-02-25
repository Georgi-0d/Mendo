#include <iostream>
using namespace std;

int main() {
    int n,brojac=0;cin>>n;
    if(n==0) {
        brojac=1;
    }
    while(n!=0) {
        brojac++;
        n/=10;
    }
    cout<<brojac<<endl;
    return 0;
}
