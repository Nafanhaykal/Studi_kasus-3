using namespace std;

class Output{
  public:
    void cetak(){
      cout << "STRUK PEMBELIAN\n";
      cout << "Menu yang dibeli : \n";
      cout << "Ayam Geprek\t-> "<<data[3]<<endl;
      cout << "Ayam Goreng\t-> " <<data[4]<<endl;
      cout << "Udang Goreng -> "<<data[5]<<endl;
      cout << "Cumi Goreng\t-> "<<data[6]<<endl;
      cout << "Ayam Bakar\t-> "<<data[7]<<endl;
      cout << "Harga\t= Rp."<<data[0]<<endl;
      cout << "Ongkir\t= Rp."<<data[1]<<endl;
      cout << "Total Bayar\t= Rp."<<data[2]<<endl;
    }
    void getData(){
      ambil_data.open("api_data.txt");
      while(!ambil_data.eof()){
        ambil_data>> data[index];
        index += 1;
      }
      ambil_data.close();
    }
    void toFile(){
      tulis_data.open("struk.txt");
      tulis_data<<"STRUK PEMBELIAN"<<endl;
      tulis_data<<"\nMenu Yang DiPesan : "<<endl;
      tulis_data << "Ayam Geprek\t-> "<<data[3]<<endl;
      tulis_data << "Ayam Goreng\t-> " <<data[4]<<endl;
      tulis_data << "Udang Goreng-> "<<data[5]<<endl;
      tulis_data << "Cumi Goreng\t-> "<<data[6]<<endl;
      tulis_data << "Ayam Bakar\t-> "<<data[7]<<endl;
      tulis_data << "Harga\t= Rp."<<data[0]<<endl;
      tulis_data << "Ongkir\t= Rp."<<data[1]<<endl;
      tulis_data << "Total Bayar\t= Rp."<<data[2]<<endl;
      tulis_data.close();
    }
  private : 
    ofstream tulis_data;
    ifstream ambil_data;
    string data[20];
    int index = 0;
};