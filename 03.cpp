#include <iostream>
using namespace std;

int main(){
    string a;
    int i,h=0;

    getline(cin,a);

    for(i=0; i<a.size(); i++){
        if(a[i]==' ')h++;
    }

    cout<<h;
    return 0;
}