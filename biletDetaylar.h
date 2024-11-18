#pragma once
#include <iostream>
#include <string>
#include "YolcuBilgisi.h"

using namespace std;

class biletDetaylar {
private:
    string koltuklar[20][2]; 
         

public:
    biletDetaylar()
    {
        int koltukNo = 1;
        for (int i = 0; i < 20; i++)
        {
            for (int j = 0; j < 2; j++) 
            {
                koltuklar[i][j] = to_string(koltukNo); 
                koltukNo++;
            }
        }
       
    }

 

    void koltuklariGoster() const
    {
        cout << "Otobus Koltuk Durumu:\n";
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 2; j++) {
                if (koltuklar[i][j] == "Dolu")
                {
                    cout << "[Dolu]  ";
                }
                else 
                {
                    cout << "[" << koltuklar[i][j] << "]  ";
                }
            }
            cout << endl;
        }
    }


    void koltukRezerveEt(int koltukNo, YolcuBilgisi& yolcu) 
    {
        if (koltukNo < 1 || koltukNo > 40)
        {
            cout << "Gecersiz koltuk numarasi. Lutfen 1 ile 40 arasinda bir deger girin.\n";
            return;
        }

        int satir = (koltukNo - 1) / 2;
        int sutun = (koltukNo - 1) % 2;

        if (koltuklar[satir][sutun] != "Dolu")
        {  
            koltuklar[satir][sutun] = "Dolu";
            cout << "Koltuk " << koltukNo << " baþarýyla rezerve edildi.\n";
        }
        else
        {
            cout << "Koltuk " << koltukNo << " zaten dolu.\n"; 
        }
    }

};
