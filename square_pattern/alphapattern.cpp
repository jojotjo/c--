//square pattern in alphabet format
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"input the number of pattern: ";
    cin>>num;
    for(int i=0;i<num;i++){
        char ch='A';
        for(int j=0;j<num;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}