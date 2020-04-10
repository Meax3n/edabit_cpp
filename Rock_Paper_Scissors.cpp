#include<iostream>
#include<string>
std::string rps(std::string s1, std::string s2) {
	if(s1=="rock"){
		if(s2=="paper")
			return "Player 2 wins";
		if(s2=="rock")
			return "TIE";
		if(s2=="scissors")
			return "Player 1 wins";
	}
	if(s1=="paper"){
		if(s2=="paper")
			return "TIE";
		if(s2=="rock")
			return "Player 1 wins";
		if(s2=="scissors")
			return "Player 2 wins";
	}
	if(s1=="scissors"){
		if(s2=="paper")
			return "Player 1 wins";
		if(s2=="rock")
			return "Player 2 wins";
		if(s2=="scissors")
			return "TIE";
	}
}
int main(){
	std::cout<<rps("rock","paper")<<std::endl;
	system("pause");
	return 0;
}
