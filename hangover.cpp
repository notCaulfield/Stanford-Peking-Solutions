#include <iostream>
//1003
int main() {
	float val, sum;
	int n;
	std::cin >> val;
	while(val != 0.00) {
		sum = 0;
		n = 0;
		while(sum < val) {
			n++;
			sum += 1.00/(1 + n);
		}
		std::cout << n << " card(s)\n";
		std::cin >> val;
	}
	return 0;
}