#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string a;
  int i,j,b[1000]={0},mx=-9999999,ch=0;

  cin>>a;
  //snclksncl
  for(i=0; i<a.size(); i++)
    a[i]=toupper(a[i]);

  for(i=0; i<a.size(); i++){
    b[(int)a[i]]++;
    mx=max(mx,b[i]);
  }
    
  for(i=65; i<91; i++){
    if(b[i]==b[mx]){
      ch++;
      break;
    }
  }

  if(ch>1)
    cout<<"?";
  else
    cout<<mx;

  return 0;
}