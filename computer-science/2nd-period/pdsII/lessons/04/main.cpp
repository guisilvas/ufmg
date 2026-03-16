#include <bits/stdc++.h>
using namespace std;

int main() {
    int* p = nullptr;
    int *q = nullptr;
    int * r = 0;
    int a = 2;
    int* s = new int;
    
    cout<<"a = "<<a<<endl<<"&a = "<<&a<<endl;
    
    p = &a;
    q = &a;
    r = &a;
    *s = a;
    
    cout<<endl<<"p = "<<p<<endl<<"&p = "<<&p<<endl<<"*p = "<<*p<<endl;
    cout<<endl<<"q = "<<q<<endl<<"&q = "<<&q<<endl<<"*q = "<<*q<<endl;
    cout<<endl<<"r = "<<r<<endl<<"&r = "<<&r<<endl<<"*r = "<<*r<<endl;
    cout<<endl<<"s = "<<s<<endl<<"&s = "<<&s<<endl<<"*s = "<<*s<<endl;
    
    delete s;
    
  return 0;
}
