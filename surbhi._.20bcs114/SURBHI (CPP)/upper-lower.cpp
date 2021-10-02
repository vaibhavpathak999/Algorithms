#include <conio.h>
using namespace std;
int main()
{
    char ch;//Variable declaration
    cout<<"Enter a character: ";
     cin>>ch;//store the entered character
     if(ch>='A' && ch<='Z'){//check upper case
    cout<<ch<<" is an upper case letter ";
}
else if(ch>='A' && ch<='z'){//check lower case
    cout<<ch<<" is a lower case letter ";
}
else{
    cout<<ch<<" is not an Alphabets ";
}
getch();
    return 0;
}
