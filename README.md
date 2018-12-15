# praktikum8

##latihan1.cpp : Buatlah algoritma untuk menentukan nilai maksimum dan nilai minimum dari n bilangan bulat dengan menggunakan array.

Alur algoritma

   1.Mendeklarasikan variabel 'int nilai[3],a,min,maks;' sebagai variable input.
    2.Membaca input dari keyboard 'else if(nilai[a] > maks)'
    3.Membandingkan nilai variable //output minimum dan maksimum

code program lengkap 
```
c++ /Program mancari nilai minimum dan maksimum/ #include #include <conio.h> using namespace std; main() { //deklarasi int nilai[3],a,min,maks;

//input-output array for(a=1;a<=5;a++){ cout<<"Masukkan nilai ke-"<<a<<":"; cin>>nilai[a]; }

//proses looping array min = nilai[1]; maks = nilai[1]; for(a=1;a<=5;a++){ if(nilai[a] < min){ min = nilai[a]; } else if(nilai[a] > maks){ maks = nilai[a]; } }

//output minimum dan maksimum cout<<"nilai minimum adalah : "<<min<<endl; cout<<"nilai maksimum adalah : "<<maks<<endl;

getch(); return 0; }
```

**flowchart program**
![flowchart1](https://github.com/raninurhayati/praktikum8/blob/master/latihan1/Flowchart1.png)


**hasilnya**
![hasil1](https://github.com/raninurhayati/praktikum8/blob/master/latihan1/hasill1.png)


###latihan2.cpp : Tentukan modus dari n buah bilangan bulat, dimana besar datanya antara 1 sampai dengan 10.

Alur algoritma

   1. Mendeklarasikan variabel 'class HitungStatistik' sebagai variable input.
   2. Membaca input dari keyboard 'for (int i=0; i<20; i++) f[i] = 0;'
   3. Membandingkan nilai variable HitungStatistik run;


**flowchart program**
![flowchart2](https://github.com/raninurhayati/praktikum8/blob/master/latihan2/Flowchart2..png)


**hasilnya**
![hasil2](https://github.com/raninurhayati/praktikum8/blob/master/latihan2/hasil2.png)



code program lengkap 
```
c++ #include #include <math.h>

using namespace std;

class HitungStatistik { friend ostream& operator<<(ostream&, HitungStatistik&); friend istream& operator>>(istream&, HitungStatistik&); public: HitungStatistik(); void hitung_modus(); private: void maksimum(); void frekuensi(); int maks, item; int n; int A[20]; int f[11]; };

HitungStatistik::HitungStatistik() { for (int i=0; i<20; i++) f[i] = 0; }

istream& operator>>(istream& in, HitungStatistik& a) { cout << "Banyaknya data : "; cin >> a.n; for (int i = 0; i < a.n; i++) { cout << "Data ke- : " << i+1 << " > "; cin >> a.A[i]; } return in; }

void HitungStatistik::maksimum() { maks = f[0]; item = 1; for (int i=0; i<n; i++) if (f[i] > maks) { maks = f[i]; item = i; } cout << "Modus = " << item; }

void HitungStatistik::frekuensi() { for (int i=1; i<n; i++) ++f[A[i]]; }

void HitungStatistik::hitung_modus() { cout << "Frekuensi running\n"; frekuensi(); maksimum(); }

ostream& operator<<(ostream& out, HitungStatistik& a) { cout << "Mulai ...\n"; a.hitung_modus(); cout << "Nilai modus : " << a.item; return out; }

main() { HitungStatistik run; cin >> run; cout << run; return 0; }
```

###latihan3.cpp : Buatlah algoritma dan program untuk mengalikan dua buah matriks.

Alur algoritma

   1. Mendeklarasikan variabel '//input matrik pertama void matrik_1(){' sebagai variable input.

   2. Membaca input dari keyboard '//output matrik pertama cout<<"Matrik Pertama :"<<endl;'

    3.Membandingkan nilai variable main (){ matrik_1(); matrik_2();


			hasil();
 			getch();
 			return 0;
 			}



**flowchart program**
![flowchart3](https://github.com/raninurhayati/praktikum8/blob/master/latihan3/Flowchart3.png)


**hasilnya**
![hasil3](https://github.com/raninurhayati/praktikum8/blob/master/latihan3/hasil3.png)


code program lengkap 
```
c++ #include #include <conio.h> using namespace std;

int matrik1[2][2]; int matrik2[2][2]; int matrik3[2][2]; int temp;

//input matrik pertama void matrik_1(){

int matrik1[2][2]; int matrik2[2][2]; int matrik3[2][2]; int temp;

for (int x = 0;x<2;x++){ for (int y =0;y<2;y++){ cout <<"masukan nilai matrik pertama baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : "; cin>>matrik1[x][y]; } }

cout<<endl; //output matrik pertama cout<<"Matrik Pertama :"<<endl; for (int x = 0;x<2;x++){ for (int y =0;y<2;y++){ cout <<matrik1[x][y]<<" "; } cout<<endl; } }

void matrik_2(){ int matrik1[2][2]; int matrik2[2][2]; int matrik3[2][2]; int temp;

//input matrik kedua for (int x = 0;x<2;x++){ for (int y =0;y<2;y++){ cout <<"masukan nilai matrik kedua baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : "; cin>>matrik2[x][y]; } } cout<<endl; //output matrik kedua cout<<"Matrik Kedua :"<<endl; for (int x = 0;x<2;x++){ for (int y =0;y<2;y++){ cout <<matrik2[x][y]<<" "; } cout<<endl; } }

void hasil(){ int matrik1[2][2]; int matrik2[2][2]; int matrik3[2][2]; int temp;

//rumus perkalian matrik for (int x = 0;x<2;x++){ for (int y =0;y<2;y++){ matrik3[x][y]=0; for (int z =0;z<2;z++){ temp=matrik1[x][z]*matrik2[z][y]; matrik3[x][y]=matrik3[x][y]+temp; } } }

//output matrik hasil perkalian cout<<endl; cout<<"Matrik hasil perkalian :"<<endl; for (int x = 0;x<2;x++){ for (int y =0;y<2;y++){ cout <<matrik3[x][y]<<" "; } cout<<endl; } }

main (){

matrik_1(); matrik_2();

hasil(); getch(); return 0; }
```



###latihan4.cpp : Buatlah algortima dan program untuk menghasilkan transpose suatu matriks.

Alur algoritma

   1. Mendeklarasikan variabel 'int main(int argc, char *argv[]' sebagai variable input.
    2.Membaca input dari keyboard 'int a[10][10],m,n,i,j;'
    3.Membandingkan nilai variable system("PAUSE"); return EXIT_SUCCESS;

**flowchart program**
![flowchart4](https://github.com/raninurhayati/praktikum8/blob/master/latihan4/Flowchart4.png)


**hasilnya**
![hasil4](https://github.com/raninurhayati/praktikum8/blob/master/latihan4/hasil4.png)



code program lengkap 
```
c++ #include #include

using namespace std;

int main(int argc, char *argv[]) {

int a[10][10],m,n,i,j; cout<<"Masukkan Jumlah Baris: "; cin>>m; cout<<"Masukkan Jumlah kolom: "; cin>>n;

cout<<endl<<"Elemen matriks: "<<endl; for(i=0;i<m;i++) { for(j=0;j<n;j++) { cout<<"masukkan elemen a: "<<i+1<<j+1<<": "; cin>>a[i][j]; } } cout<<endl<<"Matriks: "<<endl<<endl; for(i=0;i<m;i++) { for(j=0;j<n;j++) { cout<<a[i][j]<<" "; } cout<<endl<<endl; } cout<<endl<<"Transpose Matriks: "<<endl<<endl; for(i=0;i<m;i++) { for(j=0;j<n;j++) { cout<<a[j][i]<<" "; } cout<<endl<<endl; }

system("PAUSE"); return EXIT_SUCCESS; }
```







