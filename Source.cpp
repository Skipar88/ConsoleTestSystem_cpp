#include <iostream>
#include <locale>
#include <string>
#include <fstream>
#include <conio.h>
#include <windows.h>

#include "vars.h"

using namespace std;

string fromDos(string dosString)
{
	char buf[1000000];
	OemToCharA(dosString.c_str(), buf);
	return buf;
}

string test()
{
	string line;
	ifstream testfile;
	testfile.open("test.txt");

	while ( getline (testfile,line) )
	{
		cout << line << '\n';
	}

	testfile.close();
	return "";
}

int test1()
{
	for (unsigned i = 0; i < 2; i++)
	{
		cout << questions[i] << endl;
		for (int j = 0; j < 8; j++)
		{

			if (stoi(answers[1][j]) == i)
			{

				cout << answers[0][j] << endl;
			}
		}
	}
	return 0;
}

int main()
{

	setlocale(LC_ALL, "bulgarian");

	string name = "";
	string result = "";
	bool finished = false;

	cout << "Вашето име:";
	
	cin >> name;


	name = fromDos(name);

	cout << name << endl << "Искате ли да започнете тест?(y/n)" << endl;


	int c = 0;
	while (!finished)
	{
		c = 0;

		switch ((c = _getch())) {
		case KEY_Y:
			result = test1 ();
			finished = true;
			break;
		case KEY_N:
			return 0;
			break;
		case KEY_y:
			result = test1();
			finished = true;
			break;
		case KEY_n:
			return 0;
			break;
		case KEY_y_bg:
			result = test1();
			finished = true;
			break;
		case KEY_n_bg:
			return 0;
			break;
		case KEY_Y_bg:
			result = test1();
			finished = true;
			break;
		case KEY_N_bg:
			return 0;
			break;
		default:
			//cout << endl << _getch() << endl;  // key left
			break;
		}

	}

	cout << result << endl;
}

