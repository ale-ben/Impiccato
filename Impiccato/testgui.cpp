#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

  string line;
  string fpath = "C:/Users/alebe/OneDrive/Documents/coding/c++/Projects/Impiccato/Impiccato/HangmanTXT/";
  string fName;
  string x;
  while (true) {
	  cin >> x;
	  fName = fpath + x + ".txt";
	  cout << endl << fName << endl;
	  ifstream myfile(fName);
	  if (myfile.is_open())
	  {

		  while (getline(myfile, line))
		  {
			  cout << line << '\n';
		  }
		  myfile.close();
	  }

	  else cout << "Unable to open file";
 }
  return 0;
}
