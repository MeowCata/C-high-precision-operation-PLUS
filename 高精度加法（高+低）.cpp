#include <iostream>
using namespace std;

int main(){
	string num;
	int b,a[10005];
	cin>>num>>b;
	int len=num.length();
	for(int i=0;i<len;i++){
		a[i]=num[len-1-i]-'0';
	}
	int k=0;
	a[0]+=b;
	while(a[k]>=10){
		a[k+1]+=a[k]/10;
		a[k]%=10;
		k++;
	}
	if(k+1>len){
		len=k+1;
	}
	for(int i=len-1;i>=0;i--){
		cout<<a[i];
	}
	return 0;
}
