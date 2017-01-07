#include "Gui.h"



string Gui::getWord()
{
	string word;
	cout << "Input the word, be carefull not to be spied: ";
	cin >> word;
	system("CLS");
	return string(word);
}

char Gui::getChar()
{
	char letter;
	cout << "Inserct a letter: ";
	cin >> letter;
	return (letter);
}

Gui::Gui()
{
}