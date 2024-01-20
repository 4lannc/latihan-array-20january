#include <iostream>

int main() {
    int nilai[] = {75, 80, 86, 90, 65, 85};
    int jumlahNilai = sizeof(nilai) / sizeof(nilai[0]);
    int totalNilai = 0;

    for (int i = 0; i < jumlahNilai; ++i) {
        totalNilai += nilai[i];
    }

    double rataRata = static_cast<double>(totalNilai) / jumlahNilai;

    std::cout << "Rata-rata dari nilai dalam array: " << rataRata << std::endl;

    return 0;
}
