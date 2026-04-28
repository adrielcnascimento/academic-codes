#include <stdio.h>
#include <tchar.h>
#include <time.h>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void print_time(time_t t)
{
  tm* formatted_time;

  //
  // essa função "quebra" essa quantidade de segundos e dia, mês, ano, etc
  //
  formatted_time = gmtime(&t);

  //
  // isso vai mostrar algo como "2009/12/07 14:42:57"
  // note que é necessário somar 1900 na data para pegar o ano corrente
  //
  cout << setfill('0') << 
    setw(4) << formatted_time->tm_year+1900 << "/" <<
    setw(2) << formatted_time->tm_mon+1 << "/" <<
    setw(2) << formatted_time->tm_mday << " " <<
    setw(2) << formatted_time->tm_hour << ":" << 
    setw(2) << formatted_time->tm_min << ":" << 
    setw(2) << formatted_time->tm_sec << endl;
}


int main()
{
  time_t t;

  //
  // pega o número de segundos desde 1970
  //
  t = time(NULL);

  //
  // mostra na tela, formatado
  //
  print_time(t);

  //
  // pega o fuso horário da máquina para pegar o horário local
  // ao invés de GMT. 
  //
  long timezone;

  _tzset(); // carrega as configurações de fuso

  get_timezone(&timezone); // lê a diferença do fuso

  cout << timezone << endl;

  //
  // ajusta o horário pelo fuso
  //
  t -= timezone;

  print_time(t);

  //
  // avança da data em 2 dias
  //
  t += 48 * 60 * 60;

  //
  // mostra novamente
  //
  print_time(t);

  return 0;
}

