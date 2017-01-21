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

void succeed(int noCorrects)
{
	system("CLS");
	if (noCorrects == 0) {
		cout << endl << "Nope, that's not correct :(";
	}
	else {
		cout << endl << "Yep, you were right!" << endl << "You guessed " << noCorrects << " letters!";
	}
}

void used(char c)
{
	system("CLS");
	cout << endl << "You already used " << c << "!" << endl << "You Idiot!";
}

void won(int noAtt, string word, int length)
{
	cout << endl << endl << "You won!" << endl << endl << "The word was: " << word;
	cout << endl << "It was " << length << " letters long.";
	cout << endl << "It took you " << noAtt << " attempts to guess it." << endl;

}