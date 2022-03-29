// Персональный шаблон проекта С++
#include <iostream>
using namespace std;

#define PI 3.14
#define forever for (int i = 0; ; i++)
#define begin {
#define end }
#define repeat5 for (int i = 0; i < 5; i++)\
					{
#define mult(a, b) ((a) * (b))
#define compare(a,b) (a>b ? a:b)

#define loop(n, m) for (int i = n; i < m; i++)

#define crtArr(t, s) t s[5]

int main() {
	setlocale(LC_ALL, "Russian");

	forever begin
		cout << i << " ";
		if (i >= 100)
			break;
	end

	cout << PI << endl;
	#undef PI
	#define PI 3
	cout << PI << endl;

	repeat5 cout << "Hi\n";}

	int x, y;
	cout << "Введите 2 числа: ";
	cin >> x >> y;
	cout << mult(x, y) << endl;

	cout << "Большее из чисел = " << compare(x, y) << endl;

	int N, M;
	cout << "Введите 2 числа: ";
	cin >> N >> M;
	loop(N, M)
		cout << i << endl;

	crtArr(int, arr);
		arr[1] = 0;
	return 0;
}


