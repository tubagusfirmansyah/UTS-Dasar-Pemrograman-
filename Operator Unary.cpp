#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Masukan Nilai x : ";
    cin >> x;
    cout << "\n";

    x = (x < 0) ? -x : x;
    cout << "| x | = " << x;
    cout << "\n \n";


    return 0;

}

