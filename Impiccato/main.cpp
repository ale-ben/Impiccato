#include "Word.h"
#include <iostream>

using namespace std;

int main() {
	string pWord;
	string *pointWord;
	pointWord = &pWord;
	Word word(getWord());
	initWord(pointWord, word.getWLength());	
	int noOfAttempts = 0;
	while (!lastOne(pWord)) {
		noOfAttempts++;
		printWord(pWord);
		word.isTheRightOne(pointWord, getChar());
	}
	won(noOfAttempts, pWord, word.getWLength());
	system("PAUSE");
}