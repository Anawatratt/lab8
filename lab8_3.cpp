#include<iostream>
using namespace std;


	//Write your function definition here

char before(char x){
	if(x>='A' and x<='Z')
	{
		x=x-1;
		if(x=='@')
		{
			return 'Z';
		}else{
			return x;
		}
	}else return '0';
}

int main(){
	
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
