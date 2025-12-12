#include<iostream>
using namespace std;

int main(){
	int mat1[2][2];
	int mat2[2][2];
	cout<<"=== PENJUMLAHAN MATRIKS ===\n";
	
//	matriks ke 1	
	cout<<"\nMatriks ke-1"<<endl;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<"Masukan Index ["<<i<<"]["<<j<<"] : ";
			cin>>mat1[i][j];
		}
	}
	
//	matriks ke 2
	cout<<"\nMatriks ke-2"<<endl;	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<"Masukan Index ["<<i<<"]["<<j<<"] : ";
			cin>>mat2[i][j];
		}
	}

//	hasil matriks ke 1
	cout<<"\nMatriks 1\n";
	for(int i = 0; i < 2;i++){
		for(int j = 0; j < 2; j++){
			cout<<mat1[i][j]<<" ";		
		}
		cout<<endl;
	}

//	hasil matriks ke 1
	cout<<"\nMatriks 2\n";
	for(int i = 0; i < 2;i++){
		for(int j = 0; j < 2; j++){
			cout<<mat2[i][j]<<" ";		
		}
		cout<<endl;
	}
	
//	hasil penjumlahan kedua matriks
	cout<<"\n=== HASIL PENJUMLAHAN KEDUA MATRIKS ===\n";
	for(int i = 0; i < 2;i++){
		for(int j = 0; j < 2;j++){
			cout<<mat1[i][j]+mat2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
