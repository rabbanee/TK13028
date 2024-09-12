#include <iostream>
using namespace std;




int rataRata(int a1, int a2, int a3) {
  return (a1 + a2 + a3) / 3;
}


int penambahan(int a1, int a2) {
  return a1 + a2;
}


int faktorial(int a1) {
  int i, fak = 1;

  for (i = a1; i >= 1; i--) {
    fak = fak * i;
  }
  return fak;
}

int main() {
  string username, password;
  int choice;
  int angka, angka2, angka3;

  cout << "Masukkan username: ";
  cin >> username;

  cout << "Masukkan password: ";
  cin >> password;

  if (username == "Daffa" && password == "Launch123") {
    cout << "Selamat datang Daffa" << endl;
  } else {
    cout << "Username atau password salah" << endl;
    return 0;
  }


  cout << "Pilih menu: faktorial/penambahan/rata-rata(1/2/3) ";
  cin >> choice;
  if (choice == 1) {
    cout << "Masukkan angka: ";
    cin >> angka;
    cout << "Hasil faktorial: " << faktorial(angka) << endl;
  } else if (choice == 2) {
    cout << "Masukkan angka pertama: " ;
    cin >> angka;
    cout << "Masukkan angka kedua: " ;
    cin >> angka2;
    cout << "Hasil penambahan: " << penambahan(angka, angka2) << endl;
  } else if (choice == 3) {
    cout << "Masukkan angka: ";
    cin >> angka;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Masukkan angka ketiga: ";
    cin >> angka3;
    cout << "Hasil rata-rata: " << rataRata(angka, angka2, angka3) << endl;
  } else {
    cout << "Pilihan tidak ditemukan" << endl;
    return 0;
  }

  cout << "Terima kasih telah menggunakan aplikasi ini!" << endl;
  return 0;
}
