/*
//Step_10 브루트 포스
//#2798 블랙잭
//2019.10.01 풀이시작/종료
//큰거+큰거+작은거, 큰거+작은거+작은거 최대가 되는 조합 놓치는 코드임

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int* arr;
	int size;
	int max;
	int sum;

	scanf("%d", &size);
	scanf("%d", &max);

	arr = (int*)malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		int card;
		scanf("%d", &card);
		arr[i] = card;
	}

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = (size-1); i >= 2  ; i--) {
		sum = arr[i] + arr[i - 1] + arr[i - 2];
		if (sum <= max) {
			printf("%d", sum);
			break;
		}
	}


	//int wait;
	//scanf("%d", &wait);

	free(arr);
	return 0;
}
//*/