#include "Word.h"
#include <iostream>

using namespace std;

int main() {
	string pWord;
	string *pointWord;
	pointWord = &pWord;
	Word word(getWord());
	initWord(pointWord, word.getWLength());	
	int noCorrects = 0;
	while (!lastOne(pWord)) {
		printWord(pWord);
		noCorrects += word.isTheRightOne(pointWord, getChar());
	}
	cout << endl <<"You won";
	system("PAUSE");
}