#include <iostream>
using namespace std;

int main()
{
    cout << "Nama : Tubagus Firmansyah Hidayat " << endl;
    cout << "NIM  : a2.1900182 " << endl << endl;

    int A [2] [4] = {1,2,3,4,5,6,7,8};

    int i,j;

    cout << "Aplikasi Matriks Ordo 2 x 4" << endl;
    for (i=0; i<2; i++)
    {
        for (j=0; j<4; j++)
        {
            //menampilkan hasil dari indeks i dan j
            cout << "A [" << i << "] [" << j << "] = " << A [i] [j] <<endl;
        }
        cout << endl;
        }

        return 0;
}
