#include <conio.h>
#include <iostream>
#include <cstdlib>
#define gopro 50000
#define iaomi  60000
#define dsrlcanond 85000
#define dslr 110000
#define canoneos 100000
#define canoneosd 80000
#define nikon 85000
#define nikond 125000
#define diskon 0.1
using namespace std;
main(){
int kamera,hri,total,disc,bayar;

char nomor[13];
char lagi;
do{
string nama, alamat;
system("cls");
cout<<"                        Program Rental Kamera                           "<<endl;
cout<<"          |============================================|                "<<endl;
cout<<"          |  Selamat Datang di Rental Kamera Irsyanah  |                "<<endl;
cout<<"          |          Dapatkan diskon 10%               |                "<<endl;
cout<<"          |Dengan Menyewa lebih dari sama dengan 5 hari|                "<<endl;
cout<<"          |============================================|                "<<endl<<endl;
cout<<"[1] Gopro                              || biaya sewa Rp.50000/hari  ||"<<endl;
cout<<"[2] Xiaomi Yi Cam                      || biaya sewa Rp.60000/hari  ||"<<endl;
cout<<"[3] DSLR CANON 1000D + Lensa 18-55mm   || biaya sewa Rp.85000/hari  ||"<<endl;
cout<<"[4] DSLR CANON 500D + Lensa 18-55mm    || biaya sewa Rp.110000/hari ||"<<endl;
cout<<"[5] CANON EOS 1100D + LENSA18-55mm     || biaya sewa Rp.100000/hari ||"<<endl;
cout<<"[6] CANON EOS 450D + LENSA18-55mm      || biaya sewa Rp.80000/hari  ||"<<endl;
cout<<"[7] DSLR NIKON D3000+ Lensa 18-55mm    || biaya sewa Rp.85000/hari  ||"<<endl;
cout<<"[8] DSLR NIKON D80 + Lensa 18-55mm     || biaya sewa Rp.125000/hari ||"<<endl;


cout<<"------------------------Identitas Perental Kamera---------------------"<<endl;
cout<<"Masukan Nama Anda                 : "; cin>>nama;
cout<<"Masukan Alamat Anda               : "; cin>>alamat;
cout<<"Masukan Nomor HP Anda             : "; cin>>nomor;
cout<<"----------------------------------------------------------------------"<<endl;
atas:
cout<<"Pilih kamera yang ingin dipinjam [1-8] : "; cin>>kamera;

switch(kamera){
            
 case 1 :
    cout<<"\nBerapa hari anda ingin merental kamera? : ";cin>>hri;
      if(hri>=5){
       disc=hri*gopro*diskon;
         total=(hri*gopro)-disc;
      }
      else{
       total=hri*gopro;
      }
     
      cout<<"|====================================================================|"<<endl;
      cout<<"        Anda Telah Merental Kamera GoPro Selama   : "<<hri<<" hari"<<endl;
      cout<<"        Total yang harus anda bayar               : Rp. "<<total<<endl;
      cout<<"        Masukan jumlah uang yang anda bayarkan    : Rp. "; cin>>bayar;      
      cout<<"        Total kembalian anda                      : Rp. "<<bayar-total<<endl;
      cout<<"|====================================================================|"<<endl;
      cout<<"|*****Terima kasih atas kunjungan anda di Rental Kamera Irsyanah*****|"<<endl;
      cout<<"|***** Jangan Lupa Untuk Mengembalikan Kamera Dengan Tepat Waktu*****|"<<endl;
      cout<<"|====================================================================|"<<endl;
   break;
   case 2 :
    cout<<"\nBerapa hari anda ingin merental kamera? : ";cin>>hri;
      if(hri>=5){
       disc=hri*iaomi*diskon;
         total=(hri*iaomi)-disc;
      }
      else{
       total=hri*iaomi;
      }
      cout<<"|====================================================================|"<<endl;
      cout<<"        Anda Telah Merental Xiaomi Yi Cam selama: "<<hri<<" hari"<<endl;
      cout<<"        Total yang harus anda bayar             : Rp. "<<total<<"      "<<endl;
      cout<<"        Masukan jumlah uang yang anda bayarkan  : Rp. "; cin>>bayar;      
      cout<<"        Total kembalian anda                    : Rp. "<<bayar-total<<endl;
      cout<<"|====================================================================|"<<endl;
      cout<<"|*****Terima kasih atas kunjungan anda di Rental Kamera Irsyanah*****|"<<endl;
      cout<<"|***** Jangan Lupa Untuk Mengembalikan Kamera Dengan Tepat Waktu*****|"<<endl;
      cout<<"|====================================================================|"<<endl;
   
   break;
   case 3 :
    cout<<"\nBerapa hari anda ingin merental kamera? : ";cin>>hri;
      if(hri>=5){
       disc=hri*dsrlcanond*diskon;
         total=(hri*dsrlcanond)-disc;
      }
      else{
       total=hri*dsrlcanond;
      }
      cout<<"|====================================================================|"<<endl;
      cout<<"        Anda Telah Merental DSLR CANON 1000D selama : "<<hri<<" hari"<<endl;
      cout<<"        Total yang harus anda bayar                 : Rp. "<<total<<endl;
      cout<<"        Masukan jumlah uang yang anda bayarkan      : Rp. "; cin>>bayar;      
      cout<<"        Total kembalian anda                        : Rp. "<<bayar-total<<endl;
      cout<<"|====================================================================|"<<endl;
      cout<<"|*****Terima kasih atas kunjungan anda di Rental Kamera Irsyanah*****|"<<endl;
      cout<<"|***** Jangan Lupa Untuk Mengembalikan Kamera Dengan Tepat Waktu*****|"<<endl;
      cout<<"|====================================================================|"<<endl;
      break;
   case 4 :
    cout<<"\nBerapa hari anda ingin merental kamera? :";cin>>hri;
      if(hri>=5){
       disc=hri*dslr*diskon;
         total=(hri*dslr)-disc;
      }
      else{
       total=hri*dslr;
      }
      cout<<"|====================================================================|"<<endl;
      cout<<"      Anda Telah Meminjam DSLR CANON 500D + Lensa 18-55mmselama : "<<hri<<"  hari    |"<<endl;
      cout<<"      Total yang harus anda bayar                               : Rp. "<<total<<"      "<<endl;
      cout<<"      Masukan jumlah uang yang anda bayarkan                    : Rp. "; cin>>bayar;      
      cout<<"      Total kembalian anda                                      : Rp. "<<bayar-total<<" "<<endl;
      cout<<"|====================================================================|"<<endl;
      cout<<"|*****Terima kasih atas kunjungan anda di Rental Kamera Irsyanah*****|"<<endl;
      cout<<"|***** Jangan Lupa Untuk Mengembalikan Kamera Dengan Tepat Waktu*****|"<<endl;
      cout<<"|====================================================================|"<<endl;
       break;
       break;
   case 5 :
    cout<<"\nBerapa hari anda ingin merental kamera? :";cin>>hri;
      if(hri>=5){
       disc=hri*canoneos*diskon;
         total=(hri*canoneos)-disc;
      }
      else{
       total=hri*canoneos;
      }
      cout<<"|====================================================================|"<<endl;
      cout<<"      Anda Telah Meminjam CANON EOS 1100D + LENSA18-55mm selama : "<<hri<<"  hari    |"<<endl;
      cout<<"      Total yang harus anda bayar                               : Rp. "<<total<<"      "<<endl;
      cout<<"      Masukan jumlah uang yang anda bayarkan                    : Rp. "; cin>>bayar;      
      cout<<"      Total kembalian anda                                      : Rp. "<<bayar-total<<" "<<endl;
      cout<<"|====================================================================|"<<endl;
      cout<<"|*****Terima kasih atas kunjungan anda di Rental Kamera Irsyanah*****|"<<endl;
      cout<<"|***** Jangan Lupa Untuk Mengembalikan Kamera Dengan Tepat Waktu*****|"<<endl;
      cout<<"|====================================================================|"<<endl;
       break;
   case 6 :
    cout<<"\nBerapa hari anda ingin merental kamera? : ";cin>>hri;
      if(hri>=5){
       disc=hri*canoneosd*diskon;
         total=(hri*canoneosd)-disc;
      }
      else{
       total=hri*canoneosd;
      }
      cout<<"|====================================================================|"<<endl;
      cout<<"      Anda Telah Merental CANON EOS 450D + LENSA18-55mm         : "<<hri<<"hari"<<endl;
      cout<<"      Total yang harus anda bayar                               : Rp. "<<total<<endl;
      cout<<"      Masukan jumlah uang yang anda bayarkan                    : Rp. "; cin>>bayar;      
      cout<<"      Total kembalian anda                                      : Rp. "<<bayar-total<<" "<<endl;
      cout<<"|====================================================================|"<<endl;
      cout<<"|*****Terima kasih atas kunjungan anda di Rental Kamera Irsyanah*****|"<<endl;
      cout<<"|***** Jangan Lupa Untuk Mengembalikan Kamera Dengan Tepat Waktu*****|"<<endl;
      cout<<"|====================================================================|"<<endl;
       break;
   case 7 :
    cout<<"\nBerapa lama anda ingin merental kamera? : ";cin>>hri;
      if(hri>=5){
       disc=hri*nikon*diskon;
         total=(hri*nikon)-disc;
      }
      else{
       total=hri*nikon;
      }

   
      cout<<"|====================================================================|"<<endl;
      cout<<"      Anda Telah Merental  KAMERA DSLR NIKON D3000 selama  : "<<hri<<"  hari"<<endl;
      cout<<"      Total yang harus anda bayar                          : Rp. "<<total<<endl;
      cout<<"      Masukan jumlah uang yang anda bayarkan               : Rp. "; cin>>bayar;      
      cout<<"      Total kembalian anda                                 : Rp. "<<bayar-total<<" "<<endl;
      cout<<"|====================================================================|"<<endl;
      cout<<"|*****Terima kasih atas kunjungan anda di Rental Kamera Irsyanah*****|"<<endl;
      cout<<"|***** Jangan Lupa Untuk Mengembalikan Kamera Dengan Tepat Waktu*****|"<<endl;
      cout<<"|====================================================================|"<<endl;
   break;
     break;
   case 8 :
    cout<<"\nBerapa lama anda ingin merental kamera? : ";cin>>hri;
      if(hri>=5){
       disc=hri*nikond*diskon;
         total=(hri*nikond)-disc;
      }
      else{
       total=hri*nikond;
      }
      cout<<"|====================================================================|"<<endl;
      cout<<"      Anda Telah Merental  KAMERA DSLR NIKON D80 selama    : "<<hri<<"  hari"<<endl;
      cout<<"      Total yang harus anda bayar                          : Rp. "<<total<<endl;
      cout<<"      Masukan jumlah uang yang anda bayarkan               : Rp. "; cin>>bayar;      
      cout<<"      Total kembalian anda                                 : Rp. "<<bayar-total<<" "<<endl;
      cout<<"|====================================================================|"<<endl;
      cout<<"|*****Terima kasih atas kunjungan anda di Rental Kamera Irsyanah*****|"<<endl;
      cout<<"|***** Jangan Lupa Untuk Mengembalikan Kamera Dengan Tepat Waktu*****|"<<endl;
      cout<<"|====================================================================|"<<endl;
   break;
   default:
   cout<<"Pilihan yang Anda inputkan tidak terdaftar "<<endl;
   cout<<"Silakan inputkan ulang!. Terima kasih";
   cout<<endl;
   goto atas;

   break;

}
   cout<<"Apakah Anda Ingin Mengulang Lagi Dari Awal? [Y/T] = ";
   cin>>lagi;
     
      }
        while(lagi=='y'|| lagi=='Y');
getch();
}
