#include<iostream>
#include<string>
#include<vector>
#include<cmath>
float mean(std::vector<int> arr) {
	float sum=0;
	for(int i=0;i<arr.size();i++){
		sum+=arr[i];
	}
	float s = (sum/arr.size())*100+0.5; //rounding to 2 decimal places
	int a=(int)s;
	s=(float)a/100;
	return s;
}
int main(){
	std::vector <int>arr;
	arr.push_back(1);
	arr.push_back(0);
	arr.push_back(4);
	arr.push_back(5);
	arr.push_back(2);
	arr.push_back(4);
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(3);
	arr.push_back(3);
	std::cout<<mean(arr)<<std::endl;
	system("pause");
	return 0;
}
