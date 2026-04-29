#include <iostream>

using namespace std;

int main()
{
    struct value{
        int bit1:1;
        int bit3:4;
        int bit4:4;
    }bit={2, 5, 13};

    cout << bit.bit1 << " " << bit.bit3 << " " << bit.bit4;
    system("PAUSE");
    return 0;
}

