#include <iostream>
#include "YolcuBilgisi.h"
#include "otobusBiletleri.h"
#include "biletDetaylar.h"
#include "Guncelleme.h"

using namespace std;

void biletAl(otobusBiletleri bilet, biletDetaylar& detay, int rotaSecim, YolcuBilgisi& yolcu)
{
    double odenecekTutar = 0.0;

    switch (rotaSecim) {
    case 1:
        bilet.istanbulIzmir(); odenecekTutar = 850.0;
        break;
    case 2:
        bilet.BursaTrabzon();
        odenecekTutar = 1150.0;
        break;
    case 3:
        bilet.eskisehirSamsun();
        odenecekTutar = 700.0;
        break;
    case 4:
        bilet.izmirBodrum();
        odenecekTutar = 350.0;
        break;
    case 5:
        bilet.istanbulAntalya();
        odenecekTutar = 850.0;
        break;
    case 6:
        bilet.ankaraKayseri();
        odenecekTutar = 300.0;
        break;
    case 7:
        bilet.istanbulSakarya();
        odenecekTutar = 270.0;
        break;
    case 8:
        bilet.izmirMugla();
        odenecekTutar = 480.0;
        break;
    case 9:
        bilet.ankaraBursa();
        odenecekTutar = 520.0;
        break;
    case 10:
        bilet.antalyaKonya();
        odenecekTutar = 850.0;
        break;
    default:
        cout << "Gecersiz sefer secim.\n";
        return;
    }

    detay.koltuklariGoster();
    int secilenKoltuk;

    do {
        cout << "Koltuk numarasını seciniz: ";
        cin >> secilenKoltuk;

        if (secilenKoltuk < 1 || secilenKoltuk > 40) {
            cout << "Gecersiz koltuk numarası. Lutfen 1 ile 40 arasında bir deger girin.\n";
        }
        else {
            break;
        }
    } while (true);

    detay.koltukRezerveEt(secilenKoltuk, yolcu); // Koltuk rezervasyonu

    cout << "Toplam odeme: " << odenecekTutar << " TL\n";
    if (yolcu.getBakiye() >= odenecekTutar) {
        yolcu.setBakiye(yolcu.getBakiye() - odenecekTutar);
        cout << "Bilet alindi. Kalan bakiye: " << yolcu.getBakiye() << " TL\n";
    }
    else {
        cout << "Yeterli bakiyeniz yok!\n";
    }
}


int main() {
    biletDetaylar detay;
    otobusBiletleri bilet;
    string isim, soyisim, tc, telNo;
    int yas, secim;
    double bakiye;
    cout << "Otobus bilet rezervasyonuna hos geldiniz.\nBilet alabilmek icin kisisel bilgilerinizi sisteme girmeniz gerekmektedir." << endl;
    cout << "Isim: "; getline(cin, isim);
    cout << "Soyisim: "; getline(cin, soyisim);
    cout << "Yas: "; cin >> yas; cin.ignore();
    cout << "TC: "; getline(cin, tc);
    cout << "Telefon No: "; getline(cin, telNo);
    cout << "Bakiye: "; cin >> bakiye;

    YolcuBilgisi yolcu(isim, soyisim, yas, tc, telNo, bakiye);

    while (true) {
        cout << "\n1: Bilet Al\n2: Bilgileri Guncelle\n3: Bilgileri Goruntule\n4: Cikis\nSecim: ";
        cin >> secim;

        if (secim == 1) {
            cout << "Rota Sec: " << endl;
            cout << "1) Istanbul-Izmir\n2) Bursa-Trabzon\n3) Eskisehir-Samsun\n4) Izmir-Bodrum\n5)Istanbul-Antalya\n6) Ankara-Kayseri\n7) Istanbul-Sakarya\n8) Izmir-Mugla\n9) Ankara-Bursa\n10) Antalya-Konya" << endl;
            int rotaSecim;
            cin >> rotaSecim;
            biletAl(bilet, detay, rotaSecim, yolcu);
        }
        else if (secim == 2) {
            Guncelleme::yolcuBilgileriniGuncelle(yolcu);
        }
        else if (secim == 3) {
            yolcu.bilgileriYazdir();
        }
        else if (secim == 4) {
            cout << "Cikis yapiliyor.\n";
            break;
        }
        else {
            cout << "Gecersiz secim.\n";
        }
    }

    return 0;
}
