#include<iostream>
using namespace std;

class Motor
{
  public:
   int vn;
};

int main()
{
    Motor *p = new Motor();
    (*p).vn = 6;
    cout << (*p).vn << " " << p->vn << " " ;
    p->vn = 12;
    cout << (*p).vn << " " << p->vn ;
    system("PAUSE");
    return 0;
}
