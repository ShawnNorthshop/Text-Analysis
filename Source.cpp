#include "iostream";
#include "string"; 
using namespace std; 

int main()
{
	cout << "Please enter a line of text. \n";
	//Cout will only read up to a space, so use a new function called "getline"
	string line; 
	getline(cin, line);

	int uppercase = 0;
	int lowercase = 0;
	int other = 0;

	//for loop starts with initiliazer, when we reach the end of the string
	for (int c = 0; c < line.size(); c++)
	{
		if (line.at(c) >= 'A' && line.at(c) <= 'Z')
		{
			uppercase++;

		}
		else if (line.at(c) >= 'a' && line.at(c) <= 'z')
		{
			lowercase++; //Remember without the curly brackets only the 1st line of statement will be read. 
		}
		else
		{
			other++;
		}
	}

	cout << "The string contains " << uppercase << " uppercase letters,"
		<< " also the string contains " << lowercase << " lowercase letters "
		<< "and the rest are " << other << " other letters! :) \n";

		return 0;

}

