/*
** prova_struct.cpp
** Author: IAV 3CIN
** 28/02/2021
*/

#include <iostream>

using namespace std;

/* Definizione della struttura persona
** La struttura persona è composta da due campi:
** - nome: stringa
** - eta: intero
*/

struct persona
{
    string nome;
    int eta;
};
typedef struct { int uno; int due; } COPPIA;

int main()
{
  struct persona gigi, gigietto;
  COPPIA coppia_eta;
  coppia_eta.uno = 17;
  coppia_eta.due = 7;

  gigi.nome = "luigi";
  gigi.eta = 17;
  gigietto.nome = "luigino";
  gigietto.eta = 7;

  cout << "Gigi si chiama " << gigi.nome << " ed ha " << gigi.eta << " anni " << endl;
  cout << "Gigietto si chiama " << gigietto.nome << " ed ha " << gigietto.eta << " anni " << endl;
  return 0;
}
