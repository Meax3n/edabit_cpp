#include<iostream>
#include<string>
using namespace std;
int fibonacci(int num) {
	int a=1;
	int b=2;
	int c;
	if(num==0)
		return a;
	if(num==1)
		return a;
	if(num==2)
		return b;
	for(int i=3;i<=num;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;	
}
int main(){
	cout<<fibonacci(4)<<endl;
	system("pause");
	return 0;
}
