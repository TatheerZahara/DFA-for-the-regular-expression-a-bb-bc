#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;
int main(void) {
string str = "";
cout << "DFA using Goto statements" << endl;
cout << "Enter your desired string" << endl;
getline(cin, str);

//To check if the string belongs to the alphabet or not 
for (int i = 0; i < str.length(); i++) {
if (str[i] == 'a' || str[i] == 'b' || str[i] == 'c') {
continue;
}else {
cout << "String doesn't have alphabets of the language" << endl;
cout << "Press any key to exit" << endl;
getchar();
return 0;
}

}
//Starting the DFA
int seed = 0;
goto start;
start:
	if (str[seed] == 'a') {
	goto firstB;
	}
	else {
		goto Trap;
	}
firstB:
	seed++;
	if (str[seed] == 'b')
		goto nextborc;
	else
		goto Trap;
nextborc:
	seed++;
	if (str[seed] == 'b')
		goto firstB;
	else
		goto mandC;
mandC:
	seed++;
	if (str[seed] != '\0')
		goto Trap;
	cout << "Accepted" << endl;
	cout << "\n\nPress any key to exit" << endl;
	getchar();
	return  0;
Trap:
	cout << "This is trap state. Dfa is not accepted by the language" << endl;
	cout << "\n\nPress any key to exit" << endl;
	getchar();
	return  0;


}
