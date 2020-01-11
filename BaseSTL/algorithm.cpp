#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// #include <algorithm>
// �������� �˰������� ����ִ� �������

bool compare(const int a, const int b) {
	return a > b;
}

int main() {
	int arr1[100000];
	vector<int> arr2(100000);
	int n = 100000;

	// sort
	// ù ������ �ּҿ� ������ ������ ���� �ּҸ� ���ڷ� �ѱ��.
	sort(arr1, arr1 + n);
	sort(arr2.begin(), arr2.end());
	// �� �Լ��� ���� ���� �Ѱ��� �� �ִ�.
	sort(arr1, arr1 + n, compare);

	// stable_sort
	stable_sort(arr1, arr1 + n);

	// lower_bound
	// ù ������ �ּҿ� ������ ������ ���� �ּҿ� ���� ���Ҹ� �ѱ��.
	// �������� ���ҵ��� ���ĵǾ� �־���Ѵ�.
	// ���� ���� �ش� ������ �ּҰ�, ���ٸ� arr1+n�� ����
	// �Ǵ� arr2.end()�� ����
	int idx = lower_bound(arr1, arr1 + n, 42) - arr1;
	cout << idx << '\n';

	// upper_bound
	// ������ ����.
	vector<int>::iterator it = upper_bound(arr2.begin(), arr2.end(), 54);
	if (it != arr2.end()) {
		cout << *it << '\n';
	}

	// max_element
	// ù ������ �ּҿ� ������ ������ ���� �ּҸ� ���ڷ� �ѱ��.
	// �������� �ִ밪�� ������ ������ �ּҸ� �����Ѵ�.
	cout << *max_element(arr1, arr1 + n) << '\n';

	// min_element
	// ������ ����.
	cout << *min_element(arr2.begin(), arr2.end()) << '\n';

	// unique
	// ù ������ �ּҿ� ������ ������ ���� �ּҸ� ���ڷ� �ѱ��.
	// �������� �ߺ��� ���Ҹ� ������ ���κ����� �о��ְ�
	// ������ ������ ���� �ּҸ� �����Ѵ�.
	// �������� ���ҵ��� ���ĵǾ� �־���Ѵ�.
	// ���� erase�� �Բ� �ߺ��� ���Ҹ� �����ϴ� ������� ����Ѵ�.
	arr2.erase(unique(arr2.begin(), arr2.end()), arr2.end());

	// next_permutation
	// ù ������ �ּҿ� ������ ������ ���� �ּҸ� ���ڷ� �Ѱ��ش�.
	// �������� ���ҵ��� ���� ������ �����ϰ� true�� �����Ѵ�.
	// ���� ������ ���ٸ� false�� �����Ѵ�.
	// �������� ���ҵ��� ���ĵǾ� �־�� �Ѵ�.
	int arr[10];
	for (int i = 0; i < 10; i++)
		arr[i] = i;
	do {
		for (int i = 0; i < 10; i++)
			cout << arr[i] << ' ';
		cout << '\n';
	} while (next_permutation(arr, arr + 10));
	return 0;
}