////////////////////////////////////////////////////////////////////////////////
//
// Este programa consome uma api desenvolvida em PHP que por sua vez consome
// uma API externa com os valor das  cotações das principais moedas vigentes
//
// Aplicação didática para uso no curso de lógica de programação
// Autor: Wanderlei Silva do Carmo
// Versão: 20230928.2254
//
//////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <stdio.h>
#include <string>

#include "./app.hpp"

using namespace std;

float valorEmReais = 1.00;
float valorEmDolares = 1.00;
float valorEmEuros = 1.00;
float valorEmBitcoins = 1.00;

char escolha;

 
int main(void)
{


  printf("%s\n", "Consumindo API - Conversão entre moedas");
  printf("%s\n",  "=======================================");


  cout << "\nValor do dolar do dia....:" << valorDolar();
  cout << "\nValor do euro do dia.....:" << valorEuro();
  cout << "\nValor do bitcoin do dia..:" << valorBitcoin() << endl;
  

  cout << "\n=======================================";   
  cout << "\n=  Escolha qual ao moeda de origem    ="; 
  cout << "\n=======================================" << endl;

  cout << " D - Dolars " << endl;
  cout << " E - Euros " << endl;
  cout << " B - Bitcoins " << endl;

  cout << "\nTecle a opção desejada: ";
  std::cin >> escolha;


  if ( escolha == 'D' ){

      cout << "\nEntre com o valor em dolares:";
      std::cin >> valorEmDolares;

      valorEmReais =  valorEmDolares * std::stof( valorDolar() );

  } else if ( escolha == 'E' ){

      cout << "\nEntre com o valor em euros:";
      std::cin >> valorEmEuros;
      valorEmReais = valorEmEuros * std::stof(valorEuro());

  } else {

      cout << "\nEntre com o valor em Bitcoins:";
      std::cin >> valorEmBitcoins;
      
      valorEmReais = valorEmBitcoins * std::stof(valorBitcoin());

  } 

  cout << "\nValor convertido para reais: R$ " <<  valorEmReais << endl;

 
 
  return 0;

}
