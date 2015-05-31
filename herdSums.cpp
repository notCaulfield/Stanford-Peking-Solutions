#include <iostream>
using namespace std;
//2140
int main() {
	int n, j, sum, num = 0;
	cin >> n;
	
	for(int i = 1; i < n/2 + 1; i++) {
		sum = 0;
		j = i;
		
		while(sum < n) {
			sum += j;
			j++;
		}
		if(sum == n) {
			num++;
		}
	}
	
	cout << num+1; //Add one for the number itself
	return 0;
}