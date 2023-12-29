#include<iostream>
#include<string>

using namespace std;

int main(){
    string kalimat;
    string cari;

    cout<<"\n\tMasukkan kalimat: ";
    getline(cin, kalimat);
    cout<<"\n\tMasukkan potongan kalimat yang ingin dicari posisinya: ";
    getline(cin, cari);

    size_t posisi = kalimat.find(cari);

    if(posisi != string::npos){
        cout<<"\n\tPotongan kalimat tersebut berada pada indeks posisi ke: "<< posisi << endl;
    } else {
        cout<<"\n\tPotongan kalimat tidak ditemukan."<<endl;
    }
    return 0;
}
