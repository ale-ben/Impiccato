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

void end(int noAtt, int life, int errors, string word, int length)
{
	system("cls");
	if (errors <= life) {
		cout << endl << endl << "You won!" << endl << endl << "The word was: " << word;
		cout << endl << "It was " << length << " letters long.";
		cout << endl << "It took you " << noAtt << " attempts to guess it.";
		cout << endl << "You had " << life << " lifes, You made " << errors << " errors." << endl;
	}
	else {
		cout << endl << endl << "You lost :(" << endl << endl << "The word was: " << word;
		cout << endl << "It was " << length << " letters long.";
		cout << endl << "It took you " << noAtt << " attempts to guess it.";
		cout << endl << "You had " << life << " lifes, You made " << errors << " errors." << endl;
	}


}

void drawStatus(int difficulty, int status)
{
	string line;
	string fpath = "C:/Users/alebe/OneDrive/Documents/coding/c++/Projects/Impiccato/Impiccato/Resources/HangmanTXT/";
	string fName;
	if ((status != difficulty) && (status != 0)) {
		fName = fpath + "/" + to_string(difficulty) + "/" + to_string(status) + ".txt";
	}
	else if (status == 0) {
		fName = fpath + "/" + "alive.txt";
	} else if (status == difficulty) {
		fName = fpath + "/" + "dead.txt";
	}
	ifstream myfile(fName);
	if (myfile.is_open())
	{

		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}

	else {
		cout << "Unable to open file";
	}
}
