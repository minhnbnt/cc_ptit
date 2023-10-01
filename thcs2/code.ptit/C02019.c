/*
Nhập vào chiều cao tam giác (không quá 9).
Vẽ hình tam giác số theo nguyên tắc tương ứng theo mẫu trong ví  dụ dưới đây.

Input
Chỉ có một số dòng ghi chiều cao (không quá 9).

Output
Ghi ra kết quả theo mẫu.

Ví dụ:
Input:
5

Output:
2
242
24642
2468642
2468108642
*/

#include <stdio.h>

int main() {
	unsigned n, i, j;
	scanf("%u", &n);
	for (i = 1; i <= n; i++) {
		unsigned num = 2;
		for (j = 1; j < i; j++) {
			printf("%u", num);
			num += 2;
		}
		printf("%u", num);
		for (j = 1; j < i; j++) {
			num -= 2;
			printf("%u", num);
		}
		putchar('\n');
	}
	return 0;
}
