#include <stdio.h>
void f(int* a, int* b) {
	int n = 0;
	n = *a;
	*a = *b;
	*b = n;
}
int main() {
	int a, arr[1000] = { 0 };
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < a; i++) {
		for (int j = i + 1; j <= a; j++) {
			if (arr[i] > arr[j]) {
				f(&arr[i], &arr[j]);
			}
		}
	}
	for (int i = 1; i <= a; i++) {
		printf("%d ", arr[i]);
	}
}