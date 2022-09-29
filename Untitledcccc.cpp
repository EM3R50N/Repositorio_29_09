#include <iostream>
using namespace std;
void llenar();
void amm(int X[], int M[], int);
void mostrar(int);

int n, X[50], N[50], M[50];
	
int main(){
	llenar();
	amm(X, M, n);
	mostrar(n);
}

void llenar(){
	cout<<"Tamaño: ";cin>>n;
	for(int i=0; i<n; i++){
		cout<<"\nNumero 1: ";cin>>X[i];
		cout<<"Numero 2: ";cin>>M[i];
	}
}

void amm(int X[], int M[], int n){
	int N[50];
	for(int i=0; i<n; i++){
		N[i]=X[i]-M[i];
	}
}

void mostrar(int n){
	for(int i=0; i<n; i++){
		cout<<N[i];
	}
}
