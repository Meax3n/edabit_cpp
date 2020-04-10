#include<iostream>
#include<string>
#include<vector>
bool testJackpot(std::vector<std::string> result) {
	for(int i=0;i<result.size();i++)
		if(result[0]!=result[i])
			return false;
	return true;
}
int main(){
	std::vector <std::string> result;
	result.push_back("asd");
	result.push_back("asd");
	result.push_back("asd");
	result.push_back("dsa");
	std::cout<<testJackpot(result)<<std::endl;
	system("pause");
	return 0;
}
