using namespace std;

class Proses{
  public :
    void getData(){
      ambil_data.open("api_data.txt");
      while(!ambil_data.eof()){
        if(i==0){
          ambil_data>>Agep;
        }
        else if(i==1){
          ambil_data>>Agor;
        }
        else if(i==2){
          ambil_data>>Ugor;
        }
        else if(i==3){
          ambil_data>>Cgor;
        }
        else if(i==4){
          ambil_data>>Abkr;
        }
        else {
          ambil_data>>ongkir;
        }
        i++;
      }
      ambil_data.close();
    }
    void toFile(){
      int total = (hrg_Agep * Agep)+(hrg_Agor * Agor)+(hrg_Ugor * Ugor)+(hrg_Cgor * Cgor)+(hrg_Abkr*Abkr);
      int total_semua;
      int t2;
      if(ongkir<=3){
        t2=15000;
        total_semua=total+t2;
      }
      else{
        t2=25000;
        total_semua=total+t2;
      }

      tulis_data.open("api_data.txt");
      tulis_data << total << endl;
      tulis_data << t2 << endl;
      tulis_data << total_semua << endl;
      tulis_data << Agep <<endl;
      tulis_data << Agor << endl;
      tulis_data << Ugor << endl;
      tulis_data << Cgor << endl;
      tulis_data << Abkr;
      tulis_data.close();
    }
  private :
  ifstream ambil_data;
  ofstream tulis_data;
  int Agep,Agor,Ugor,Cgor,Abkr,ongkir;
  int hrg_Agep = 21000;
  int hrg_Agor = 17000;
  int hrg_Ugor = 19000;
  int hrg_Cgor = 20000;
  int hrg_Abkr = 25000;
  int i=0;
};