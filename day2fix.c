#include <stdio.h>

struct Mahasiswa
{
    char nama[100]; // Ubah menjadi array karakter
    int tinggi, berat;
};

int main() {
    int n;
    float rata_rata_berat = 0, rata_rata_tinggi = 0;
    int total_berat = 0, total_tinggi = 0;
    int nama_tinggi_terendah = 0, nama_berat_terendah = 0;

    printf("Masukan Jumlah Data: ");
    scanf("%d", &n);
    struct Mahasiswa kelasD[n];

    for (int i = 0; i < n; i++)
    {
        printf("Data %d\n", i + 1);
        printf("Nama: ");
        scanf("%99s", kelasD[i].nama); // Hapus & dan batasi input untuk mencegah overflow
        printf("Tinggi: ");
        scanf("%d", &kelasD[i].tinggi);
        printf("Berat: ");
        scanf("%d", &kelasD[i].berat);

        // Inisialisasi tinggi dan berat terendah dari elemen pertama
        if (i == 0 || kelasD[i].tinggi < kelasD[nama_tinggi_terendah].tinggi) {
            nama_tinggi_terendah = i;
        }
        if (i == 0 || kelasD[i].berat < kelasD[nama_berat_terendah].berat) {
            nama_berat_terendah = i;
        }
    }

    // Hitung total berat dan tinggi
    for (int i = 0; i < n; i++)
    {
        total_berat += kelasD[i].berat;
        total_tinggi += kelasD[i].tinggi;
    }

    // Hitung rata-rata
    rata_rata_berat = (float)total_berat / n;
    rata_rata_tinggi = (float)total_tinggi / n;

    // Print hasil
    printf("Berat terendah: %d (%s)\n", kelasD[nama_berat_terendah].berat, kelasD[nama_berat_terendah].nama);
    printf("Tinggi terendah: %d (%s)\n", kelasD[nama_tinggi_terendah].tinggi, kelasD[nama_tinggi_terendah].nama);
    printf("Rata-rata tinggi: %.2f\n", rata_rata_tinggi);
    printf("Rata-rata berat: %.2f\n", rata_rata_berat);

    return 0;
}