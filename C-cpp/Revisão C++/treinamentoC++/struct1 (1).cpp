#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Filmes {
  string titulo;
  int ano;
} f1, f2;

void ExibeFilme(Filmes filme); // Função para imprimir f1 e f2

int main ()
{
  string s;

  f1.titulo = "O Expresso Polar";
  f1.ano = 2004;

  cout << "Digite o titulo: ";
  getline (cin,f2.titulo);  // Pode ser substituida por "cin >>"
  cout << "Digite o ano: ";
  getline (cin,s);    // Pode ser substituida por "cin >>"
  stringstream(s) >> f2.ano; // Comando usado para apenas testar se "s" é uma string

  cout << "O primeiro filme configurado na base foi:\n ";
  ExibeFilme(f1);
  cout << "O filme digitado foi:\n ";
  ExibeFilme(f2);
  
  return 0;
}

void ExibeFilme(Filmes filme)
{
  cout << filme.titulo;
  cout << " (" << filme.ano << ")\n";
}
