#include<iostream>

using namespace std;

int main(){
	int row,col;
	int move;
	string nama1,nama2;
	
	char papan[3][3]={
		{' ',' ',' '},
		{' ',' ',' '},
		{' ',' ',' '}
	};
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(j<2){
				cout<<" "<<papan[i][j]<<" |";	
			}else{
				cout<<" "<<papan[i][j];
			}		
		}
		cout<<endl;
		if(i<2){
			cout<<"--- --- ---";
			cout<<endl;
		}
	}
	cout<<"Masukan Nama Pemain 1 : ";
	getline(cin,nama1);
	cout<<"Masukan Nama Pemain 2 : ";
	getline(cin,nama2);
	cout<<endl;
	
	do{
		if(move%2==0){
			cout<<"\nPemain "<<nama1<<" (X)\n";
			cout<<"Masukan baris : ";
			cin>>row;
			cout<<"Masukan kolom : ";
			cin>>col;
			papan[row][col]='X';
		}else{
			cout<<"\nPemain "<<nama2<<" (O)\n";
			cout<<"Masukan baris : ";
			cin>>row;
			cout<<"Masukan kolom : ";
			cin>>col;
			papan[row][col]='O';
		}
		
		cout<<endl;
		
		if(row>=3 || col>=3){
			cout<<"====== ERRORR =====\n";
			cout<<" MASUKAN INPUT 0-2\n";
			cout<<"===================\n";
			cout<<endl;
			move--;
		}
				
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				if(j<2){
					cout<<" "<<papan[i][j]<<" |";	
				}else{
					cout<<" "<<papan[i][j];
				}		
			}
			cout<<endl;
			if(i<2){
				cout<<"--- --- ---";
				cout<<endl;
			}
		}
		cout<<endl;
//		baris 1 ke kanan
		if(papan[0][0]==papan[0][1]&&papan[0][1]==papan[0][2]&&papan[0][2]!=' '){
			if(move%2==0){
				cout<<"Selamat "<<nama1<<" (X) Menang!!";
				move=10;
			}else{
				cout<<"Selamat "<<nama2<<" (O) Menang!!";
				move=10;
			}
		}
//		baris 2 kekanan
		else if(papan[1][0]==papan[1][1]&&papan[1][1]==papan[1][2]&&papan[1][2]!=' '){
			if(move%2==0){
				cout<<"Selamat "<<nama1<<" (X) Menang!!";
				move=10;
			}else{
				cout<<"Selamat "<<nama2<<" (O) Menang!!";
				move=10;
			}
		}
//		baris 3 kekanan
		else if(papan[2][0]==papan[2][1]&&papan[2][1]==papan[2][2]&&papan[2][2]!=' '){
			if(move%2==0){
				cout<<"Selamat "<<nama1<<" (X) Menang!!";
				move=10;
			}else{
				cout<<"Selamat "<<nama2<<" (O) Menang!!";
				move=10;
			}
		}
//		baris 1 kebawah		
		else if(papan[0][0]==papan[1][0]&&papan[1][0]==papan[2][0]&&papan[2][0]!=' '){
			if(move%2==0){
				cout<<"Selamat "<<nama1<<" (X) Menang!!";
				move=10;
			}else{
				cout<<"Selamat "<<nama2<<" (O) Menang!!";
				move=10;
			}
		}
//		baris 2 kebawah
		else if(papan[0][1]==papan[1][1]&&papan[1][1]==papan[2][1]&&papan[2][1]!=' '){
			if(move%2==0){
				cout<<"Selamat "<<nama1<<" (X) Menang!!";
				move=10;
			}else{
				cout<<"Selamat "<<nama2<<" (O) Menang!!";
				move=10;
			}
		}
//		baris 3 kebawah
		else if(papan[0][2]==papan[1][2]&&papan[1][2]==papan[2][2]&&papan[2][2]!=' '){
			if(move%2==0){
				cout<<"Selamat "<<nama1<<" (X) Menang!!";
				move=10;
			}else{
				cout<<"Selamat "<<nama2<<" (O) Menang!!";
				move=10;
			}
		}
//		baris menyamping /
		else if(papan[2][0]==papan[1][1]&&papan[1][1]==papan[0][2]&&papan[0][2]!=' '){
			if(move%2==0){
				cout<<"Selamat "<<nama1<<" (X) Menang!!";
				move=10;
			}else{
				cout<<"Selamat "<<nama2<<" (O) Menang!!";
				move=10;
			}
		}
//		baris menyamping / mirror
		else if(papan[0][0]==papan[1][1]&&papan[1][1]==papan[2][2]&&papan[2][2]!=' '){
			if(move%2==0){
				cout<<"Selamat "<<nama1<<" (X) Menang!!";
				move=10;
			}else{
				cout<<"Selamat "<<nama2<<" (O) Menang!!";
				move=10;
			}
		}
		
		move++;
	}while(move<9);
	return 0;
}
