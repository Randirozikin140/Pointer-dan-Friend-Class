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

    int luas(int a, int b)
    {
        return a * b;
    }
    // lingkaran ol;
};

class Lingkaran
{
public:
    int jarijari;

    void input()
    {
        cout << "Masukkan jari-jari : ";
        cin >> jarijari;
    }

    int Luaslingkaran( int r)
    {
        return 3.14 * r * r;
    }
};

int main()
{
    Persegipanjang objekPP; //membuat objek
    Lingkaran ol;

    cout << "Masukkan panjang : ";
    cin >> objekPP.panjang;
    cout << "Masukkan lebar : ";
    cin >> objekPP.lebar;
    cout << "Luas persegi panjang : " <<
    objekPP.luasPP(objekPP.panjang, objekPP.lebar) << endl;
};