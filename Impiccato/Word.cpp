#include "Word.h"



Word::Word()
{

}

Word::Word(string word)
{
	_word = word;
	_wLength = _word.length();
}

bool Word::isTheRightOne(char letter)
{
	for (int i = 0; i != _wLength; i++) {
		if (_word[i] == letter) return true;
	}
	return false;
}
