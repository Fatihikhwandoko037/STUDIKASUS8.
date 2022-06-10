#include <iostream>
#include <iomanip>
using namespace std;
class merge{
	public:
		void input();
		void output_awal();
		void output_gabung();
	private:
		int n,m,j,i;
		int k=0;
  	string A[3][3];
  	string B[2][3];
  	string C[6][3];
};
void merge::input(){
	cout<<"\n Masukan Data Karyawan Developer : \n";
	cout<<" 0.Nama  --  1.Alamat  --  2.Jenis Kelamin \n";
    for (i=0; i<3; i++){
		cout<<"\n";
		for (j=0; j<3; j++){
			cout<<"   ["<<j<<"]=";cin>>A[i][j];
			C[i][j]=A[i][j];
		}
	}
	cout<<"\n Masukan Data Karyawan Admin : \n";
	cout<<" 0.Nama  --  1.Alamat  --  2.Jenis Kelamin \n";
	for (i=0; i<2; i++){
		cout<<"\n";
		for (j=0; j<3; j++){	
			cout<<"   ["<<i<<"-"<<j<<"]=";cin>>B[i][j];
			C[i+3][j]=B[i][j];
		}
	}
}
void merge::output_awal(){
	cout<<"\n   Karyawan Developer "<<endl;
	cout<<setw(15)<<"Nama"<<setw(15)<<"Alamat"<<setw(15)<<"Jenis Kelamin"<<endl;
	cout<<endl;
  	for(i=0;i<3;i++){
  		for(j=0;j<3;j++){
  			cout<<setw(15)<<A[i][j]<<setw(15);
	  	}
	  	cout<<endl;
	}
	cout<<endl;
	cout<<"\n   Karyawan Admin "<<endl;
	cout<<setw(15)<<"Nama"<<setw(15)<<"Alamat"<<setw(15)<<"Jenis Kelamin"<<endl;
	cout<<endl;
  	for(i=0;i<2;i++){
  		for(j=0;j<3;j++){
  			cout<<setw(15)<<B[i][j]<<setw(15);
	  	}
	  	cout<<endl;
	}
}
void merge::output_gabung(){
  cout<<"\n   Data Semua Karyawan  "<<endl;
	cout<<"\n"<<setw(15)<<"Nama"<<setw(15)<<"Alamat"<<setw(15)<<"Jenis Kelamin"<<endl;
	cout<<endl;
  	for(i=0;i<6;i++){
  		for(j=0;j<3;j++){
  			cout<<setw(15)<<C[i][j]<<setw(15);
	  	}
	  	cout<<endl;
	}
}
int main(){
	merge a;
	a.input();
	a.output_awal();
	a.output_gabung();
}