#include <stdio.h>

int main() {
	int mas[100][100];
	int n, m;
	printf("Введите количество строк: ");
	scanf("%d", &n);
	printf("Введите количество столбцов: ");
	scanf("%d", &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("Введите элемент массива [%d][%d] = ", i, j);
			scanf("%d", &mas[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
		{
			printf("%2i ", mas[i][j]);
		}
		printf("\n");
	}

	return 0;
}
