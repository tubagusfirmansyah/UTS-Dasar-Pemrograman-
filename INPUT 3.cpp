#include <iostream>
using namespace std;
int main()
{
cout << "================================================================================\n";
cout << "Nama : Tubagus Firmansyah HIDAYAT                                               \n";
cout << "Nim  : a2.1900182                                                               \n";
cout << "Jurusan: Teknik Informatika                                                     \n";
cout << "Blog : www.tubagus23.wordpress.com                                              \n";
cout << "================================================================================\n";
cout << "            LATIHAN INPUT OUTPUT                                                \n";
cout << "********************************************************************************\n\n";
char tampilkan[1];
char nama[50], alamat[50], tl[20], jk[20], no[20], pekerjaan[30], email[30], website[30];
cout << "================================================================================\n";
cout << "            DAFTAR RIWAYAT HIDUP                                                \n";
cout << "================================================================================\n\n";
cout << "Nama :";
cin.getline(nama,50);
cout << "Alamat :";
cin.getline(alamat,50);
cout << "Tanggal Lahir :";
cin.getline(tl,20);
cout << "Jenis Kelamin :";
cin.getline(jk,20);
cout << "No Telepon/HP :";
cin.getline(jk,20);
cout << "Pekerjaan :";
cin.getline(pekerjaan,30);
cout << "Email :";
cin.getline(email,30);
cout << "Website :";
cin.getline(website,30);
cout << "Jurusan :Teknik Informatika-STMIK Sumedang";
cin.getline(tampilkan,1);
return 0;
}
