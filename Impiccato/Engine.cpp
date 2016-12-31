#include "Engine.h"



Engine::Engine(Word wo)
{
	word = wo;
	_length = word.getWordLength();
}


bool Engine::checkLetter(char lett)
{
	char _letter = '.';
	bool isTrue = false;
	for (int i = 0; i != _length; i++) {
		if (word.getLetter(i) == _letter) isTrue = true;
	}
	return isTrue;
}
