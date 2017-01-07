#include <iostream>
#include <string>

#include "Gui.h"
#include "Word.h"

using namespace std;

int main() {
	Gui gui;
	Word word(gui.getWord());
	
	cout << word.isTheRightOne(gui.getChar());

	system("PAUSE");
}