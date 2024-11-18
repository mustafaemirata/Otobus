#pragma once
#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>   
using namespace std;

class otobusBilgisi
{
private:
    string sofor;
    string muavin;

    string ikramlar[20] =
    {
        "Su", "Cips", "Cikolata", "Biskuvi", "Kola",
        "Soda", "Meyve Suyu", "Kuruyemis", "Recel", "Peynir",
        "Zeytin", "Sandvic", "Kraker", "Kuru Uzum", "Cay",
        "Kahve", "Findik", "Pasta", "Dondurma", "Yogurt"
    };

    string duraklar[10][3] =
    {
        {"Bursa, ","Balikesir, ","Manisa"}, {"Bolu, ","Samsun, ","Ordu, "},
        {"Ankara, ","Cankiri, ","Corum"},{"Söke, ","Milas, ","Torba"},
        {"Sakarya, ","Bilecik, ","Afyon"},{"Kirikkale, ","Kirsehir, ","Mucur"},
        {"Samandýra, ","Gebze","Izmit"},{"Aydin, ","Cine, ","Yatagan"},
        {"Bolu, ","Karamursel, ","Yalova"},{"Serik, ","Manavgat, ","Seydisehir"}


    };

public:
    otobusBilgisi() {

        srand(static_cast<unsigned>(time(0)));
    }
    void durakYazdir(int sayi)
    {
        cout << "Duraklar:";
        for (int i = 0; i < 3; i++)
        {
            cout << duraklar[sayi][i];
        }
        cout << endl;
    }


    void ist_izmir()
    {
        durakYazdir(0);
        sofor = "Mahmut Kaya";
        muavin = "Salih Tasci";
        cout << "Ikram: " << ikramlar[rand() % 20] << endl;
        cout << "Sofor isim: " << sofor << endl;
        cout << "Muavin isim: " << muavin << endl;
    }

    void bursa_trabzon()
    {
        durakYazdir(1);
        sofor = "Mustafa Gunes";
        muavin = "Ali Yilmaz";
        cout << "Ikram: " << ikramlar[rand() % 20] << endl;
        cout << "Sofor isim: " << sofor << endl;
        cout << "Muavin isim: " << muavin << endl;
    }

    void eskisehir_samsun()
    {
        durakYazdir(2);
        sofor = "Koray Yýldýrým";
        muavin = "Ozgür Saðlam";
        cout << "Ikram: " << ikramlar[rand() % 20] << endl;
        cout << "Sofor isim: " << sofor << endl;
        cout << "Muavin isim: " << muavin << endl;
    }

    void izmir_bodrum()
    {
        durakYazdir(3);
        sofor = "Mustafa Emir Ata";
        muavin = "Arda Genç";
        cout << "Ýkram: " << ikramlar[rand() % 20] << endl;
        cout << "Sofor isim: " << sofor << endl;
        cout << "Muavin isim: " << muavin << endl;
    }

    void istanbul_antalya()
    {
        durakYazdir(4);
        sofor = "Koray Aktas";
        muavin = "Kumru Sahil";
        cout << "Ikram: " << ikramlar[rand() % 20] << endl;
        cout << "Sofor isim: " << sofor << endl;
        cout << "Muavin isim: " << muavin << endl;
    }

    void ankara_kayseri()
    {
        durakYazdir(5);
        sofor = "Kayra Usta";
        muavin = "Yahya Ozden";
        cout << "Ikram: " << ikramlar[rand() % 20] << endl;
        cout << "Sofor isim: " << sofor << endl;
        cout << "Muavin isim: " << muavin << endl;
    }

    void istanbul_sakarya()
    {
        durakYazdir(6);
        sofor = "Soner Mahsun";
        muavin = "Ismail Can";
        cout << "Ikram: " << ikramlar[rand() % 20] << endl;
        cout << "Sofor isim: " << sofor << endl;
        cout << "Muavin isim: " << muavin << endl;
    }

    void izmir_mugla()
    {
        durakYazdir(7);
        sofor = "Mehmet Demir";
        muavin = "Ceren Bulut";
        cout << "Ikram: " << ikramlar[rand() % 20] << endl;
        cout << "Sofor isim: " << sofor << endl;
        cout << "Muavin isim: " << muavin << endl;
    }

    void ankara_bursa()
    {
        durakYazdir(8);
        sofor = "Hasan TaS";
        muavin = "Emir Soydan";
        cout << "Ikram: " << ikramlar[rand() % 20] << endl;
        cout << "Sofor isim: " << sofor << endl;
        cout << "Muavin isim: " << muavin << endl;
    }

    void antalya_konya()
    {
        durakYazdir(9);
        sofor = "Emre Sahin";
        muavin = "Ali Demir";
        cout << "Ikram: " << ikramlar[rand() % 20] << endl;
        cout << "Sofor isim: " << sofor << endl;
        cout << "Muavin isim: " << muavin << endl;
    }
};
