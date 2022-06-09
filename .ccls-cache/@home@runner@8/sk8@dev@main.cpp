#include<iostream>
#include<string.h>
#include<iomanip>
#include<cstdlib>
using namespace std;

class Buku{
	public :
		void Input ();
		void Proses ();
		void Output ();
		
	private :
  int n,i,j;
  string Buku[50][4];
  char cari_buku[20];
};

void Buku::Input(){
    //menggunakan perulangan for untuk menjalankan proses array 2 dimensi sesuai inputan;
    // dengan batas banyak buku sebanyak n dan batas perulangan Tabel kolom 4;
	  cout<<"masukan banyak buku : ";
          cin >>n;
             for(i=0; i<n; i++){ 
              for(j=0;j<4; j++){ 
                if (j == 0){
                      cout<<"Buku Ke-"<<i+1<<endl;
                      cout<<"Jenis Buku :";
                      cin>>Buku[i][j];
                }else if(j == 1){
                      cout<<"kode buku :";
                      cin>>Buku[i][j];
                }else if(j == 2){
                      cout<<"judul Buku :";
                      cin>>Buku[i][j];
                }else if(j == 3){
                	  cout<<"Penulis : ";
                	  cin>>Buku[i][j];
				}         
    }
  } 
}

void Buku::Proses(){
	 cout<<endl;

               cout<<"Daftar Buku"<<endl<<endl;
            cout<<"---------------------------------------------------------------------------------------------------\n";
            cout<<"|     jenis buku      |       Kode Buku        |       Judul Buku          |		Penulis	  |\n";
            cout<<"---------------------------------------------------------------------------------------------------\n";
            for(i=0;i<n;i++){
              for(j=0;j<4;j++){
                cout<<"|\t "<<Buku[i][j]<<"\t\t | ";
                      }
                cout<<endl<<"---------------------------------------------------------------------------------------------------"<<endl;
                cout<<endl;
                }
}

void Buku::Output(){
	Proses();
}
int main(){
	Buku x;
	x.Input();
	x.Proses();
	x.Output();
  }