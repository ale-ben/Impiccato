#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	cout << "Choose a word: ";
	cin >> word;
	int lenght = word.length();
	for (int i = 0; i < lenght; i++) {
		cout << word[i] << endl;
	}
	system("PAUSE");
}