//Step_10 브루트 포스
//#2231 분해합
//2019.10.01 풀이시작
//

/*
#include <stdio.h>

int N;

int find() {
	int creator = 1;

	while (1) {
		int tmp = creator;
		int sum = creator;

		while (tmp) {
			sum += tmp % 10;
			tmp /= 10;
		}
	}
}


int main() {

	return 0;
}


//*/