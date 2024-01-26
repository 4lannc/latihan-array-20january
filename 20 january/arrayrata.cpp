#include <iostream>

int main() {
    int nilai[] = {75, 80, 100, 86, 90, 65, 85};
    int jumlahNilai = sizeof(nilai) / sizeof(nilai[0]);
    int totalNilai = 0;

    for (int i = 0; i < jumlahNilai; ++i) {
        totalNilai += nilai[i];
    }

    int rataRata = totalNilai / jumlahNilai;

    printf("Rata-rata dari nilai dalam array: %d\n", rataRata);

    return 0;
}
