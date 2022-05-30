#include <iostream>
#include <vector>

using std::cin; 
using std::cout;
using std::vector;

int a1, a2, b1, b2;

void fight(int& p1,int& p2,int& counter)
{
	if (p1 == 0 || p2 == 0)
		return;
	A(p1, p2);
	B(p1, p2);

	A(p2, p1);
	B(p2, p2);
	fight(p1, p2, counter += 2);
}

void A(int& p1,int& p2)
{
	p1 -= a1;
	p2 -= a2;
}
void B(int& p1, int& p2)
{
	if (p1 % 3 == 0)
		p2 -= b1;
	else
	{
		p2 -= b2;
		p1 -= b2;
	}
}

int main()
{
	int p1, p2;
	cin >> p1;
	p2 = p1;
	cin >> a1;
	cin >> a2;
	cin >> b1;
	cin >> b2;
	int rounds=0;
	/*while (p1 > 0 && p2 > 0)
	{
		if (p1 % 3 == 0)
			p2 -= b1;
		rounds++;
	}*/

	fight(p1, p2, rounds);

	if (p1)
		cout << "1 ";
	else
		cout << "2 ";
	cout << rounds;
	return 0;
}
