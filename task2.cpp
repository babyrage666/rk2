#include <iostream>
#include <vector>

using namespace std;

int sumN(int x) 
{
	int sum = 0;
	for(int i = 1; i < (x + 1); ++i)
		sum += i;

	return sum;
}

void find(int sumN) 
{
	vector<int> v{2, 0, 7, 8};
	vector<int>::iterator it;
	int _sum = 0;

	for(it = v.begin(); it != v.end(); ++it) 
	{
		cout << (*it) << ' ';
		_sum += (*it);
	}
	cout << endl;

	int delVal = sumN - _sum;
	cout << "Deleted value: " << delVal << endl;

	v.push_back(delVal);

	for(it = v.begin(); it != v.end(); ++it)
		cout << (*it) << ' ';

}

int main() 
{
	int N = 5;
	int sum = sumN(N);
	find(sum);
	return 0;
}

