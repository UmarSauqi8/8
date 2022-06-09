#include<iostream>
#include<string.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
class Output {
      public : 
          void output();
      private :
       int n,i,j,pil;
       string Buku[50][3]; 
};

void Output::output(){
            cout<<"Daftar Buku"<<endl<<endl;
            cout<<"----------------------------------------------------------------------------\n";
            cout<<"|     jenis buku      |       Judul Buku        |       Pengarang          | \n";
            cout<<"----------------------------------------------------------------------------\n";
            for(i=0;i<n;i++){
              for(j=0;j<3;j++){
                cout<<"| "<<Buku[i][j]<<" | ";
                      }
                }
            cout<<"----------------------------------------------------------------------------\n";
            cout<<endl;
}
