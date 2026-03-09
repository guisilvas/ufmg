#include <string>
#include <fstream>
#include <iostream>

using namespace std;

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

void play(string key)
{
    string attempt, answer, wrong;
    
    for(int i=0;i<5;i++) //Player attempts
    {
        answer = "*****"; //Tries
        cin>>attempt;
        attempt = to_upper(attempt);

        for(int j=0;j<5;j++) //Compare attempt char to eat key char
        {
            for(int k=0;k<5;k++)
            {
                if(attempt[j]==key[k])
                {
                    if(j==k)
                    {
                        answer[j] = attempt[j];
                    }
                    else
                    {
                        answer[j] = (char)tolower(attempt[j]);
                    }
                }
            }
             
            if(answer[j]=='*') //Add wrong letter
            {
                wrong = wrong + attempt[j];
            }
        }
        
        cout<<answer<<" ("<<wrong<<")"<<endl; 
        if(attempt==key)
        {
            cout<<"GANHOU!"<<endl;
            break;
        }
    }
    
    if(attempt!=key)
    {
        cout<<"PERDEU! "<<key<<endl;
    }
    
    return;
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
