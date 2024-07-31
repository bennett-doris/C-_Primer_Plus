#include <iostream>
#include <climits>

int main(void)
{
	using namespace std;

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LONG_LONG_MAX;

	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;


	cout << "Int Maximum values: " << n_int << endl;
	cout << "Short Maximum values: " << n_short << endl;
	cout << "Long Maximum values: " << n_long << endl;
	cout << "Long Long Maximum values: " << n_llong << endl;


	return 0;
}
