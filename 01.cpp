#include<iostream>
using namespace std;
int main(){
  string a,c[10]={"NLCS","BHA","KIS","SJA"},b[10]={"North London Collegiate School","Branksome Hall Asia","Korea International School","t. Johnsbury Academy"};
  int i;

  cin>>a;

  for(i=0; i<4; i++){
    if(a==c[i]){
      cout<<b[i];
      break;
    }
      
  }

  return 0;
}