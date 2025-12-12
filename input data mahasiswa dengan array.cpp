#include<iostream>
using namespace std;

int main(){
	int jml;
	
	cout<<"Masukan jumlah mahasiswa : ";
	cin>>jml;
	
	string mhs[jml][3];
	
	for(int i = 0; i < jml; i++){
		cout<<"\nData Mahasiswa ke-"<<i+1<<endl;
		cout<<"Masukan Nama  : ";
		cin>>mhs[i][0];
		cout<<"Masukan NIM   : ";
		cin>>mhs[i][1];
		cout<<"Masukan Prodi : ";
		cin>>mhs[i][2];	
	}
	cout<<endl;
	
	for(int i = 0; i < jml; i++){
		cout<<"=== DAFTAR MAHASISWA KE-"<<i+1<<" ===\n";
		cout<<"Nama  : "<<mhs[i][0]<<endl;
		cout<<"NIM   : "<<mhs[i][1]<<endl;
		cout<<"Prodi : "<<mhs[i][2]<<endl;
		cout<<endl;		
	}
		
	return 0;
}

