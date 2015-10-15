// example 3-2-2
// read and write strings
#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

/*
// read and write single string
int main()
{
	string s;
	cin >> s;
	cout << s << endl;
	return 0;
}
*/

// read and write unknown number of strings
// try in Powershell "get-content book.dat | .\eg3-2-2.exe"
int main()
{
	string word;
	while (cin >> word)
		cout << word << endl;
	return 0;
}


// 