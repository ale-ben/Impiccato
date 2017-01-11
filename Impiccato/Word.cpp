#include "Word.h"

Word::Word()
{

}

Word::Word(string word)
{
	_word = word;
	_wLength = _word.length();
}

int Word::isTheRightOne(string *pWord, char letter)
{
	int noOfCorrects = 0;
	for (int i = 0; i != _wLength; i++) {
		if (_word[i] == letter) {
			updateWord(pWord, i, letter);
			noOfCorrects++;
		}
	}
	return noOfCorrects;
}

int Word::getWLength()
{
	return _word.length();
}
