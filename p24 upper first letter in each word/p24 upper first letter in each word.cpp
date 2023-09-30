#include <iostream>
#include <string>
using namespace std;

string readString()
{
	string myString = "";

	cout << "please enter the string?\n";
	getline(cin, myString);

	return myString;
}

string UpperFirstLetterInEachWord(string str)// gomaa el  sherbini
{
	bool isFirstLetter = true;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' && isFirstLetter)
		{
			str[i] = toupper(str[i]);
		}
		isFirstLetter = (str[i] == ' ') ? true : false;
	}
	return str;
}

int main()
{
	string str;

	str = readString();

	cout << UpperFirstLetterInEachWord(str) << endl;



	system("pause>0");

	return 0;

}