#include <iostream>
#include <cmath>
using namespace std;

//1806
int main() {
	int scenarios, x = 0;
	int petrol, width, center;
	int remaining;
	cin >> scenarios;

	while(x < scenarios) {
		cout << "Scenario #" << x+1 << ":\n";
		cin >> petrol;
		if(petrol == 0) {
			cout << "slice #1:\n0\n\n"; 
		} else {
			width = 2*petrol + 1; //Always odd
			center = width/2;// + 1; //I think
	
			for(int i = 0; i < width; i++) { // slices
				cout << "slice #" << i+1 << ":\n";
				for(int j = 0; j < width; j++) { // rows
					for(int k = 0; k < width; k++) { // cols
						remaining = petrol - abs(center - i) - abs(center - j) - abs(center - k);
						if(remaining < 0) {
							cout << ".";
						} else {
							cout << petrol - remaining; //Cost to get there
						}
					}
					cout << "\n"; //Reached end of row
				}
			}
			cout << "\n";
		}
		x += 1;
	}


	return 0;
}