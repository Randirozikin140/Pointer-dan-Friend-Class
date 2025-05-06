#include <iostream>
#include <string>
using namespace std;
class Mahasiswa
{
 private:
    string nama;
public:
    friend void serNama(mahasiswa &a, string);
};

void setNama(Mahasiswa &a, string b)
{
    a.nama = b;
    cout << a.nama;
}

int main(){
    mahasiswa joko;
    setNama()
}
