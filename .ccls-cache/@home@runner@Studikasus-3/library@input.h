using namespace std;

class Input{
  public :
    void cetak(){
      cout << "Selamat Datang Di restoran\n";
      cout << "Makanan | Harga\n";
      cout << "1. Ayam Geprek|Rp. 21000\n";
      cout << "2. Ayam Goreng|Rp. 17000\n";
      cout << "3. Udang Goreng|Rp. 19000\n";
      cout << "4. Cumi Goreng|Rp. 20000\n";
      cout << "5. Ayam Bakar|Rp. 25000\n";
      cout << "Pesan Ayam Geprek -> "; cin>>Agep;
      cout << "Pesan Ayam Goreng -> "; cin>>Agor;
      cout << "Pesan Udang Goreng -> "; cin>>Ugor;
      cout << "Pesan Cumi Goreng -> "; cin>>Cgor;
      cout << "Pesan Ayam Bakar -> "; cin>>Abkr;
      }
      void toFile(){
        tulis_data.open("../pra_data/input.txt");
        tulis_data << Agep << endl;
        tulis_data << Agor << endl;
        tulis_data << Ugor << endl;
        tulis_data << Cgor << endl;
        tulis_data << Abkr;
        tulis_data.close();
      }
  private :
      ofstream tulis_data;
      int Agep,Agor,Ugor,Cgor,Abkr;
};