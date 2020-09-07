#include<iostream>
#include<string>
//#include<locale>
//#include<sstream>
#include<cctype>

using namespace std;

int main() {
	int upper = 0;
	int lower = 0;
	int digit = 0;
	string s1;
	char ch;

	while (ch != '#') {
		if (isupper(ch)) upper++;
		if (islower(ch)) lower++;
		if (isdigit(ch)) digit++;
		
		cin.get(ch);
	}
	
	cout << lower << endl;
	cout << upper << endl;
	cout << digit;
	
	return 0;
}