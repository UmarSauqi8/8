#include<iostream>
#include<string.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
class Input {
      public : 
          void input();
      private :
       int n,i,j,pil;
       string Buku[50][3]; 
};

void Input::input(){
          cout<<"masukan banyak buku : ";
          cin >>n;
             for(i=0; i<n; i++){ 
              for(j=0;j<3; j++){ 
                if (j == 0){
                      cout<<"Buku Ke-"<<i+1<<endl;
                      cout<<"Jenis Buku :";
                      cin>>Buku[i][j];
                }else if(j == 1){
                      cout<<"Judul Buku :";
                      cin>>Buku[i][j];
                }else if(j == 2){
                      cout<<"Penulis    :";
                      cin>>Buku[i][j];
                }         
    }
  } 
  cout<<endl;
  cout<<"\n\n Data Berhasil Disimpan\n"<<endl; 
}