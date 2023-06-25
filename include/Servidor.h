#ifndef SERVIDOR_H
#define SERVIDOR_H

#include "Canal.h"
#include "Usuario.h"

class Servidor
{
private:
  int usuarioDonoId;
  std::string nome;
  std::string descricao;
  std::string codigoConvite;
  std::vector<Canal *> canais;
  std::vector<int> participantesIDs;

public:
  Servidor();
  Servidor(std::string nome, int usuarioDonoId);
  /**
   * @brief Retorna o nome do servidor
   * 
   * @return std::string 
   */
  std::string getNome();
  /**
   * @brief Retorna o codigo de convite
   * 
   * @return std::string 
   */
  std::string getCodigoConvite();
  /**
   * @brief Retorna o id do dono
   * 
   * @return int 
   */
  int getIdDono();
  /**
   * @brief Retorna a descrição do servidor
   * 
   * @return std::string 
   */
  std::string getDescricao();
  /**
   * @brief Retorna se o participante está no servidor
   * 
   * @param id 
   * @return true 
   * @return false 
   */
  bool verificarParticipante(int id);
  /**
   * @brief Muda a descrição do servidor
   * 
   * @param descricao 
   */
  void setDescricao(std::string descricao);
  /**
   * @brief Muda o codigo de convite
   * 
   * @param codigoConvite 
   */
  void setCodigoConvite(std::string codigoConvite);
  /**
   * @brief Adiciona um participante no servidor
   * 
   * @param participanteId 
   */
  void adicionarParticipante(int participanteId);
  /**
   * @brief Retorna o vetor de IDs dos participantes
   * 
   * @return std::vector<int> 
   */
  std::vector<int> getPartipantesIDs();
};

#endif