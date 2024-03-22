#include <stdio.h>

struct Mahasiswa
{
    char nama[20];
    int tinggi, berat;
};


int main() {
    int n, berat_terendah,tinggi_terendah;
    float rata_rata_berat, rata_rata_tinggi;
    int total_berat = 0;
    int total_tinggi = 0;
    int nama_tinggi_terendah, nama_berat_terendah;

    printf("Masukan Jumlah Data: ");
    scanf("%d", &n);
    struct Mahasiswa kelasD[n];

    for (int i = 0; i < n; i++)
    {
        int w = 0;
        w++;
        printf("Data %d \n", w);
        getchar();
        printf("nama : ");
        fgets(kelasD[i].nama, sizeof(kelasD[i].nama), stdin);
        // scanf("%s", &kelasD[i].nama);
        printf("tinggi : ");
        scanf("%d", &kelasD[i].tinggi);
        printf("berat : ");
        scanf("%d", &kelasD[i].berat);
    }

// tinggi terendah
        for (int j = 0; j < n; j++)
        {
        if (kelasD[0].tinggi < kelasD[j].tinggi )
        {
            tinggi_terendah = kelasD[0].tinggi;
            nama_tinggi_terendah = 0;
        }else
        {
            tinggi_terendah = kelasD[j].tinggi;
            nama_tinggi_terendah = j;
        }
        }

// berat terendah
        for (int j = 0; j < n; j++)
        {
         if (kelasD[0].berat < kelasD[j].berat )
        {
            berat_terendah = kelasD[0].berat;
            nama_berat_terendah = 0;
        }else{
            berat_terendah = kelasD[j].berat;
            nama_berat_terendah = j;
        }
        }

// buat rata rata
    for (int i = 0; i < n; i++)
    {
        total_berat += kelasD[i].berat;
    }
    rata_rata_berat = total_berat / n;

    for (int i = 0; i < n; i++)
    {
        total_tinggi += kelasD[i].tinggi;
    }
    rata_rata_tinggi = total_tinggi / n;

    

// print
printf("berat terendah : %d (%s)\n", berat_terendah, kelasD[nama_berat_terendah].nama );
printf("tinggi terendah : %d (%s)\n", tinggi_terendah, kelasD[nama_tinggi_terendah].nama);
printf("rata rata tinggi : %f \n", rata_rata_tinggi);
printf("rata rata berat : %f \n", rata_rata_berat);
return 0;
}
