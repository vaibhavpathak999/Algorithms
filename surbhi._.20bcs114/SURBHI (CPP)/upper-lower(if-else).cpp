/*#include<iostream>
using namespace std;
int main()
{
    char ch;//Variable declaration
    
     cin>>ch;//store the entered character
     if(ch>='A' && ch<='Z'){//check upper case
     cout<<'1';
}
else if(ch>='A' && ch<='z'){//check lower case
    cout<<'0';
}
else{
    cout<<'-1';
}

    return 0;
} */
#include <iostream>
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
