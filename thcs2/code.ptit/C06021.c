/*
Cho một số nguyên dương lớn có nhiều hơn 20 chữ số nhưng không quá 1000 chữ số.
Một số nguyên dương được coi là “số ưu thế chẵn” nếu số chữ số của nó là chẵn và
số chữ số chẵn nhiều hơn số chữ số lẻ.

Một số nguyên dương được coi là “số ưu thế lẻ” nếu số chữ số của nó là lẻ và số
chữ số lẻ nhiều hơn số chữ số chẵn.

Hãy kiểm tra xem số đó có phải là số ưu thế (chẵn hoặc lẻ) hay không. Chú ý:
trường hợp số lượng chữ số chẵn và số lượng chữ số lẻ bằng nhau thì không được
coi là số ưu thế.

Dữ liệu vào
Dòng đầu ghi số bộ test, không quá 10
Mỗi bộ test là một dãy ký tự có độ dài không quá 1000, không có khoảng trống

Kết quả
Nếu dữ liệu vào không phải là một số nguyên hợp lệ (có ký tự không phải số hoặc
bắt đầu bằng chữ số 0) thì in ra INVALID Nếu dữ liệu vào thỏa mãn là số ưu thế
thì in ra YES, nếu không in ra NO

Ví dụ:
Input:
3
01234aa32432432432534545b987978
1234567890123456789000
999999999999999999999999999999

Output:
INVALID
YES
NO
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

char evenavt(const char *str) {
	if (*str == '0') return -1;
	else if (strlen(str) % 2) return 0;
	unsigned odd = 0, even = 0;
	for (char *p = (char *)str; *p != '\0'; p++)
		if (isdigit(*p)) {
			if (strchr("13579", *p)) odd++;
			else even++;
		} else return -1;
	return even > odd;
}

int main(void) {
	unsigned test;
	scanf("%u%*c", &test);
	while (test--) {
		char str[1001];
		scanf("%s", str);
		strtok(str, "\n");
		char result = evenavt(str);
		if (result == 0) puts("NO");
		else if (result == 1) puts("YES");
		else puts("INVALID");
	}
	return 0;
}
