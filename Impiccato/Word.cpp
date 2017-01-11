#include "Word.h"

Word::Word()
{

}

Word::Word(string word)
{
	_word = word;
	_wLength = _word.length();
}

bool Word::isTheRightOne(string *pWord, char letter)
{
	int noOfCorrects = 0;
	for (int j = 0; j != _letterUsed.length(); j++) {
		if (letter == _letterUsed[j]) {
			used(letter);
			return(0);
		}
	
	}
	_letterUsed += letter;
	for (int i = 0; i != _wLength; i++) {
		if (_word[i] == letter) {
			updateWord(pWord, i, letter);
			noOfCorrects++;
		}
	}
	succeed(noOfCorrects);
	if (noOfCorrects != 0) return (1);
	else return(0);
}

int Word::getWLength()
{
	return _word.length();
}
