#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main(){
    int a,N,i,j;
    pair <int,int> p[1001];

    cin>>N;
    for(i=0; i<N; i++){
       cin>>a;
       p[i]=make_pair(a,0);
    }
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(p[i].first>p[j].first) p[i].second++;
            else if(p[i].first==p[j].first){
                if(j<i) p[i].second++;
            }
        }
    }
    for(i=0; i<N; i++)cout<<p[i].second<<" ";

    return 0;
}