# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Kedua)</h1>

<p align="center">Muhammad Farrel Argiyanto - 109082500018</p>

## Dasar Teori

Bahasa C++ merupakan salah satu bahasa pemrograman yang dapat digunakan untuk membuat berbagai jenis program. Dalam pembelajaran pemrograman dasar, C++ digunakan untuk memahami konsep dan struktur dasar pemrograman sebelum mempelajari konsep yang lebih kompleks. Materi dasar C++ meliputi struktur program, variabel, tipe data, operator, input dan output, percabangan, perulangan, array, serta fungsi. Konsep-konsep tersebut menjadi dasar dalam membuat program yang dapat menerima masukan, melakukan proses, dan menghasilkan keluaran sesuai kebutuhan.

Dalam C++, variabel digunakan untuk menyimpan data yang dapat digunakan selama program berjalan. Setiap variabel memiliki tipe data tertentu, seperti `int`, `float`, `double`, dan `char`. Pengolahan data dilakukan menggunakan operator, seperti operator aritmatika, perbandingan, dan logika. Input dapat diberikan menggunakan `cin`, sedangkan hasil pemrosesan dapat ditampilkan menggunakan `cout`.

Struktur percabangan digunakan ketika program harus memilih suatu tindakan berdasarkan kondisi tertentu. Beberapa bentuk percabangan yang umum digunakan adalah `if`, `if-else`, dan `switch`. Selain percabangan, C++ menyediakan struktur perulangan seperti `for`, `while`, dan `do-while` yang digunakan untuk menjalankan suatu proses secara berulang. Penggunaan percabangan dan perulangan memungkinkan program menangani proses berdasarkan kondisi dan jumlah pengulangan yang diperlukan.

C++ juga menyediakan array sebagai struktur penyimpanan beberapa data dengan tipe yang sama. Array dapat memiliki satu dimensi maupun lebih dari satu dimensi sehingga dapat digunakan untuk menyimpan data dalam bentuk sederhana maupun tabel. Selain itu, fungsi digunakan untuk membagi program menjadi bagian-bagian tertentu berdasarkan tugasnya. Penggunaan fungsi membuat program menjadi lebih terstruktur dan dapat membantu mengurangi pengulangan kode.

Pada praktikum Modul 1, konsep-konsep dasar tersebut diterapkan melalui beberapa latihan, seperti penggunaan array satu hingga empat dimensi, variabel dan alamat memori, pointer, array karakter atau string, fungsi, parameter fungsi, serta perbedaan call by value, call by pointer, dan call by reference. Dengan penerapan tersebut, mahasiswa dapat memahami penggunaan dasar bahasa C++ melalui program-program sederhana.

## Guided

### 1. Array Satu Dimensi

```C++
#include <iostream>
using namespace std;

int main(){
    int nilai[5];

    nilai[0] = 80;
    nilai[1] = 85;
    nilai[2] = 90;
    nilai[3] = 75;
    nilai[4] = 95;

    for(int i = 0; i < 5; i++){
        cout << nilai[i] << endl;
    }

    return 0;
}
```

Program ini menggunakan array satu dimensi untuk menyimpan lima data nilai. Setiap nilai disimpan berdasarkan indeks, kemudian seluruh data ditampilkan menggunakan perulangan `for`.

### 2. Array Dua Dimensi

```C++
#include <iostream>
using namespace std;

int main(){
    int nilai[3][3] = {
        {80,85,90},
        {75,80,85},
        {90,95,100}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

Program menggunakan array dua dimensi yang memiliki tiga baris dan tiga kolom. Perulangan bersarang digunakan untuk mengakses dan menampilkan setiap data berdasarkan baris dan kolom.

### 3. Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;

int main(){
    int data[2][3][3] = {
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
        {
            {10,11,12},
            {13,14,15},
            {16,17,18}
        }
    };

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                cout << data[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```

Program menggunakan array tiga dimensi dengan ukuran `2 x 3 x 3`. Tiga perulangan digunakan untuk mengakses setiap elemen berdasarkan tiga indeks yang dimiliki array.

### 4. Array Empat Dimensi

```C++
#include <iostream>
using namespace std;

int main(){
    int data[2][2][2][2] = {
        {
            {
                {1,2},
                {3,4}
            },
            {
                {5,6},
                {7,8}
            }
        },
        {
            {
                {9,10},
                {11,12}
            },
            {
                {13,14},
                {15,16}
            }
        }
    };

    cout << data[0][0][0][0] << endl;
    cout << data[1][1][1][1] << endl;
}
```

Program menggunakan array empat dimensi dengan ukuran `2 x 2 x 2 x 2`. Data dapat diakses menggunakan empat indeks, seperti pada `data[0][0][0][0]` dan `data[1][1][1][1]`.

### 5. Variabel dan Alamat Memori

```C++
#include <iostream>
using namespace std;

int main(){
    char a;
    int j;
    char arr[6];

    arr[3] = 'b';
    a = 'u';

    cout << a << endl;
    cout << &a << endl;

    cout << j << endl;
    cout << &j << endl;

    cout << &arr[4] << endl;

    return 0;
}
```

