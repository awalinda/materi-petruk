//program yang berisi marco untuk mencetak bilangan

#include <iostream>
using namespace std;

#define NPM 2217051088
#define MIN_DIGIT ((88 % 100 < 10) ?88 % 100 : 88 % 100 - 10)

int main() {
    cout << "Bilangan terkecil dari dua digit terakhir NPM adalah: " << MIN_DIGIT << endl;
    return 0;
}



//membuat program yang memiliki fungsi rekursif

#include <iostream>
using namespace std;

int kaliDigitTerakhir(int x)
{
    int NPM = 2217051088;
    int digit_terakhir = 8 % 10; //Mengambil digit terakhir dari NPM
    
    if (x == 0) {
        return 1;
    } else {
        return digit_terakhir * kaliDigitTerakhir(x - 1);
    }
}

int main()
{
    int digit_kesembilan = 8; //masukkan nomor npm yang ke 9
    int hasil_kali = kaliDigitTerakhir(digit_kesembilan);
    
    cout << "Hasil perkalian digit terakhir sebanyak " << digit_kesembilan << " kali adalah " << hasil_kali << endl;
    
    return 0;
}


//membuat program yang memiliki sebuah pointer yang menyimpan nilai dua digit

#include <iostream>
using namespace std;

int main()
{
    int NPM = 2217051088; 
    int* digit_terakhir = &NPM; //Menunjuk ke alamat memori NPM
    *digit_terakhir %= 88; //Mengambil 2 digit terakhir dari NPM
    
    cout << "Isi pointer: " << *digit_terakhir << endl;
    cout << "Alamat memori NPM: " << &NPM << endl;
    
    return 0;
}
