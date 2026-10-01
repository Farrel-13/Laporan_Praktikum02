#include <iostream>
using namespace std;

int minimum(int arr[], int jumlah) {
    int minimum = arr[0];

    for (int i = 1; i < jumlah; i++) {
        if (arr[i] < minimum)
            minimum = arr[i];
    }

    return minimum;
}

int maksimum(int arr[], int jumlah) {
    int maksimum = arr[0];

    for (int i = 1; i < jumlah; i++) {
        if (arr[i] > maksimum)
            maksimum = arr[i];
    }

    return maksimum;
}

void ratarata(int arr[], int jumlah) {
    int total = 0;

    for (int i = 0; i < jumlah; i++)
        total += arr[i];

    cout << "Nilai rata-rata = " << (float)total / jumlah << endl;
}

int main() {
    int arrA[10] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};
    int pilihan;

    do {
        cout << "\n--- Menu Program Array ---\n";
        cout << "1. Tampilkan isi array\n";
        cout << "2. Cari nilai maksimum\n";
        cout << "3. Cari nilai minimum\n";
        cout << "4. Hitung nilai rata-rata\n";
        cout << "5. Tampilkan semua informasi\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Isi array: ";
                for (int i = 0; i < 10; i++)
                    cout << arrA[i] << " ";
                cout << endl;
                break;

            case 2:
                cout << "Nilai maksimum = "
                     << maksimum(arrA, 10) << endl;
                break;

            case 3:
                cout << "Nilai minimum = "
                     << minimum(arrA, 10) << endl;
                break;

            case 4:
                ratarata(arrA, 10);
                break;

            case 5:
                cout << "Isi array: ";
                for (int i = 0; i < 10; i++)
                    cout << arrA[i] << " ";
                cout << endl;
                cout << "Nilai maksimum = " << maksimum(arrA, 10) << endl;
                cout << "Nilai minimum = " << minimum(arrA, 10) << endl;
                ratarata(arrA, 10);
                break;

            case 0:
                cout << "Program selesai." << endl;
                break;

            default:
                cout << "Pilihan tidak tersedia." << endl;
        }
    } while (pilihan != 0);

    return 0;
}