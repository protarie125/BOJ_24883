#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	char c;
	cin >> c;

	if ('n' == c || 'N' == c) {
		cout << "Naver D2";
	}
	else {
		cout << "Naver Whale";
	}

	return 0;
}