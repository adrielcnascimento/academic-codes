#include<iostream>
using namespace std;

class Tolinha1
{
    public:
    struct Tolinha
    {
        int   x;
        float y;
        void MinhaFuncao(void)
        {
            y = x = (x = 4*4);
            y = --y * y;
        }
        void Exibe()
        {
            cout<< x << endl;
        }
    }B;
}I;

int main()
{
    I.B.Exibe();
    system("PAUSE");
    return 0;
}