Program menunjukkan cara melihat nilai dan alamat memori dari variabel. Operator `&` digunakan untuk mendapatkan alamat suatu variabel atau elemen array.

### 6. Pointer

```C++
#include <iostream>
using namespace std;

int main(){
    int x, y;
    int *px;

    x = 87;
    px = &x;
    y = *px;

    cout << "Alamat x = " << &x << endl;
    cout << "Isi px = " << px << endl;
    cout << "Isi x = " << x << endl;
    cout << "Nilai yang ditunjuk px = " << *px << endl;
    cout << "Isi y = " << y << endl;

    return 0;
}
```

Program menunjukkan penggunaan pointer untuk menyimpan alamat variabel `x`. `&x` digunakan untuk mendapatkan alamat, sedangkan `*px` digunakan untuk mengambil nilai yang ditunjuk oleh pointer.

### 7. Array dan Array Dua Dimensi

```C++
#include <iostream>
#define MAX 5
using namespace std;

int main() {
    int i, j;
    float nilai_total, rata_rata;
    float nilai[MAX];

    static int nilai_tahun[MAX][MAX] = {
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 0, 0, 0, 5}
    };

    for (i = 0; i < MAX; i++) {
        cout << "masukan nilai ke- " << i + 1 << endl;
        cin >> nilai[i];
    }

    cout << "\ndata nilai siswa :\n";

    for (i = 0; i < MAX; i++)
        cout << "nilai ke- " << i + 1 << "=" << nilai[i] << endl;

    cout << "\n nilai tahunan :\n";

    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++)
            cout << nilai_tahun[i][j];

        cout << "\n";
    }

    return 0;
}
```

Program menggunakan array satu dimensi untuk menerima dan menampilkan nilai siswa serta array dua dimensi untuk menyimpan data nilai tahunan. Perulangan digunakan untuk memasukkan, menampilkan, dan mengakses data array.

### 8. Array Karakter atau String

```C++
#include <iostream>
using namespace std;

int main(){
    char nama[] = "strukdat";

    cout << nama << endl;
    cout << nama[3] << endl;

    return 0;
}
```

Program menggunakan array karakter untuk menyimpan teks `"strukdat"`. Seluruh teks dapat ditampilkan dengan nama array, sedangkan karakter tertentu dapat diakses menggunakan indeks seperti `nama[3]`.

### 9. Fungsi Mencari Nilai Maksimum

```C++
#include <iostream>
using namespace std;

int maks3(int a, int b, int c);

int main() {
    int x, y, z;

    cout << "masukkan nilai bilangan ke-1 = ";
    cin >> x;
    cout << "masukkan nilai bilangan ke-2 =";
    cin >> y;
    cout << "masukkan nilai bilangan ke-3 =";
    cin >> z;

    cout << "nilai maksimumnya adalah = " << maks3(x, y, z);

    return 0;
}

int maks3(int a, int b, int c) {
    int temp_max = a;

    if (b > temp_max)
        temp_max = b;

    if (c > temp_max)
        temp_max = c;

    return (temp_max);
}
```

Program menggunakan fungsi `maks3()` untuk mencari nilai terbesar dari tiga bilangan. Nilai pertama dijadikan nilai maksimum sementara, kemudian dibandingkan dengan nilai kedua dan ketiga.

### 10. Fungsi dengan Parameter

```C++
#include <iostream>
using namespace std;

void tulis(int x);

int main() {
    int jum;

    cout << "jumlah baris kata = ";
    cin >> jum;

    tulis(jum);

    return 0;
}

void tulis(int x) {
    for (int i = 0; i < x; i++)
        cout << "baris ke-" << i + 1 << endl;
}
```

Program menggunakan fungsi `tulis()` dengan parameter `x` untuk menentukan jumlah baris yang akan ditampilkan. Perulangan `for` digunakan untuk mencetak nomor setiap baris.

### 11. Call by Value, Pointer, dan Reference

```C++
#include <iostream>
using namespace std;

void tukarValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void tukarPointer(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void tukarReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 4, b = 6;

    tukarValue(a, b);
    cout << "Setelah Call by Value     -> a = " << a << ", b = " << b << " (Tetap)" << endl;

    tukarPointer(&a, &b);
    cout << "Setelah Call by Pointer   -> a = " << a << ", b = " << b << " (Berubah!)" << endl;

    tukarReference(a, b);
    cout << "Setelah Call by Reference -> a = " << a << ", b = " << b << " (Berubah lagi!)" << endl;

    return 0;
}
```

Program membandingkan tiga cara pengiriman parameter pada fungsi. Call by Value hanya mengirim salinan nilai sehingga variabel asli tetap. Call by Pointer mengirim alamat variabel sehingga nilai asli dapat berubah. Call by Reference menggunakan referensi langsung ke variabel sehingga perubahan di dalam fungsi juga memengaruhi variabel asli.

## Unguided

### 1.Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3x3 

