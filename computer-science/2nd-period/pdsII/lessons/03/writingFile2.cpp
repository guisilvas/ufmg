#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int write()
{
    ifstream in("data.txt",fstream::in);
    if(!in.is_open())
    {
        return 1;
    }
    ofstream out("data2.txt",fstream::out);
    if(!out.is_open())
    {
        return 1;
    }
    
    string s;
    while(getline(in,s))
    {
        out<<"["<<s<<"]"<<endl;
    }
    in.close();
    out.close();
    return 0;
}

int main()
{
    write();
    return 0;
}
