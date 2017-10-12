
#include <iostream>

using namespace std;

int main( )
{
    cout << "请输入两个数" <<endl;
    int a, b;
    cin >> a >> b;
    if ( a > b )
        while ( a >= b )
        {
            cout << a-- << " ";
        }
    else
        while ( a <= b )
        {
            cout << b-- << " ";
        }
    cout << endl;
    return 0;
}

// 特别要注意的是输入的数一定要是整数，因为之前定义和声明的两个变量就是整型变量。
