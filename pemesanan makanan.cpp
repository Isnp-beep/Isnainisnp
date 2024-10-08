#include <iostream>
using namespace std;
int main (){

int pilihan, pilihan_gabungan;

cout << "== Menu Pilihan ==" << endl;
cout << "1.Mie tarempa" << endl;
cout << "2.Nasi Mawut" << endl;
cout << "3.Nasi Goreng Ikan Bilis" << endl;
cout << "4.Ikan Asap Lada Garam" << endl;
cout << "#Selain itu artinya tidak suka semua!" << endl;

cout << "Silahkan memilih menu nomor berapa : " ;
cin >> pilihan ; 

if (pilihan ==1) { cout << "Mie Tarempa saja" << endl;
}
else if (pilihan ==2) { cout << "Nasi Mawut saja" << endl;}

else if (pilihan ==3) { cout << "Nasi Goreng Ikan Bilis saja" << endl;}
else if (pilihan ==4) { cout << "#Gabungkan angka pilihan jika ingin memilih lebih banyak" << endl;}
cout << "Contoh masukan angka 12,23,123" << endl;
cout << "silahkan tambahkan menu" << endl;
cin >> pilihan_gabungan;



switch (pilihan_gabungan)

{
case 12 : cout << "Mie Tarempa dan Nasi Mawut" << endl;
break;

case 23 :
cout << "Nasi Mawut dan Nasi Goreng Ikan Bilis" << endl;
break;

case 13 : cout << "Mie Tarempa dan Nasi Goreng Ikan Bilis" << endl;
break;

case 123 : cout << "Mie Tarempa+Nasi Mawut+Nasi Goreng Ikan Bilis" << endl;

cout << "Mohon bersabar pesanan anda akan segera di kirim, Terima Kasih"
<< endl ;

}
    return 0;
}