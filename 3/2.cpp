#include <iostream>
#include <climits>


int main(void)
{
    using namespace std;

    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " 
        << sam 
        << " dollars and Sue has " 
        << sue 
        << " dollars." 
        << endl;

    cout << "Add $1 to each account." << endl;

    cout << "Sam has " 
        << ++sam
        << " dollars and Sue has " 
        << ++sue
        << " dollars." 
        << endl;


    return 0;
}