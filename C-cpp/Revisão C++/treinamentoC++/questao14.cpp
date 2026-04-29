#include<iostream>
#include<string.h>
using namespace std;

class Tolinha2
{
    public:
    void GetValor(char *s, int x, int y)
    {
        int i = 0;
        for (i = x-1; y>0; i++)
        {
            cout<< s[i];
            y--;
        }
    }
};

int main()
{
    Tolinha2 objTol;
    objTol.GetValor((char*)"Bem-vindo!", 1, 3);
    system("PAUSE");
    return 0;
}
