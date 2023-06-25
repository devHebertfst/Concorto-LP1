#include "Sistema.h"
#include <algorithm>
Sistema::Sistema() {}

void Sistema::adicionarServidor(Servidor server)
{
  servidores.push_back(server);
}

void Sistema::removerServidor(std::string nome)
{
  servidores.erase(std::remove_if(servidores.begin(), servidores.end(), [&nome](Servidor &servidor)
                                  { return servidor.getNome() == nome; }),
                   servidores.end());
}

void Sistema::adicionarUsuario(Usuario user)
{
  usuarios.push_back(user);
}

Usuario *Sistema::verificarUsuario(std::string email)
{
  for (auto it = usuarios.begin(); it != usuarios.end(); ++it)
  {
    if (it->getEmail() == email)
    {
      return &(*it);
    }
  }

  return nullptr;
}

Servidor *Sistema::acessarServidor(std::string server)
{
  for (auto it = servidores.begin(); it != servidores.end(); ++it)
  {
    if (it->getNome() == server)
    {
      return &(*it);
    }
  }

  return nullptr;
}

void Sistema::setUsuarioLogado(int userLogado)
{
  this->userLogadoId = userLogado;
}

int Sistema::getUsuarioLogado()
{
  return userLogadoId;
}

void Sistema::imprimirServidores()
{
  if (servidores.size() != 0)
  {
    for (auto it = servidores.begin(); it != servidores.end(); ++it)
    {
      std::cout << it->getNome() << std::endl;
    }
  }
  else
  {
    std::cout << "Não há servidores cadastrados no momento" << std::endl;
  }
}

void Sistema::imprimirParticipantes(std::string nome)
{
  Servidor *server = acessarServidor(nome);
  if (server != nullptr)
  {
    for (int participantId : server->getPartipantesIDs())
    {
      Usuario *participant = nullptr;
      for (auto it = usuarios.begin(); it != usuarios.end(); ++it)
      {
        if (it->getId() == participantId)
        {
          participant = &(*it);
          break;
        }
      }
      if (participant != nullptr)
      {
        std::cout << participant->getNome() << std::endl;
      }
    }
  }
}

void Sistema::setServerVizualizado(std::string nome)
{
  this->serverVisualizado = nome;
}

std::string Sistema::getServerVizualizado()
{
  return serverVisualizado;
}

Usuario *Sistema::getUsuario(int id)
{
  for (auto it = usuarios.begin(); it != usuarios.end(); ++it)
  {
    if (it->getId() == id)
    {
      return &(*it);
    }
  }

  return nullptr;
}

int Sistema::getTamUsuarios()
{
  return usuarios.size();
}