/*Alan Lee - 9/22/2017 period 1

display text

introduction into C++ IDE Visual Studios
Create New Project & desplay TExt to Conslole
*/

//libraries
#include<iostream>
#include<conio.h>// gives access to _kbhit()

// Namespaces
using namespace std;

//function
void Pause() {
	cout << "Hello World!";
	while(!_kbhit());
	_getch();
	cout << "\n";
}

// Main
void main() {
	// Display text
	int 1;
	cout <<"Alan Lee" << endl;
	cout <<"1" << endl;
	Pause();
	// no system("")' commands anymore
}
