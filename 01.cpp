#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
  stack <int> st;
  int n,k;
  string a;

  cin>>n;

  while(n){
    cin>>a;
    if(a=="push"){
      cin>>k;
      st.push(k);
    }
    else if(a=="pop"){
      if(st.empty())cout<<"-1\n";
      else st.pop();
    }
    else if(a=="size")cout<<st.size()<<"\n";
    else if(a=="empty"){
      if(st.empty())cout<<"1\n";
      else cout<<"0\n";
    }
    else if(a=="top"){
      if(st.empty())cout<<"-1\n";
      else cout<<st.top()<<"\n";
    }
    n--;
  }
  return 0;
}