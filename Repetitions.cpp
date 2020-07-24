#include<iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	int max = 0;
	for(int i = 0; i < s.size(); i++){
		char v = s[i];
		int count = 0;
		while(s[i + count] == v)
			count++;
		if(max <= count)
			max = count;
		i += count - 1;
	}
	cout << max;

	return 0;
}
