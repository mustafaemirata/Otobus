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
    string bini�Yeri;
    string ini�Yeri;
    double biletFiyati;
    string seferSaati;
    string s�re;

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
        default: cout << "Ge�ersiz se�im!\n"; break;
        }
    }

    void istanbulIzmir()
    {
        otobusSirketi = "Metro Turizm";
        otobusMarka = "Temsa";
        otobusKapasite = 40;
        otobusDoluluk = 37;
        bini�Yeri = "Istanbul";
        ini�Yeri = "Izmir";
        biletFiyati = 850.0;
        seferSaati = "10:00";
        s�re = "8 saat";

        cout << "Guzergah: " << bini�Yeri << " - " << ini�Yeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << s�re << endl;
        bilgiler.ist_izmir();

    }

    void BursaTrabzon()
    {
        otobusSirketi = "Metro Turizm";
        otobusMarka = "Temsa";
        bini�Yeri = "Bursa";
        ini�Yeri = "Trabzon";
        biletFiyati = 1150.0;
        seferSaati = "12:00";
        s�re = "12 saat";

        cout << "Guzergah: " << bini�Yeri << " - " << ini�Yeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << s�re << endl;
        bilgiler.bursa_trabzon();
        cout << "Bilet almak icin :2 " << endl;

    }

    void eskisehirSamsun()
    {
        otobusSirketi = "Metro Turizm";
        otobusMarka = "Temsa";
        bini�Yeri = "Eskisehir";
        ini�Yeri = "Konya";
        biletFiyati = 700.0;
        seferSaati = "14:00";
        s�re = "7 saat";

        cout << "Guzergah: " << bini�Yeri << " - " << ini�Yeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << s�re << endl;
        bilgiler.eskisehir_samsun();
        cout << "Bilet almak icin :3 " << endl;

    }

    void izmirBodrum()
    {
        otobusSirketi = "Soylu Turizm";
        otobusMarka = "Mercedes";
        bini�Yeri = "Izmir";
        ini�Yeri = "Bodrum";
        biletFiyati = 350.0;
        seferSaati = "16:00";
        s�re = "2 saat";

        cout << "Guzergah: " << bini�Yeri << " - " << ini�Yeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << s�re << endl;
        bilgiler.izmir_bodrum();
        cout << "Bilet almak icin :4 " << endl;
    }

    void istanbulAntalya()
    {
        otobusSirketi = "Kamil Koc";
        otobusMarka = "Temsa";
        bini�Yeri = "Istanbul";
        ini�Yeri = "Antalya";
        biletFiyati = 850.0;
        seferSaati = "09:30";
        s�re = "9 saat";

        cout << "Guzergah: " << bini�Yeri << " - " << ini�Yeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << s�re << endl;
        bilgiler.istanbul_antalya();
        cout << "Bilet almak icin :5 " << endl;
    }

    void ankaraKayseri()
    {
        otobusSirketi = "Pamukkale";
        otobusMarka = "Temsa";
        bini�Yeri = "Ankara";
        ini�Yeri = "Kayseri";
        biletFiyati = 300.0;
        seferSaati = "15:30";
        s�re = "4 saat";

        cout << "Guzergah: " << bini�Yeri << " - " << ini�Yeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << s�re << endl;
        bilgiler.ankara_kayseri();

    }

    void istanbulSakarya()
    {
        otobusSirketi = "Ozlem Seyahat";
        otobusMarka = "Temsa";
        bini�Yeri = "Istanbul";
        ini�Yeri = "Sakarya";
        biletFiyati = 270.0;
        seferSaati = "17:00";
        s�re = "2 saat";

        cout << "Guzergah: " << bini�Yeri << " - " << ini�Yeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << s�re << endl;
        bilgiler.istanbul_sakarya();
        cout << "Bilet almak icin :7 " << endl;
    }

    void izmirMugla()
    {
        otobusSirketi = "Kemalpasa Turizm";
        otobusMarka = "Temsa";
        bini�Yeri = "Izmir";
        ini�Yeri = "Mugla";
        biletFiyati = 480.0;
        seferSaati = "18:30";
        s�re = "3 saat";

        cout << "Guzergah: " << bini�Yeri << " - " << ini�Yeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << s�re << endl;
        bilgiler.izmir_mugla();
        cout << "Bilet almak icin :8 " << endl;
    }

    void ankaraBursa()
    {
        otobusSirketi = "Inegol Seyahat";
        otobusMarka = "Temsa";
        bini�Yeri = "Ankara";
        ini�Yeri = "Bursa";
        biletFiyati = 520.0;
        seferSaati = "19:00";
        s�re = "5 saat";

        cout << "Guzergah: " << bini�Yeri << " - " << ini�Yeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << s�re << endl;
        bilgiler.ankara_bursa();
        cout << "Bilet almak icin :9 " << endl;
    }

    void antalyaKonya()
    {
        otobusSirketi = "Alanya Seyahat";
        otobusMarka = "Temsa";
        bini�Yeri = "Antalya";
        ini�Yeri = "Konya";
        biletFiyati = 850.0;
        seferSaati = "20:00";
        s�re = "4.5 saat";

        cout << "Guzergah: " << bini�Yeri << " - " << ini�Yeri << endl;
        cout << "Bilet Fiyati: " << biletFiyati << " TL" << endl;
        cout << "Sefer Saati: " << seferSaati << endl;
        cout << "Sure: " << s�re << endl;
        bilgiler.antalya_konya();
        cout << "Bilet almak icin :10 " << endl;
    }
};
