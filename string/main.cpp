#include "MyString.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "Objects before: " << MyString::GetObjectCount() << endl;

    MyString str1("Hello");
    MyString str2("World");

    cout << "Objects now: " << MyString::GetObjectCount() << endl;

    MyString str3 = str1 + str2;  
    cout << "Concatenation result: ";
    str3.Print();

    {
        MyString str4 = str1 + str3;
        cout << "Objects inside scope: " << MyString::GetObjectCount() << endl;
        cout << "str4 = ";
        str4.Print();
    }

    cout << "Objects after scope: " << MyString::GetObjectCount() << endl;

    return 0;
}
