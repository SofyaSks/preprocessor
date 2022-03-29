#include <iostream>
using namespace std;

#define PI 3.14
#define forever for (int i =0; ; i++)
#define begin {
#define end }
#define repeat5 for (int i = 0;i<5; i++)\
				{
#define mult(a,b) (a*b)
#define compare(a,b) (a > b ? a : b)
#define loop(n,m)for (int i = n; i < m +1; i++)
#define crtArr(t, s) t s[5]

int main() {
	setlocale(LC_ALL, "ru");

	crtArr(int, arr);
	arr[1] = 0;

	/*int A, B;
	cout << "Введите 2 числa: ";
	cin >> A >> B;
	loop(A, B)
		cout << i << " ";*/

	/*int x, y;
	cout << "Введите два числа: ";
	cin >> x >> y;
	cout << x << " * " << y << " = " << mult(x, y) << endl;
	cout << "Большее из чисел = " << compare(x, y) << endl;*/

	/*cout << "PI = " << PI << endl;
#undef PI
#define PI 76
	cout << "PI = " << PI << endl;*/

	/*forever begin
		cout << i << " ";
	if (i >= 100)
		break;
	end*/

	//repeat5 cout << "hi\n";}

	return 0;
}