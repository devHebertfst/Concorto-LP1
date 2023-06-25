#include "Servidor.h"

Servidor::Servidor() {}

Servidor::Servidor(std::string nome, int usuarioDonoId)
{
  this->nome = nome;
  this->descricao = "";
  this->codigoConvite = "";
  this->usuarioDonoId = usuarioDonoId;
  participantesIDs.push_back(usuarioDonoId);
}

void Servidor::setDescricao(std::string descricao)
{
  this->descricao = descricao;
}

void Servidor::setCodigoConvite(std::string codigoConvite)
{
  this->codigoConvite = codigoConvite;
}

void Servidor::adicionarParticipante(int participanteId)
{
  participantesIDs.push_back(participanteId);
}

std::string Servidor::getNome()
{
  return nome;
}

int Servidor::getIdDono()
{
  return usuarioDonoId;
}

std::string Servidor::getDescricao()
{
  return descricao;
}

std::string Servidor::getCodigoConvite()
{
  return codigoConvite;
}

std::vector<int> Servidor::getPartipantesIDs()
{
  return participantesIDs;
}

bool Servidor::verificarParticipante(int id)
{
  for (auto it = participantesIDs.begin(); it != participantesIDs.end(); ++it)
  {
    if (*it == id)
    {
      return true;
    }
  }
  return false;
}