#include <iostream>
using namespace std;

int main()
{
    int A[7];
    int j, k, C, temp;

    cout << "Masukkan nilai pada elemen array : " << endl;
    for (C=0; C<7; C++)
    {
        //menginput elemen array
        cout <<"A[" << C << "] = ";
        cin >> A[C];
    }
    cout << "\nNilai elemwnt array senbelum diurutkan : " << endl;
    for (C=0; C<7; C++)
    {
        cout << "A[" << C << "] = " << A[C] << endl;
    }

    // mengurutkan metode maksimum-minimum
    int jmaks, U=6;
    for (j=0; j<=6; j++)
    {
        jmaks = 0;
        for (k=1; k<=U; k++)
        {
            if (A[k] > A[jmaks])
            {
                jmaks =k;
            }
        }
        // penukaran Nilai Elemen Array
        temp = A[U];
        A[U] = A[jmaks];
        A [jmaks] = temp;
        U--;
    }

    cout << "\nNilai Elemen setelah diurutkan : " << endl;
     for (C=0; C<7; C++)
     {
         cout << "A[" << C << "] = " << A[C] << endl;
     }
     return 0;
}
