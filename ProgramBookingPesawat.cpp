#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


void drawTable(string headers [], string content[15][7]) {
   // draw the top border
  cout << "----------------------------------" << endl;
  // draw headers
  for (int i = 1; i <= 7; i++) {
    if (i == 1) {
      cout << "|" << setw(8) << headers[0] << "|";
    } else {
      cout << setw (2) << headers[i-1] << setw(2) << "|";
    }
  }
  // draw a separator
  cout << endl;
  for (int i = 1; i <= 15; i++) {
    for (int j = 1; j <= 7; j++) {
      if (j == 1) {
        cout << "|" << setw(8) << content[i-1][0] << "|";
      } else {
        cout << setw (2) << content[i-1][j-1] << setw(2) << "|";
      }
    }
    cout << endl;
  }
  cout << "----------------------------------" << endl;
}


int main() {
  // define the row and col sizes
  int rows = 15;
  int cols = 7;
  // utama, bisnis, ekonomi
  string type;
  // int
  int row;
  char col;

  // define the table headers
  string headers[] = {" " , "A", "B", "C", "D", "E", "F"};
  string content[15][7] = {
        {"Baris 1 ", "X", "X", "*", "*", "*", "*"},
        {"Baris 2 ", "*", "*", "*", "X", "X", "*"},
        {"Baris 3 ", "*", "*", "X", "X", "*", "*"},
        {"Baris 4 ", "*", "*", "X", "X", "*", "*"},
        {"Baris 5 ", "*", "*", "*", "*", "*", "*"},
        {"Baris 6 ", "*", "*", "*", "X", "X", "X"},
        {"Baris 7 ", "*", "*", "X", "*", "*", "*"},
        {"Baris 8 ", "*", "*", "X", "*", "*", "*"},
        {"Baris 9 ", "X", "X", "*", "*", "*", "X"},
        {"Baris 10", "*", "*", "*", "*", "X", "X"},
        {"Baris 11", "*", "*", "X", "X", "*", "*"},
        {"Baris 12", "*", "*", "*", "*", "*", "*"},
        {"Baris 13", "*", "*", "*", "*", "X", "X"},
        {"Baris 14", "*", "*", "*", "*", "X", "*"},
        {"Baris 15", "X", "X", "X", "*", "X", "*"}
  };


  drawTable(headers, content);

  while (true) {
    cout << "Please select your seat: " << endl;
    // input type
    cout << "Type (utama/bisnis/ekonomi): ";
    cin >> type;
    if (type != "utama" && type != "bisnis" && type != "ekonomi") {
      cout << "Salah memilih tipe! tidak sesuai kelas yang dipilih." << endl;
      return 0;
    }

    // input row
    cout << "Row (1-15): ";
    cin >> row;
    if (row < 1 || row > 15) {
      cout << "Salah memilih baris! pilih antara 1-15." << endl;
      return 0;
    }

    // input col
    cout << "Col (A-F): ";
    cin >> col;

    // check if the selected row is correct.
    if ((type == "utama" && !(row == 1 || row == 2)) || (type == "bisnis" && !(row >= 3 || row <= 5)) || (type == "ekonomi" && !(row >= 6 || row <= 15))) {
      cout << "Salah memilih kursi! tidak sesuai kelas yang dipilih." << endl;
      return 0;
    }

    // check avail seat.
    // get the index of the 'col'
    int index = 0;
    switch (toupper(col)) {
    case 'A':
      index = 1;
      break;
    case 'B':
      index = 2;
      break;
    case 'C':
      index = 3;
      break;
    case 'D':
      index = 4;
      break;
    case 'E':
      index = 5;
      break;
    case 'F':
      index = 6;
      break;
    default:
      index = 0;
      break;
    }

    string seat = content[row-1][index];
    if (seat == "X") {
      // seat is not available
      cout << "Kursi yang dipilih tidak tersedia" << endl;
      return 0;
    } else {
      // seat is available
      cout << "Kursi yang dipilih tersedia" << endl;
      content[row-1][index] = "X";
      drawTable(headers, content);
      char lanjut;
      cout << "Apakah ingin memesan kursi lain? (y/n)" << endl;
      cin >> lanjut;
      if ('n' == tolower(lanjut)) {
        cout << "Terima kasih telah menggunakan program ini" << endl;
        break;
      }
    }
  }

  return 0;
}
