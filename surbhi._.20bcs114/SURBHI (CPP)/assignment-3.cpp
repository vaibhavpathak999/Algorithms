#include <bits/stdc++.h>
using namespace std;
class morse_code
{
	string s;
public:
string morse__code(char x)
{
switch (x)
{
case '1':
return ".----";
case '2':
return "..---";
case '3':
return "...--";
case '4':
return "....-";
case '5':
return ".....";
case '6':
return "-....";
case '7':
return "--...";
case '8':
return "---..";
case '9':
return "----.";
case '0':
return "-----";
case 'A':
return ".-";
case 'B':
return "-...";
case 'C':
return "-.-.";
case 'D':
return "-..";
case 'E':
return ".";
case 'F':
return "..-.";
case 'G':
return "--.";
case 'H':
return "....";
case 'I':
return "..";
case 'J':
return ".---";
case 'K':
return "-.-";
case 'L':
return ".-..";
case 'M':
return "--";
case 'N':
return "-.";
case 'O':
return "---";
case 'P':
return ".--.";
case 'Q':
return "--.-";
case 'R':
return ".-.";
case 'S':
return "...";
case 'T':
return "-";
case 'U':
return "..-";
case 'V':
return "...-";
case 'W':
return ".--";
case 'X':
return "-..-";
case 'Y':
return "-.--";
case 'Z':
return "--..";
case ' ':
// return "/";
//Seven unit of space as per the given in question
return " ";
default:
cout << "Invalid Input";
exit(0);
}
}
void morseCode(string s)
{
for (int i = 0; s[i]; i++)
{
cout << morse__code(s[i]) << " ";
}
cout << endl;
}
};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//Here I am taking input string from the user
string s;
cout << "Please Enter the String:" << endl;
cout << endl;
getline(cin, s);

transform(s.begin(), s.end(), s.begin(), ::toupper);
//Making object of class morse_code
morse_code M;
//Calling function to produce morse code
cout << endl;
cout << "Corresponding Morse Code:" << endl
<< endl;
M.morseCode(s);
cout << endl;
return 0;

}
