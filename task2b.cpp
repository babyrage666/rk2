#include <iostream>
#include <vector>

using namespace std;

int sumN(int x) 
{
	int sum = 0;
	for(int i = 1; i < (x + 1); i++)
	sum += i;

	return sum;
}

void find(int sumN) 
{
	std::vector<int> v{3, 4, 5};
	std::vector<int> v1;
	std::vector<int>::iterator it_v;
	std::vector<int>::iterator it_v1;
	int _sum = 0;

	for(it_v = v.begin(); it_v != v.end(); ++it_v) 
	{
		cout << (*it_v) << ' ';
		_sum += (*it_v);
	}
	cout << endl;

	int sumDelVals = sumN - _sum;
	int delValFirst;
	int delValSec;

	for(int i = (sumDelVals/2); i != 0; --i)
		v1.push_back(i);


	for(it_v1 = v1.begin(); it_v1 != v1.end(); ++it_v1) 
	{
		for(it_v = v.begin(); it_v != v.end(); ++it_v) 
		{
			if( (*it_v1) == (*it_v) ) 
			{
				v1.erase(it_v1);
			} 
			else 
			{
				delValFirst = (*it_v1);
			}
		}
	}

	delValSec = sumDelVals - delValFirst;

	cout << "Deleted : " << delValFirst << " and " << delValSec << endl;

	v.push_back(delValFirst);
	v.push_back(delValSec);

	for(it_v = v.begin(); it_v != v.end(); ++it_v)
		cout << (*it_v) << ' ';
}

int main() 
{
  int N = 5;
  int sum = sumN(N);
  find(sum);

  return 0;
}

