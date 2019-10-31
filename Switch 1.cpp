#include <iostream>
using namespace std;

int main()
{
    int pilihan;

    cout << "Staf Pengajar Pemrograman C++:" << endl;
    cout << "=====================================" << endl;
    cout << "1. Tubagus Firmansyah       \n" << endl;
    cout << "2. Dani Nugraha            \n" << endl;
    cout << "3. Sunandar               \n" << endl;
    cout << "4. Haldi Budiman             \n" << endl;
    cout << "5. Saep                   \n" << endl;
    cout << "6. Rasyidan                \n" << endl;
    cout << "7. Ramdhani               \n" << endl;
    cout << "8. Zainuddin              \n" << endl;
    cout << "9. Rais Fathony           \n" << endl;
    cout << "10.Nur Alamsyah            \n" << endl;

    cout << "Staf Pengajar Pemrograman C++:";
    cin >> pilihan;
    cout << endl;


    switch(pilihan)

    {
    case 1:
        cout << "Pilihan Anda Benar|\n" << endl;
        break;
    case 2:
        cout << "Pilihan Anda Benar\n" << endl;
        break;
    case 3:
        cout << "Pilihan Anda Salah\n" << endl;
        break;
    case 4:
        cout << "Pilihan Anda Salah\n" << endl;
        break;
    case 5:
        cout << "Pilihan Anda Benar\n" << endl;
        break;
    case 6:
        cout << "Pilihan Anda Salah\n" << endl;
        break;
    case 7:
        cout << "Pilihan Anda Benar\n" << endl;
        break;
    case 8:
        cout << "Pilihan Anda Benar\n" << endl;
        break;
    case 9:
        cout << "Pilihan Anda Salah\n" << endl;
        break;
    case 10:
        cout << "Pilihan Anda Benar|\n" << endl;
        break;
    default:
        cout << "Pilihan anda tidak  ada dalam daftar \n \n";
    }
    return 0;
}
