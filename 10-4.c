///*
//Step_10 브루트 포스
//#1018 체스판 다시칠하기
//2019.10.01 풀이시작
//뭐가 문제인지 2차원배열 생성 자체가 안되는듯

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int** arr;
	int size_row; //size of row
	int size_col; //size of column
	char color;

	scanf("%d", &size_row);
	scanf("%d", &size_col);

	arr = (int**)malloc(sizeof(int) * size_row);
	for (int i = 0; i < size_row; i++) {
		arr[i] = (int*)malloc(sizeof(int) * size_col);
	}

	for (int i = 0; i < size_row; i++) {
		for (int j = 0; j < size_col; j++) {
			scanf("%c", &color);
			arr[i][j] = color;
		}
	}
	
	for (int i = 0; i < size_row; i++) {
		for (int j = 0; j < size_col; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

	int wait;
	scanf("%d", &wait);

	for (int i = 0; i < size_row; i++) {
		free(arr[i]);
	}
	free(arr);

	return 0;
}
//*/