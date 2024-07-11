#include <iostream>

using namespace std;

int fac(int a){
    if(a)return fac(a-1)+a;
    else return 0;

}

int main()
{
	int n,a,b;
    cin>>n;
    while(n){
        cin>>a>>b;
        printf("%d",fac(a)/fac(a-b));
    }
    
	return 0;
}