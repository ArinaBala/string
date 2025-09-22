#include "MyString.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "Objects before: " << MyString::GetObjectCount() << endl;

    MyString str1("Alice");
    MyString str2("Bob");

    cout << "Objects now: " << MyString::GetObjectCount() << endl;

    {
        MyString str3 = str1;
        cout << "Objects inside scope: " << MyString::GetObjectCount() << endl;
    }

    cout << "Objects after scope: " << MyString::GetObjectCount() << endl;

    return 0;
}