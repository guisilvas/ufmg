#include <iostream>
#include <string>
#include <math.h>
#include <array>

using namespace std;

string menu()
{
    string name;
    cout << "Programming and Development Software" << endl;
    cout << "Enter your name: ";
    cin >> name;
    return name;
}

int magnitude(int x)
{
    string s = to_string(x);
    return pow(10,s.length() - 1);
}

int* factor(int x)
{
    int* res = new int[1];
    return res;
}

int main()
{
    string name = menu();
    int num = 0;
    cout << "Enter a value: ";
    cin >> num;
    int* ptr = factor(num);
    cout << "Magnitude of " << num << ": " << magnitude(num) << endl;
    cout << "Factors of " << num << ": " << ptr[0] << endl;
    delete[] ptr;
    return 0;
}
