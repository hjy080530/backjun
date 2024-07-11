#include<iostream>

using namespace std;

struct Data{
    int a,b;
};
typedef struct Data Data;

int main()
{
    Data tmp;
    int n;
    
    cin>>n;
    Data da[n+1];
    int i,j,d1[n+1];
    for(i=0; i<n; i++){
       cin>>da[i].a;
       d1[i]=da[i].a;
    }
    
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(da[i].a>da[j].a){
                tmp=da[i];
                da[i]=da[j];
                da[j]=tmp;
            }
        }
        da[i].b=i;
    }

    for(i=0; i<n; i++){
        for(j=i; j<n; j++){
            if(d1[i]==da[j].a){
                tmp=da[i];
                da[i]=da[j];
                da[j]=tmp;
            }
        }
    }
    for(i=0; i<n; i++)cout<<da[i].b<<" ";

    return 0;
}