#include <iostream>
#include <string>
using namespace std;
//2136
int main() {
	string * lines = new string[72];
	int alphabet_arr[26] = { };
	int max = 0;
	int index = 0;
	
	//Get each line
	for(int x = 0; x < 4; x++) {
		getline(cin, lines[x]);
	}
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < lines[i].length(); j++) {
			index = (int)lines[i][j] - 65; //Get Index
			if(index >= 0 && index < 26){			
			alphabet_arr[index] += 1; //Update character #
			
			if(alphabet_arr[index] > max) {
				max = alphabet_arr[index]; //Update max val if necessary
			}
			}
		}
	}
	
	while(max > 0) {
		for(int x = 0; x < 26; x++) {
			if(alphabet_arr[x] == max) {
				cout << '*';
				alphabet_arr[x] -= 1; //Decrement remaining value
			} else {
				cout << ' ';
			}
			if(x != 25) cout << ' ';
		}
		cout << '\n';
		max -= 1; //Decrement the max for the new search value
	}
	cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
	return 0;
}