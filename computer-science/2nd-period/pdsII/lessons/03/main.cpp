#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void entry()
{
    char c;
    while(cin >> c)
    {
        cout << c << " ";
    }
    cout << endl;
    return;
}

string line()
{
    string s;
    cout << "Enter your name: ";
    getline(cin, s);
    return s;
}

void getLine()
{
    string line;
    while(getline(cin, line))
    {
        stringstream info(line);
        string aux;
        while(getline(info,aux,';'))
        {
            cout << aux << endl;
        }
    }
    return;
}

int main()
{
    //entry();
    string name = line();
    cout << "Hello " << name << endl;
    getLine();
    return 0;
}
