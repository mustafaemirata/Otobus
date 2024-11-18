#pragma once
#include <iostream>
#include <string>
#include "otobusBilgisi.h" 
using namespace std;

class otobusBiletleri: public otobusBilgisi
{
    otobusBilgisi bilgiler;
private:
    string otobusSirketi;
    string otobusMarka;
    int otobusKapasite;
    int otobusDoluluk;
    string biniþYeri;
    string iniþYeri;
    double biletFiyati;
    string seferSaati;
    string süre;

public:
   


    
    void bilgiAl(int secim)
    {
        switch (secim) {
        case 1: istanbulIzmir(); break;
        case 2: BursaTrabzon(); break;
        case 3: eskisehirSamsun(); break;
        case 4: izmirBodrum(); break;
        case 5: istanbulAntalya(); break;
        case 6: ankaraKayseri(); break;
        case 7: istanbulSakarya(); break;
        case 8: izmirMugla(); break;
        case 9: ankaraBursa(); break;
        case 10: antalyaKonya(); break;
        default: cout << "Geçersiz seçim!\n"; break;
        }
    }

    void istanbulIzmir()
    {
        otobusSirketi = "Metro Turizm";
        otobusMarka = "Temsa";
        otobusKapasite = 40;
        otobusDoluluk = 37;
        biniþYeri = "Istanbul";
        iniþYeri = "Izmir";
        biletFiyati = 850.0;
        seferSaati = "10:00";
        süre = "8 saat";

        cout << "Guzergah: " << biniþYeri << " - " << iniþYeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << süre << endl;
        bilgiler.ist_izmir();

    }

    void BursaTrabzon()
    {
        otobusSirketi = "Metro Turizm";
        otobusMarka = "Temsa";
        biniþYeri = "Bursa";
        iniþYeri = "Trabzon";
        biletFiyati = 1150.0;
        seferSaati = "12:00";
        süre = "12 saat";

        cout << "Guzergah: " << biniþYeri << " - " << iniþYeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << süre << endl;
        bilgiler.bursa_trabzon();
        cout << "Bilet almak icin :2 " << endl;

    }

    void eskisehirSamsun()
    {
        otobusSirketi = "Metro Turizm";
        otobusMarka = "Temsa";
        biniþYeri = "Eskisehir";
        iniþYeri = "Konya";
        biletFiyati = 700.0;
        seferSaati = "14:00";
        süre = "7 saat";

        cout << "Guzergah: " << biniþYeri << " - " << iniþYeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << süre << endl;
        bilgiler.eskisehir_samsun();
        cout << "Bilet almak icin :3 " << endl;

    }

    void izmirBodrum()
    {
        otobusSirketi = "Soylu Turizm";
        otobusMarka = "Mercedes";
        biniþYeri = "Izmir";
        iniþYeri = "Bodrum";
        biletFiyati = 350.0;
        seferSaati = "16:00";
        süre = "2 saat";

        cout << "Guzergah: " << biniþYeri << " - " << iniþYeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << süre << endl;
        bilgiler.izmir_bodrum();
        cout << "Bilet almak icin :4 " << endl;
    }

    void istanbulAntalya()
    {
        otobusSirketi = "Kamil Koc";
        otobusMarka = "Temsa";
        biniþYeri = "Istanbul";
        iniþYeri = "Antalya";
        biletFiyati = 850.0;
        seferSaati = "09:30";
        süre = "9 saat";

        cout << "Guzergah: " << biniþYeri << " - " << iniþYeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << süre << endl;
        bilgiler.istanbul_antalya();
        cout << "Bilet almak icin :5 " << endl;
    }

    void ankaraKayseri()
    {
        otobusSirketi = "Pamukkale";
        otobusMarka = "Temsa";
        biniþYeri = "Ankara";
        iniþYeri = "Kayseri";
        biletFiyati = 300.0;
        seferSaati = "15:30";
        süre = "4 saat";

        cout << "Guzergah: " << biniþYeri << " - " << iniþYeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << süre << endl;
        bilgiler.ankara_kayseri();

    }

    void istanbulSakarya()
    {
        otobusSirketi = "Ozlem Seyahat";
        otobusMarka = "Temsa";
        biniþYeri = "Istanbul";
        iniþYeri = "Sakarya";
        biletFiyati = 270.0;
        seferSaati = "17:00";
        süre = "2 saat";

        cout << "Guzergah: " << biniþYeri << " - " << iniþYeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << süre << endl;
        bilgiler.istanbul_sakarya();
        cout << "Bilet almak icin :7 " << endl;
    }

    void izmirMugla()
    {
        otobusSirketi = "Kemalpasa Turizm";
        otobusMarka = "Temsa";
        biniþYeri = "Izmir";
        iniþYeri = "Mugla";
        biletFiyati = 480.0;
        seferSaati = "18:30";
        süre = "3 saat";

        cout << "Guzergah: " << biniþYeri << " - " << iniþYeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << süre << endl;
        bilgiler.izmir_mugla();
        cout << "Bilet almak icin :8 " << endl;
    }

    void ankaraBursa()
    {
        otobusSirketi = "Inegol Seyahat";
        otobusMarka = "Temsa";
        biniþYeri = "Ankara";
        iniþYeri = "Bursa";
        biletFiyati = 520.0;
        seferSaati = "19:00";
        süre = "5 saat";

        cout << "Guzergah: " << biniþYeri << " - " << iniþYeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << süre << endl;
        bilgiler.ankara_bursa();
        cout << "Bilet almak icin :9 " << endl;
    }

    void antalyaKonya()
    {
        otobusSirketi = "Alanya Seyahat";
        otobusMarka = "Temsa";
        biniþYeri = "Antalya";
        iniþYeri = "Konya";
        biletFiyati = 850.0;
        seferSaati = "20:00";
        süre = "4.5 saat";

        cout << "Guzergah: " << biniþYeri << " - " << iniþYeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << süre << endl;
        bilgiler.antalya_konya();
        cout << "Bilet almak icin :10 " << endl;
    }
};
