#pragma once
#include <iostream>
#include <string>
using namespace std;

class YolcuBilgisi {
    friend class biletDetaylar;
private:
    string isim;
    string soyisim;
    int yas;
    string tc;
    string telNo;
    int bakiye;

public:

    ~YolcuBilgisi() {
        cout << "Yolcu " << isim << " " << soyisim << " destructor cagirildi..." << endl;
    }



    YolcuBilgisi(string isim, string soyisim, int yas, string tc, string telNo, int bakiye) {
        this->isim = isim;
        this->soyisim = soyisim;
        this->yas = yas;
        this->tc = tc;
        this->telNo = telNo;
        this->bakiye = bakiye;
    }

    string getIsim() const {
        return isim;
    }
    void setIsim(const string& yeniIsim) {
        this->isim = yeniIsim;
    }

    string getSoyisim() const {
        return soyisim;
    }
    void setSoyisim(const string& yeniSoyisim) {
        this->soyisim = yeniSoyisim;
    }

    int getYas() const {
        return yas;
    }
    int getBakiye()
    {
        return bakiye;
    }
    void setYas(int yeniYas) {
        this->yas = yeniYas;
    }

    string getTc() const {
        return tc;
    }
    void setTc(const string& yeniTc) {
        this->tc = yeniTc;
    }
    void setBakiye(int bakiyeY)
    {
        this->bakiye = bakiyeY;
    }

    string getTelNo() const {
        return telNo;
    }
    void setTelNo(const string& yeniTelNo) {
        this->telNo = yeniTelNo;
    }

    void bilgileriYazdir() const {
        cout << "Yolcu Bilgileri: " << endl;
        cout << "Ýsim: " << this->isim << endl;
        cout << "Soyisim: " << this->soyisim << endl;
        cout << "Yas: " << this->yas << endl;
        cout << "TC: " << this->tc << endl;
        cout << "Telefon Numarasi: " << this->telNo << endl;
        cout << "Bakiyeniz: " << this->bakiye << endl;
    }
};
