#include<iostream>

using namespace std;

int main(){
	int nilai[5];
	int hasil ;
	
	for(int i = 0; i < 5; i++){
		cout<<"masukan Nilai ke-"<<i+1<<" : ";
		cin>>nilai[i];
	}
	
	
	for(int i = 0; i <5; i++){
		hasil += nilai[i];
	}
	hasil /= 5;
	
	for(int i = 0; i <= 4; i++){
		if(nilai[i]<nilai[i+1]){
			swap(nilai[i],nilai[i+1]);
		}
	}
	
	cout<<"\nNilai rata ratanya = "<<hasil<<endl;
	cout<<"\nNilai Tertinggi    = "<<nilai[4];
	cout<<"\nNilai Terendah     = "<<nilai[0];
	
	return 0;
}
