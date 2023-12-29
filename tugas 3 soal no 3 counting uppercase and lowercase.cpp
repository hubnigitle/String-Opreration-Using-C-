#include<algorithm>
#include<iostream>
#include<cctype>
#include<string>

using namespace std;

int main(){
    cout<< "    Masukkan sebuah kata atau kalimat : ";

    string s ;
    if(getline(cin, s))
       {

           size_t count_upper = count_if(s.begin(), s.end(),
            [](unsigned char ch){return isupper(ch);});
            cout<< "Jumlah huruf kapital : "<< count_upper<<endl;

           size_t count_lower = count_if(s.begin(), s.end(),
            [](unsigned char ch){return islower(ch);});
            cout<< "Jumlah huruf kecil : "<< count_lower<<endl;



       }
}
