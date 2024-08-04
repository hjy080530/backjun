#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string a;
  int i,n,ch[100]={0};
  cin>>n;
  getline(cin,a);
  cout<<endl<<a<<endl;

  for(i=0; i<n; i++){
    if(a[i]==' ')continue;
    else if(a[i]==',')continue;
    else if(a[i]=='.')continue;
    else ch[(int)a[i]]++;
  }
  cout<<max_element(ch,ch+100);
  return 0;
}