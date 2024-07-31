#include <iostream>
using namespace std;

void cetakdata(string nama, string nisn, string jurusan, int tinggibadan) {
    cout << "Nama: " << nama << endl;
    cout << "NISN: " << nisn << endl;
    cout << "Jurusan: " << jurusan << endl;
    cout << "Tinggi Badan: " << tinggibadan << endl;
}

int main() {
    string nama = "Ananda Gusti Sultan";
    string nisn = "0086892276";
    string jurusan = "PPLG";
    int tinggibadan = 170;
    
    cetakdata(nama, nisn, jurusan, tinggibadan);
    
    return 0;
}
