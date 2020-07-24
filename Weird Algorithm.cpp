#include<iostream>
using namespace std;
int main(){
	long long number;
	cin >> number;
	cout << number ;
	while(number > 1){
		cout << " ";
		if(number%2 == 0)
			number = number/2;
		else	
			number = number*3 + 1;
		cout << number ;
	}
	
	
	
	return 0;
}
