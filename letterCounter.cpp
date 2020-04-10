#include<iostream>
#include<string>
using namespace std;
int letterCounter(char c, string s){
	int sum;
	for(int i=0;i<s.length();i++){
		if(s[i]==c)
			sum+=1;
	}
	return sum;
}
int main(){
	char c = 'D';
	string s="DUDASA";
	cout<<letterCounter(c,s)<<endl;
	system("pause");
	return 0;
}
