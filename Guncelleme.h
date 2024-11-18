#pragma once
#include <iostream>
#include <string>
#include "YolcuBilgisi.h" 

using namespace std;

class Guncelleme {
public:


    static void yolcuBilgileriniGuncelle(YolcuBilgisi& yolcu) {
        string yeniIsim, yeniSoyisim, yeniTc, yeniTelNo;
        int yeniYas;

        cout << "Guncelleme icin yeni bilgileri giriniz." << endl;

        cout << "Yeni Ýsim  ";
        getline(cin, yeniIsim);
        if (!yeniIsim.empty()) {
            yolcu.setIsim(yeniIsim);
        }

        cout << "Yeni Soyisim ";
        getline(cin, yeniSoyisim);
        if (!yeniSoyisim.empty()) {
            yolcu.setSoyisim(yeniSoyisim);
        }

        cout << "Yeni Yas  ";
        getline(cin, yeniIsim);
        if (!yeniIsim.empty()) {
            yeniYas = atoi(yeniIsim.c_str());
            yolcu.setYas(yeniYas);
        }

        cout << "Yeni TC  ";
        getline(cin, yeniTc);
        if (!yeniTc.empty()) {
            yolcu.setTc(yeniTc);
        }

        cout << "Yeni Telefon Numarasi ";
        getline(cin, yeniTelNo);
        if (!yeniTelNo.empty()) {
            yolcu.setTelNo(yeniTelNo);
        }

        cout << "Bilgiler basariyla guncellendi!" << endl;
    }
};
