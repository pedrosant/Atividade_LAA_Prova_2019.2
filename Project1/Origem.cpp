#include<iostream>

using namespace::std;

void tostring(int v[10], int n);
void inserirNumv1(int v[10], int n);
void inserirNumv2(int v[10], int n);
void insertionSort(int v[10], int n);
int compararVetores(int v1[10], int v2[10], int n);
int commpararLog_n(int v1[10], int v2[10], int n);

int main() {
	int result;
	int resultLogN;
	int v1[10];
	int v2[10];

	inserirNumv1(v1,10);
	inserirNumv2(v2, 10);
	tostring(v1,10);
	tostring(v2,10);
	cout << "MENSAGENS ORDENADAS"<<::endl;
	insertionSort(v1,10);
	insertionSort(v2, 10);

	tostring(v1,10);
	tostring(v2, 10);

	result = compararVetores(v1,v2,10);
	resultLogN = commpararLog_n(v1,v2,10);

	cout << "O n-esimo valor e: " << result << endl;
	cout << "O n-esimo valor em O(log n) e: " << resultLogN <<::endl;
	return 0;
}

void tostring(int v[10], int n) {
	for (int i = 0; i < n; i++) {
		cout << v[i] << "\t";
	}
	cout << "\n";
}

void inserirNumv1(int v[10], int n) {
	int aux = n;
	for (int i = 0; i < n; i++) {
		v[i] = aux * 3;
		aux = aux + (2 * 4) - i;
	}
}

void inserirNumv2(int v[10], int n) {
	int aux = n;
	for (int i = 0; i < n; i++) {
		v[i] = aux;
		aux = aux - 1 * 5 - i;
	}
}

void insertionSort(int v[10], int n) {
	int chave, j;
	for (int i = 0; i < n; i++) {
		chave = v[i];
		j = i - 1;
		while (j >= 0 && v[j] > chave) {
			v[j + 1] = v[j];
			j = j - 1;
		}
		v[j + 1] = chave;
	}
}

int compararVetores(int v1[10], int v2[10], int n) {
	int result;
	if (v1[9] > v2[9]){
		result = v1[9];
	}else{
		result = v2[9];
	}
	return result;
}

int commpararLog_n(int v1[10], int v2[10],int n) {
	int result;
	for (int i = 0; i < n; i++) {
		if (v1[i] > v2[i]){
			result = v1[i];
		}else {
			result = v2[i];
		}
	}
	return result;
}