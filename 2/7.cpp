#include <iostream>

int stonetolb(int sts);


int main(void){
	using namespace std;
	
	cout << "Enter the weight in stone: ";
	int stone;
	cin >> stone;

	int pounds = stonetolb(stone);

	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;

	return 0;
}

// 1 stone = 14 lbs
int stonetolb(int sts)
{
	return 14 * sts;
}
