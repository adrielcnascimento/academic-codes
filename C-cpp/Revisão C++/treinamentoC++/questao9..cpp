#include<iostream>
using namespace std;

class Bobinha1
{
    static int x;
    public:
    static void SetValor(int xx)
    {
        x = xx;
    }
    void ImprTela()
    {
        cout<< x;
    }
};

int Bobinha1::x = 0;

int main()
{
    Bobinha1:: SetValor(33);
    Bobinha1:: ImprTela();
    system("PAUSE");
    return 0;
}
