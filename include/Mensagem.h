#ifndef MENSAGEM_H
#define MENSAGEM_H

#include <iostream>
#include <string>

class Mensagem
{
private:
  std::string dataHora;
  int enviadaPor;
  std::string conteudo;

public:
  std::string getDataHora();
  int getEnviadaPor();
  std::string getConteudo();
};

#endif