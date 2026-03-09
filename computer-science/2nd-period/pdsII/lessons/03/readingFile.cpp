#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void getting()
{
    string s;
    while(getline(cin,s))
    {
        stringstream entry(s);
        string aux;
        while(getline(entry,aux,';'))
        {
            cout<<aux<<endl;
        }
    }
    return;
}

int main()
{
    getting();
    return 0;
}
