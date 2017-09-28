#include "Word.h"
#include <iostream>

using namespace std;

int main() {
	int life = 6;
	int errors = 0;
	string pWord;
	string *pointWord;
	pointWord = &pWord;
	Word word(getWord());
	initWord(pointWord, word.getWLength());	
	int noOfAttempts = 0;
	while ((!lastOne(pWord)) && (errors != life)) {
		noOfAttempts++;
		printWord(pWord);
		if (word.isTheRightOne(pointWord, getChar()) == 1) {
			errors++;
		}
		drawStatus(life, errors);
	}
	end(noOfAttempts, life, errors, pWord, word.getWLength());
	system("PAUSE");
}