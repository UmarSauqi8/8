#include<iostream>
#include<string.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
class Proses {
      public : 
          void proses();
      private :
       int n,i,j,pil;
       char cari_buku[20];
       string Buku[50][3]; 
};

void Proses::proses(){
    cout<<"Buku yang dicari : ";
    cin >>cari_buku;
    cout<<"=========================================="<<endl;
             for(i=0; i<n; i++){ 
              for(j=0;j<3; j++){ 
                if(cari_buku == Buku[i][j]){
                  cout<<"Jenis Buku : "<<Buku[i][j-1]<<endl;
                  cout<<"Judul Buku : "<<Buku[i][j]<<endl;
                  cout<<"Penulis    : "<<Buku[i][j+1]<<endl; 
              }
            }
          }
  }
