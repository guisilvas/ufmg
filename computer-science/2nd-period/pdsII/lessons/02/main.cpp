#include <iostream>
#include <string.h>

using namespace std;

string genSeq(int x)
{
    string res;
    for(int i=0; i<=x; i++)
    {
        char c = '0' + i;
        res = res + c;
    }
    return res;
}

string reverseSeq(string s)
{
    string res;
    for(int i=s.length()-1; i>=0; i--)
    {
      res = res + s[i];
    }
    return res;
}

void entry()
{
    int x;
    cout << "Entries: ";
    while(cin >> x)
    {
        cout << "[" << x << "]" << endl;
    }
    return;
}

int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hi, " << name << endl;
    
    int num;
    cout << "Enter a integer num: ";
    cin >> num;
    string seq = genSeq(num);

    cout << "This is a natural sequence to " << num << ": " << seq << endl;

    string reversed = reverseSeq(seq);
    cout << "Reverse of sequence " << seq << ": " << reversed << endl;
    
    cout << "The second value on sequence " << seq << ": " << seq[1] << endl;
    
    cout << "Entry while have int: " << endl;
    entry();

    return 0;
}
