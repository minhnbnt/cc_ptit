/*
Phép tích chập (convolution) là kỹ thuật quan trọng trong xử lý ảnh.

Cho ma trận ảnh và ma trận kernel 3x3. Nhiệm vụ của bạn là hãy thực hiện phép nhân tích chập của 2
ma trận, sau đó tính tổng tất cả các phần tử của ma trận thu được.

Input:
Dòng đầu tiên là số lượng bộ test T (T≤ 20).
Mỗi test bắt đầu bởi hai số nguyên N và M. (3≤N,M≤300).
Kế tiếp là N dòng, mỗi dòng gồm M số nguyên mô tả ma trận ảnh.
3 dòng tiếp theo, mỗi dòng gồm 3 số nguyên mô tả ma trận kernel.
Giá trị các phần tử của hai ma trận có giá trị tuyệt đối không vượt quá 100.

Output:
Với mỗi test, hãy in ra tổng các phần tử của ma trận mới tìm được.

Ví dụ:
Input:
2
4 4
2 1 0 0
3 2 1 1
4 3 2 1
2 2 1 0
-1 -1 -1
-1 8 -1
-1 -1 -1
3 3
1 2 3
4 5 6
7 8 9
1 1 1
1 1 1
1 1 1

Output:
10
45
*/
