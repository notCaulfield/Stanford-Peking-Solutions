#include <iostream>
#include <algorithm>
using namespace std;
//1504
int main() {
	int cases, x = 0;
	int first, second, r_first, r_second, answer;
	cin >> cases;
	
	while(x < cases) {
		cin >> first;
		r_first = 0;
		cin >> second;
		r_second = 0;
		answer = 0;
		while(first != 0) {
			r_first = (r_first * 10) + (first % 10);
			first = first/10;
		}
		while(second != 0) {
			r_second = (r_second * 10) + (second % 10);
			second = second/10;
		}
		r_first += r_second; //SUM
		while(r_first != 0) {
			answer = (answer * 10) + (r_first % 10);
			r_first = r_first/10;
		}
		cout << answer << '\n';
		x += 1;
	}
	
	return 0;
}