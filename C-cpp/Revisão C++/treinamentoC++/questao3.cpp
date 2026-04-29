#include <iostream>
using namespace std;

int main()
{
    typedef union teste{
      int i;
      char ch[2];
    };

    teste t1;
    t1.ch[0]=3;
    t1.ch[1]=2;
    cout << (int)t1.ch[0] << "   " << (int)t1.ch[1] << "   " << t1.i 
    << endl;
    system("PAUSE");
    return 0;
}

