#include <iostream>
using namespace std;
void llenar(int& X[], int& M[], int);
void amm(int X[], int M[], int& N[], int);
void mostrar(int);
	
int main(){
	int n, X[50], N[50], M[50];
	llenar(X, M, n);
	amm(X, M, N, n);
	mostrar(n);
}

void llenar(int& X[], int% M[], int n){
	cout<<"Tamaño: ";cin>>n;
	for(int i=0; i<n; i++){
		cout<<"\nNumero 1: ";cin>>X[i];
		cout<<"Numero 2: ";cin>>M[i];
	}
}

void amm(int X[], int M[], int N[], int n){
	for(int i=0; i<n; i++){
		N[i]=X[i]-M[i];
	}
}

void mostrar(int n){
	for(int i=0; i<n; i++){
		cout<<N[i];
	}
}
