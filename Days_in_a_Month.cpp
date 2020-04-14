#include<iostream>
using namespace std;
int days(int month, int year) {
	if((year%4==0 && year%100!=0)||year%400==0)
		if(month==2)
			return 	29;
	if(month==2)
		return 28;
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		return 31;
	return 30;

}
int main(){
	cout<<days(2,2018)<<endl;
	system("pause");
	return 0;
}
