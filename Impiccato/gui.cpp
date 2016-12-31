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
	char chara;
	cout << "Inserct a letter: ";
	cin >> chara;
	return (chara);
}

Gui::Gui()
{
}