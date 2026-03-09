#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string hello()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    return name;
}

int magnitude(int x)
{
    string s = to_string(x);
    return pow(10,s.length()-1);
}

int main()
{
    string name = hello();
    
    int num = 0;
    cout << "Enter a integer value: ";
    cin >> num;
    
    cout << "Magnitude of " << num << ": " << magnitude(num) << endl;
    
    return 0;
}
