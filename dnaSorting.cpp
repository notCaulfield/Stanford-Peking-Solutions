#include <iostream> //cin and cout
#include <string> ///string
#include <algorithm> //stable_sort
//1007
int sort_value(std::string str_one, std::string str_two) {
	int val_one = 0;
	int val_two = 0;
	int length = str_one.length();
		for(int i = 0; i < length; i++) {
			for(int j = i + 1; j < length; j++) {
				if(str_one[i] > str_one[j]) {
					val_one++;
				}
			}
		}
		
		for(int i = 0; i < length; i++) {
			for(int j = i + 1; j < length; j++) {
				if(str_two[i] > str_two[j]) {
					val_two++;
				}
			}
		}

	return val_one < val_two;
}
int main() {
	int length, num;
	std::string *strings;
	std::cin >> length >> num;
	strings = new std::string[num];
	
	//Get each string
	for(int x = 0; x < num; x++) {
		std::cin >> strings[x];
	}
	
	std::stable_sort(&strings[0], &strings[num], sort_value);
	
	for(int y = 0; y < num; y++) {
			std::cout << strings[y] << "\n";
	}
	//std::cout << strings[0];
	//std::cout << sort_value(strings[0], length);
	//std::cout << strings[num/2];

	return 0;
}