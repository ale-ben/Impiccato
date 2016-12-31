#include <iostream>
#include <string>

#include "Word.h"
#include "Gui.h"
#include "Engine.h"

using namespace std;

int main() {
	Gui gui;
	Word word(gui.getWord());
	Engine Engine(word);

	system("PAUSE");
}