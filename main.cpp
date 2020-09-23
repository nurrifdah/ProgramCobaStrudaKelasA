#include <iostream>

using namespace std;

void LuasPersegiPanjang()
{
  int lebar,panjang;

  cout << "  Menghitung Luas Persegi Panjang/n";
  cout << "------------------------------------/n"
  cout << "Masukkan Panjang : "; cin >> panjang;
  cout << "Masukkan Lebar   : "; cin >> lebar;

  cout << "Luas Persegi Panjang = " << panjang*lebar;
}

int main()
{
  LuasPersegiPanjang();
  return 0;
}