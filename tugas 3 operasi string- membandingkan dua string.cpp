#include<iostream>
#include<string>

using namespace std;
int main(){
    string username;
    string username2;

    cout<<"\n\tMasukkan username anda: ";
    getline(cin, username);

    cout<<"\tKonfirmasi username: ";
    getline(cin, username2);

    if(username==username2){
        cout<<"\n\n\tUsername mathces"<<endl;
    } else {
        cout<<"\n\n\tPlease enter the same username"<<endl;
    }
}
