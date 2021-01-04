#include <iostream>

using namespace std;

int main()
{   

    bool result = 101 & ~(111);
    result <<= result;
    int novo = result ? 12 : 15;
    cout
        << result<<novo<<endl;

    return 0;
}
