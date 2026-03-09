#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void words(string s)
{
    string str;
    strigstream res(s);
    while(res>>str)
    {
        cout<<str<<endl;
    }
    return;
}

int main()
{
    string s = "Hello Her Einstein!";
    words(s);
    return 0;
}
