#include "Gui.h"



string getWord()
{
	string word;
	cout << "Input the word, be carefull not to be spied: ";
	cin >> word;
	system("CLS");
	return string(word);
}

char getChar()
{
	char letter;
	cout << endl << endl << "Inserct a letter: ";
	cin >> letter;
	return (letter);
}

void initWord(string *pWord, int length)
{
	string word;
	for (int i = 0; i != length; i++) {
		word = word + "*";
	}
	*pWord = word;
}

void updateWord(string *pWord, int pos, char letter)
{
	string word = *pWord;
	word[pos] = letter;
	*pWord = word;
}

void printWord(string pWord)
{
	system("CLS");
	cout << endl << endl;
	for (int i = 0; i != pWord.length(); i++) {
		cout << " " << pWord[i];
	}
}

bool lastOne(string word)
{	
	for (int i = 0; i != word.length(); i++) {
		if (word[i] == '*') return false;
		}
	return true;
}

/*
void initWord(int length)
{
	for (int i = 0; i != length; i++) {
		pWord[i] = '*';
	}
}

void updateWord(int pos, char letter)
{
	pWord[pos] = letter;
}

void printWord()
{
	system("CLS");
	cout << endl << endl;
	for (int i = 0; i != pWord.length(); i++) {
		cout << " " << pWord[i];
	}
}
*/