#ifndef CANAL_H
#define CANAL_H

#include <iostream>
#include <string>
#include <vector>
#include "Mensagem.h"

class Canal
{
private:
  std::string nome;

public:
  std::string getNome();
};

class CanalTexto : public Canal
{
private:
  std::vector<Mensagem> mensagens;
};

class CanalVoz : public Canal
{
private:
  Mensagem ultimaMensagem;
};

#endif