#include <iostream>
using namespace std;

int main()
{
    typedef int matriks [3] [2];
    matriks A, B, C;
    int j, k;

    //Nilai pada elemen A
    cout << "Matriks A : " << endl;
    for (j=0; j<3; j++)
    {
        for (k=0; k<2; k++)
    {
        cout<< "A ["<< j <<"] ["<< k <<"] = "; // menghasilkan hasil inputan matriks
            cin >> A [j] [k]; // inputan dari matiks A
    }
    }
    cout << endl;

    //Nilai pada elemen B
    cout << "Matriks B : " << endl;
    for (j=0; j<3; j++)
    {
        for (k=0; k<2; k++)
        {
            cout << "B ["<< j << "] [" << k << "] = ";
                cin >> B [j] [k];
        }
    }
    cout << endl;

    cout << endl;

    //proses penjumlah A dan B
    for (j=0; k<3; k++)
    {
        for (k=0; k<2; k++)
        {
            C [j] [k] = A[j] [k] + B[j] [k];
        }
    }

//menampilkan hasil penjumlahan
cout << "Hasil Penjumlahan Matriks :" << endl;
for (j=0; j <3; j++)
{
    for (k=0; k <2; k++)
    {
        cout << " C ["<<j<<"] ["<<k<<"] = " << C [j] [k] << endl;
    }
}
cout << endl;

return 0;
}
