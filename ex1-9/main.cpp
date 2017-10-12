#include <iostream>

using namespace std;

int main( )
{
    int i, sum;
    i=50;
    sum=0;
    while (i<=100)
    {
        sum+=i++;
    }
    cout << "50到100之间的整数之和为" << sum << endl;
    return 0;
}
