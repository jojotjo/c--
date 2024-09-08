//square pattern in number format

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"input the number : ";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}