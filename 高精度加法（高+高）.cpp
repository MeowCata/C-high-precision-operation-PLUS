#include <iostream>
using namespace std;
int a[1005],b[1005],c[1005];
	
int main(){
	string num1,num2;
	cin>>num1>>num2;
	int len1=num1.length();
	int len2=num2.length();
	for(int i=0;i<len1;i++) a[i]=num1[len1-1-i]-'0';
	for(int i=0;i<len2;i++) b[i]=num2[len2-1-i]-'0';
	int max_len=len1>len2?len1:len2;
	for(int i=0;i<max_len;i++) c[i]=a[i]+b[i];
	for(int i=0;i<max_len;i++){if(c[i]>=10){c[i+1]=c[i+1]+c[i]/10;c[i]%=10;}}
	if(c[max_len]>0) max_len++;
	for(int i=max_len-1;i>=0;i--) cout<<c[i];
	
}
