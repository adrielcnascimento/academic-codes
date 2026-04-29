#include<iostream>
using namespace std;

class Bobinha2
{
static int y; 
public:
static void SetValor(int yy)
{
  y = yy; 
}
static void Mostra() 
{
  cout<< y << endl;
}
};

int Bobinha2::y = 0;

int main()
{
    Bobinha2:: SetValor(44);
    Bobinha2:: Mostra();
    system("PAUSE");
    return 0;
}

