#include <iostream>
using namespace std;

void awalan(){
    cout << "=====================================================" << endl;
    cout << "          Pilih Menu Yang Ingin Kamu Pilih           " << endl;
    cout << "=====================================================" << endl; 
    cout << "=  1. Menghitung Luas Persegi Panjang               =" << endl;   
    cout << "=  2. Menghitung Keliling Persegi                   =" << endl;  
    cout << "=  1. Menghitung Luas Lingkaran                     =" << endl;  
    cout << "=====================================================" << endl;
}

void persegiPanjang(int panjang, int lebar, int luas){
    luas = panjang*lebar;
    cout << "=============================================" << endl;
    cout << "=         Rumus Luas Persegi Panjang        =" << endl;
    cout << "=============================================" << endl;
    cout << " Luas dari persegi panjang dengan panjang : " << panjang << "cm" << " dan lebar : " << lebar << "cm" << endl;
    cout << " adalah : " << luas << "cm" << endl;

}

void persegi(int sisi, int keliling){
    keliling = 4*sisi;
    cout << "=============================================" << endl;
    cout << "=           Rumus Keliling Persegi          =" << endl;
    cout << "=============================================" << endl;
    cout << " Keliling dari persegi  dengan sisi : " << sisi << "cm" << endl;
    cout << " adalah : " << keliling << "cm" << endl;

}

void lingkaran(int jariJari, double keliling){
    double piLingkaran = 3.14;
    keliling = piLingkaran*jariJari*jariJari;
    cout << "=============================================" << endl;
    cout << "=          Rumus Luas Lingkaran         =" << endl;
    cout << "=============================================" << endl;
    cout << " Luas dari Lingkaran dengan Jari Jari : " << jariJari << "cm" << endl;
    cout << " adalah : " << keliling << "cm" << endl;

}

int main(){
    int pilihRumus, luas, panjang, lebar, sisi, keliling, jariJari;
    double kelilingLingkaran;
    awalan();
    cout << " masukan pilihanmu : " ;
    cin >> pilihRumus;
    cout << endl;
    system("cls");

    if(pilihRumus == 1){
        cout << " masukan panjang : ";
        cin >> panjang;
        cout << " masukan lebar : ";
        cin >> lebar;
        system("cls");
        persegiPanjang(panjang,lebar,luas);
        system("pause");
    } else if (pilihRumus == 2){
        cout << " masukan sisi persegi : ";
        cin >> sisi;
        system("cls");
        persegi(sisi, keliling);
        system("pause");
    } else if (pilihRumus == 3){
        cout << " masukan Jari jari Lingkaran : ";
        cin >> jariJari;
        system("cls");
        lingkaran(jariJari, kelilingLingkaran);
        system("pause");
    } else {
        cout << " menu yang kamu pilih tidak memiliki rumus apapun " << endl;
        system("pause");
    };

}