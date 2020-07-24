#include <iostream>
using namespace std;
int main(){

	long len, sum =0;
	cin >> len;
	long arr[len];
	for(int i = 0; i < len - 1; i++)
		cin >> arr[i];
	for(int i = 0; i < len - 1; i++)
		sum += arr[i];
	cout << (len * (len + 1)) / 2 - sum;	
	return 0;
}
