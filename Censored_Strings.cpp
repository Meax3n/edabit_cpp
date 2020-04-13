#include<iostream>
#include<string>
using namespace std;
string uncensor(string str,string vowels) {
	int sum=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='*'){
			str[i]=vowels[sum];
			sum+=1;
		}
	}
	return str;
}
int main(){
	string str="Wh*r* d*d my v*w*ls g*?";
	string vowels="eeioeo";
	cout<<uncensor(str,vowels)<<endl;
	system("pause");
	return 0;
}
