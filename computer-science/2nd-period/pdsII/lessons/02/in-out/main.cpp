#include <iostream>
#include <string>
using namespace std;

int main() {
    float x = 0.0;
    string s = "";
    int matrix[3][3];
    
    cin>>x>>s;
    cout<<"Float: "<<x<<endl<<"String: "<<s<<endl;
    
    for(int i=0;i<3;i++) {
        for(int j=0;i<3;j++) {
            cin>>matrix[i][j];
        }
    }
    
    cout<<"Matrix"<<endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
