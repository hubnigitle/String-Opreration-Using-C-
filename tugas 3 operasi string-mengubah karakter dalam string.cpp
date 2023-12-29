#include<iostream>
#include<string>

using namespace std;

int main(){
    string user_decision;
    string kalimat;
    int indeks;
    char karakter_baru;

    cout<<"\n\tMasukkan kalimat: ";
    getline(cin, kalimat);

    cout<<"\n\tAda karakter yang ingin di ubah? yes/no :";
    cin>>user_decision;

    if(user_decision=="yes"){
        cout<<"\n\tPosisi indeks karakter yang ingin diubah: ";
        cin>>indeks;
        cout<<"\n\tMasukkan karakter baru: ";
        cin>>karakter_baru;
        kalimat[indeks]=karakter_baru;
        cout<<"\n\tHasil perubahannya : "<< kalimat<<endl;
    } else {
        cout<<"";
    }



}
