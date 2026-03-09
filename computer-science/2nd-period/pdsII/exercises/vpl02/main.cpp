#include <string>
#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

void play(string key)
{
    string attempt, answer = "*****";
    cin>>attempt;
    attempt = to_upper(attempt);
    
    for(int i=0;i<5;i++)
    {
        if(attempt==key)
        {
            cout<<"GANHOU!"<<endl;
            break;
        }
        else
        {
            for(int j=0;j<5;j++)
            {
                for(int k=0;k<5;k++)
                {
                    if(attempt[j]==key[k])
                    {
                        if(j==k)
                        {
                            answer[j] = to_upper(attempt[j]);
                        }
                        else
                        {
                            answer[j] = to_lower(attempt[j]);
                        }
                    }
                }
            }
        }
        /*
        for(int m=0;m<5;m++)
        {
            if(asnwer[m]==0)
            {
                res = res + "*";
            }
            else if(answer[m]==1)
            {
                res = res + tolower(attempt[m]);
            }
            else
            {
                res = res + toupper(attempt[m]);
            }
            cout<<answer[m];
        }
        */
        cout<<answer<<endl;
    }
    return;
}

string to_upper(string s)
{
    for(char &c : s)
    {
        if (c>='a' && c<='z')
        {
            c=c-32;
        }
    }
    return s;
}

string to_lower(string s)
{
    for(char &c : s)
    {
        if(c>='A' && c<='Z')
        {
            c=c+32;
        }
    }
    return s;
}

string word(int n)
{
    string key;
    ifstream in("palavras.txt",fstream::in);
    for(int i=0;i<=n;i++)
    {
        getline(in,key);
    }
    
    return key;
}

int main()
{
    int n;
    cin>>n;

    string key;    
    key = word(n);
    
    play(key);
    
    return 0;
}
