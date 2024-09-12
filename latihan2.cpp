#include <iostream>

using namespace std;

int main() {
  int point;
  int lulus = 0;
  int tidakLulus = 0;
  int perbaikan = 0;
  string konfirmasi;

  cout << "Apakah Anda ingin memasukkan nilai?:" << endl;
  cin >> konfirmasi;

  while ((konfirmasi == "yes") || (konfirmasi == "ya")) {
    cout << "Masukkan nilai: "<< endl;
    cin >> point;
    if (point >= 70) {
      lulus = lulus + 1;
    }

    if (point >= 50 && point < 70) {
      tidakLulus = tidakLulus + 1;
    }

    if (point < 50) {
      perbaikan = perbaikan + 1;
    }

    cout << "Apakah Anda ingin memasukkan nilai lagi? (yes/no) : " << endl;
    cin >> konfirmasi;
    if (konfirmasi == "no")  {
      break;
    }
  }

  cout << "Jumlah lulus: " << lulus << endl;
  cout << "Jumlah tidak lulus: " << tidakLulus << endl;
  cout << "Jumlah perbaikan: " << perbaikan << endl;
}
