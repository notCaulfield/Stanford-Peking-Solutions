#include <iostream>
//1004
int main() {
	double sum;
	float val;
	
	for(int i = 0; i < 12; i++) {
		std::cin >> val;
		sum += val;
	}
	std::cout << "$" << (sum / 12.0);
	return 0;
}