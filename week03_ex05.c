#include <stdio.h>
int hanoi_tower(int n, char from, char tmp, char to) {

	if (n == 1) {
		printf("원반 %d을 %c 에서 %c으로 옮긴다.\n", n, from, to);
	}
	else {
		hanoi_tower(n - 1, from, to, tmp);
		printf("원반 %d을 %c 에서 %c으로 옮긴다.\n", n, from, to);
		hanoi_tower(n - 1, tmp, from, to);
	}
	return 0;
}
int main(void) {
	hanoi_tower(4, 'A', 'B', 'C');
	return 0;
}