```C++
#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3];
    int tambah[3][3], kurang[3][3], kali[3][3];

    cout << "Masukkan matriks A:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Masukkan matriks B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tambah[i][j] = A[i][j] + B[i][j];
            kurang[i][j] = A[i][j] - B[i][j];
            kali[i][j] = 0;

            for (int k = 0; k < 3; k++) {
                kali[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nPenjumlahan:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << tambah[i][j] << " ";
        cout << endl;
    }

    cout << "\nPengurangan:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << kurang[i][j] << " ";
        cout << endl;
    }

    cout << "\nPerkalian:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << kali[i][j] << " ";
        cout << endl;
    }

    return 0;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1](https://raw.githubusercontent.com/Farrel-13/Laporan_Praktikum02/main/output01.png)

Program menggunakan dua matriks berukuran 3×3. Penjumlahan dan pengurangan dilakukan dengan menjumlahkan atau mengurangkan elemen yang memiliki posisi indeks sama. Sedangkan perkalian matriks menggunakan tiga perulangan untuk mengalikan baris matriks pertama dengan kolom matriks kedua.

### 2. Berdasarkan guided pointer dan reference sebelumnya, buatlah keduanya dapat menukar nilai dari 3 variabel 



```C++
#include <iostream>
using namespace std;

void tukerPointer(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void tukerReference(int &a, int &b, int &c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int a = 10, b = 20, c = 30;

    cout << "Sebelum ditukar: ";
    cout << a << " " << b << " " << c << endl;

    tukerPointer(&a, &b, &c);

    cout << "Setelah pointer: ";
    cout << a << " " << b << " " << c << endl;

    tukerReference(a, b, c);

    cout << "Setelah reference: ";
    cout << a << " " << b << " " << c << endl;

    return 0;
}
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2](https://raw.githubusercontent.com/Farrel-13/Laporan_Praktikum02/main/output02.png)

Program menggunakan dua fungsi untuk menukar nilai tiga variabel. tukarPointer() menerima alamat dari ketiga variabel sehingga perubahan dilakukan melalui dereference pointer. Sedangkan tukarReference() menggunakan reference sehingga fungsi dapat langsung mengubah nilai variabel yang dikirimkan. Materi modul juga menjelaskan bahwa pointer menerima alamat variabel, sedangkan reference dapat mengubah variabel secara langsung melalui parameter reference.

### 3. Diketahui sebuah array 1 dimensi sebagai berikut :  arrA = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55} Buatlah program yang dapat mencari nilai minimum, maksimum, dan rata – rata dari array tersebut! Gunakan function cariMinimum() untuk mencari nilai minimum dan function cariMaksimum() untuk mencari nilai maksimum, serta gunakan prosedur hitungRataRata() untuk menghitung nilai rata – rata! Buat program menggunakan menu switch-case seperti berikut ini : 

Contoh Tampilan:

```
--- Menu Program Array --- 
1. Tampilkan isi array 
2. cari nilai maksimum 
3. cari nilai minimum 
4. Hitung nilai rata - rata 
```

```C++
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
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3](https://raw.githubusercontent.com/Farrel-13/Laporan_Praktikum02/main/output03_1.png)

##### Output 2
![Screenshot Output Unguided 3](https://raw.githubusercontent.com/Farrel-13/Laporan_Praktikum02/main/output03_2.png)

##### Output 3
![Screenshot Output Unguided 3](https://raw.githubusercontent.com/Farrel-13/Laporan_Praktikum02/main/output03_3.png)

Program menggunakan array arrA yang berisi 10 nilai. Fungsi cariMinimum() digunakan untuk mencari nilai terkecil, sedangkan cariMaksimum() digunakan untuk mencari nilai terbesar. Perhitungan rata-rata dilakukan oleh prosedur hitungRataRata(). Menu program menggunakan switch-case sehingga pengguna dapat memilih operasi yang ingin dilakukan, yaitu menampilkan isi array, mencari nilai maksimum, mencari nilai minimum, dan menghitung nilai rata-rata. Berdasarkan data yang diberikan, nilai minimum adalah 3, nilai maksimum adalah 55, dan nilai rata-ratanya adalah 21,4. Konsep fungsi dan prosedur yang digunakan sesuai dengan materi modul karena fungsi dapat membuat program lebih terstruktur dan mengurangi pengulangan kode.

## Kesimpulan

Berdasarkan praktikum Modul 2, dapat disimpulkan bahwa bahasa C++ dapat digunakan untuk mengolah data menggunakan array, matriks, pointer, reference, fungsi, dan prosedur. Melalui latihan yang dilakukan, dapat dipahami cara melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3×3, menukar nilai beberapa variabel menggunakan pointer dan reference, serta mengolah array dengan fungsi untuk mencari nilai minimum dan maksimum dan prosedur untuk menghitung rata-rata. Penggunaan switch-case juga membantu membuat menu program sehingga pengguna dapat memilih proses yang ingin dijalankan. Dengan latihan tersebut, konsep dasar array, pointer, reference, fungsi, dan prosedur dapat diterapkan dalam program C++ secara lebih terstruktur.

## Referensi

[1] Dewi, L. J. E. (2010). Media Pembelajaran Bahasa Pemrograman C++. Jurnal Pendidikan Teknologi dan Kejuruan, 7(1). https://doi.org/10.23887/jptk-undiksha.v7i1.31