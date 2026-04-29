#include <iostream>

using namespace std;

int main(){

    int i;
    char *nomeMes[] ={"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    enum mes{JAN,FEV,MAR,ABR,MAI,JUN,JUL,AGO,SET,OUT,NOV,DEZ};

    for (i = JAN; i <= DEZ; i++) cout << i+1 << "   " << nomeMes[i] << endl;

    system("PAUSE");
    return 0;
}
