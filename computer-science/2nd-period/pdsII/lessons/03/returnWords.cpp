#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s = "Hello Her Einstein.";
    string str;
    strigstream res(s);
    while(res>>str)
    {
        cout<<str<<endl;
    }
    return 0;
}

/*
int main()
{
    string s = "Hello Her Einstein!";
    words(s);
    return 0;
}
*/
