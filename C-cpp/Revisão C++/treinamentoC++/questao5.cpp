#include <iostream>

using namespace std;

int main()
{
    enum days {SEG=-1, TER, QUA=6, QUI, SEX, SAB};
    
    cout << SEG << "   " << TER << "   " << QUA << "   " << QUI << "   " << SEX << "   " << SAB;
    system("PAUSE");
    return 0;
}

