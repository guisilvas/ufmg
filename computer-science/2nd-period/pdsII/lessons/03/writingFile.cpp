#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("data.txt",fstream::in);
    ofstream out("list.txt",fstream::out);
    
    string s;
    while(getline(in,s))
    {
        cout<<"["<<s<<"] "<<endl;
        out<<"["<<s<<"] "<<endl;
    }
    
    return 0;
}
