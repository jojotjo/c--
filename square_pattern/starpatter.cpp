//square pattern in star format
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"input the number pattern : ";
    cin>>num;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}