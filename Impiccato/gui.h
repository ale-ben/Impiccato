#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

string getWord();
char getChar();
/*
void initWord(int lengt);
void updateWord(int pos, char letter);
void printWord();
*/
void initWord(string *pWord, int lengt);
void updateWord(string *pWord, int pos, char letter);
void printWord(string pWord);
bool lastOne(string word);
void succeed(int noCorrects);
void used(char c);
void end(int noAtt, int life, int errors, string word, int length);
void drawStatus(int difficulty, int status);