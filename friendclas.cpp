#include <iostream>
using namespace std;

class Persegipanjang
{
public: // akses modifire
    int panjang, lebar;

public:
    void input()
    {
        cout << "Masukkan panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar : ";
        cin >> lebar;
    }
};