#include <stdio.h>

int main() {
	int a, b, c;


	do {
		scanf_s("%d %d %d", &a, &b, &c);

		if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
			printf("right\n");
		else
			printf("wrong\n");
	} while (a != 0 && b != 0 && c != 0);

	return 0;

}