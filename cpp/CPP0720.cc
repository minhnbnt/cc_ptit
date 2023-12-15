/*
Cho mảng A[] gồm n phần tử gồm các số nguyên dương. Mảng A[] được gọi là Bitonic nếu các phần tử của
mảng được chia thành hai phần: phần thứ nhất tăng dần, phần thứ hai giảm dần. Mảng A[] được sắp xếp
tăng dần cũng là mảng Bitonic khi xem phần thứ hai là rỗng. Tương tự như vậy, mảng A[] được sắp xếp
giảm dần cũng là một bitonic. Hãy tìm độ dài dãy con dài nhất của mảng A[] là một Bitonic. Ví dụ với
mảng A[] = {1, 11, 2, 10, 4, 5, 2, 1 } ta có kết quả là 6 tương ứng với độ dài dãy con {1, 2, 10, 4,
2, 1}.

Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số lượng phần
tử của mảng N; phần thứ hai đưa vào n số A[i]; các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤100; 1≤ A[i] ≤200.

Output:
Đưa ra kết quả mỗi test theo từng dòng.
Input:
2
5
1 2 5 3 2
8
1 11 2 10 4 5 2 1

Output:
5
6
*/
