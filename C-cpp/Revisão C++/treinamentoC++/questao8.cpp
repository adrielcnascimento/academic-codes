#include <iostream>
#include<string>
using namespace std;

void altera(struct emp*);

struct emp
{
    char nome[20];
    int idade;
};

int main()
{
    struct emp e = {"Nayana", 18};
    altera(&e);
    cout << e.nome << "   " << e.idade;
    system("PAUSE");
    return 0;
}

void altera(struct emp *p)
{
     p ->idade=p->idade+2;
}
