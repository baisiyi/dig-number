#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cout << "����n= ";
	cin >> n;
	int ans[20000];
	ans[0] = 1;//��1��ʼ��
	int temp, digit = 1;//tempΪÿ�γ˵õý����digitalΪλ��
	for (int i = 0; i < n; i++) {
		int num = 0;
		for (int j = 0; j < digit; j++) {
			temp = ans[j] * i + num;
			ans[j] = temp % 10;
			num = temp / 10;
		}
		while (num) {
			ans[digit] = num % 10;
			num = num / 10;
			digit++;
		}
	}
	for (int i = digit; i >= 0; i--)
		cout << ans[i];
	system("pause");
}

