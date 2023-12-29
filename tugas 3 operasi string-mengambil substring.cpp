#include<iostream>
#include<string>

using namespace std;

int main(){
    string kalimat;
    int x;
    int y;

    cout<<"\n\tMasukkan kalimat: ";
    getline(cin, kalimat);
    cout<<"\n\tPilih karakter dari kelimat, mulai dari indeks ke: ";
    cin>>x;
    cout<<"\n\tJumlah karakter yang diinginkan: ";
    cin>>y;

    string potongankalimat = kalimat.substr(x,y);
    cout<<"\n\n\tKarakter yang anda pilih adalah: "<< potongankalimat<< endl;
}
