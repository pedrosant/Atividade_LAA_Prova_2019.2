#include<iostream>

using namespace::std;

void tostring(int v[10], int n);
void inserirNumv1(int v[10], int n);
void inserirNumv2(int v[10], int n);
void insertionSort(int v[10], int n);
int encontrar_N_esimo(int v[10], int n, int posicao);
int encontrarLog_n(int v[10], int n, int posicao);

int main() {
	int resultv1;
	int resultv2;
	int resultLogNv1;
	int resultLogNv2;
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

	resultv1 = encontrar_N_esimo(v1,10,8);
	resultv2 = encontrar_N_esimo(v2, 10, 8);
	resultLogNv1 = encontrarLog_n(v1,10,8);
	resultLogNv2 = encontrarLog_n(v2, 10, 8);

	cout << "O n-esimo valor do vertor 1 e: " << resultv1 << endl;
	cout << "O n-esimo valor do vertor 2 e: " << resultv2 << endl;
	cout << "O n-esimo valor em O(log n) do vertor 1 e: " << resultLogNv1 <<::endl;
	cout << "O n-esimo valor em O(log n) do vertor 2 e: " << resultLogNv2 << ::endl;
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

int encontrar_N_esimo(int v[10], int n, int posicao) {
	int result;
	result = v[posicao];
	return result;
}

int encontrarLog_n(int v[10],int n, int posicao) {
	int result;
	for (int i = 0; i < n; i++) {
		if (i == posicao){
			result = v[posicao];
		}
	}
	return result;
}