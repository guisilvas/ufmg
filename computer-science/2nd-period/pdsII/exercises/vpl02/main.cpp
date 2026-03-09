#include <iostream>
#include <string>
#include <fstream>

int main()
{
    int n;
    string s;
    
    ifstream in("palavras.txt",fstream::in);
    n = getline(in,n);
    
    for(int i=n,i>0,i--)
    {
        cout<<s<<endl;
    }
    
    return 0;
}
