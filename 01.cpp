#include <iostream>

using namespace std;

int main() {
  string a;
  long long int i,hap=0,ch[1001]={0},n,max[2]={0,0};

  for(i=0; i<10; i++){
    cin>>n;
    hap+=n;
    ch[n]++;
    if(ch[n]>max[0]){
      max[0]=ch[n];
      max[1]=n;
    }
  }
  cout<<hap/10<<"\n"<<max[1];
  return 0;
}