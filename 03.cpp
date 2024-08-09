#include <iostream>
using namespace std;

int main(){
    string a;
    int i,h=0;

    getline(cin,a);
    if(a[0]==' '||a[a.size()]==' ') h=0;
    else if(a[0]==' '&&a[a.size()]==' ')h=-1;
    else h++;
    for(i=0; i<a.size(); i++){
        if(a[i]==' ')h++;
    }

    cout<<h;
    return 0;
}