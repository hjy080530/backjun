#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
    string a,b,c;
    cin>>a;
    cin>>c;
    cin>>b;

    int lena=a.length(),lenb=b.length(),h;
    if(c[0]=='*'){
        printf("1");
        for(int i=0; i<lena+lenb-2; i++){
            printf("0");
        }
    }
    else{
        h=min(lena,lenb);
        lena=max(lena,lenb);
        printf("1");
        for(int i=1; i<lena; i++){
            if(i==(lena-h)){
                printf("1");
            }
            else printf("0");
        }
    }

    return 0;
}