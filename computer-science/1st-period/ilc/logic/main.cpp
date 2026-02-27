/* Version: 0.0.1
 * Based on book Discrete Math and Applications 6th Edition by Kenneth H. Rosen 978-0-07-288008-3
 * Author: Guilherme Soares Silva
 * Created on: 2026/02/26
 * Last date modify: 2026/02/26
*/

#include <iostream>

using namespace std;

int menu()
{
    int x;
    cout<< "Select a chapter" << endl;
    cout<< "1 - Logic and Demonstration"<<endl;
    cin>>x;
    return x;
}

// Chapter 1
int logic()
{
    return 0;
}

int main()
{
    cout<<"This is a program for myself study on Logics"<<endl;
    menu();
    return 0;
}
