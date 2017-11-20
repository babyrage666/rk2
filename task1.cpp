#include <iostream>
using namespace std;

void merge(size_t n, size_t m)
{
	int *a = new int[n];   
    int *b = new int[m];

	cout<<"fill both the arrays(using space)\nn array: ";
    for (int i = 0; i < n; i++) 
		cin >> a[i];
	cout<<"m array: ";
    for (int i = 0; i < m; i++) 
		cin >> b[i];

    int *result = new int[n + m];  

    int i = 0, j = 0;   
    int index = 0;

    while (i < n && j < m) 
	{
        if (a[i] < b[j]) 
		{ 
			result[index] = a[i]; 
			i++; 
		}
        else 
		{ 
			result[index] = b[j];
			j++; 
		}
        index++;
    }

    while (i < n) 
	{ 
		result[index] = a[i]; 
		index++; 
		i++; 
	}
    while (j < m) 
	{ 
		result[index] = b[j]; 
		index++; 
		j++; 
	}

    for (int k = 0; k < n + m; ++k)
			cout << result[k] << ' ';
}
int main()
{
	cout<<"type n & m size: ";
    size_t n, m;
    cin >> n;
    cin >> m;

	merge(n,m);	
    return 0;
}