#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cout << "输入n= ";
	cin >> n;
	int ans[20000];
	ans[0] = 1;//从1开始乘
	int temp, digit = 1;//temp为每次乘得得结果，digital为位数
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

