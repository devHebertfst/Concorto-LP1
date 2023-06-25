#ifndef SISTEMA_H
#define SISTEMA_H
#include "Usuario.h"
#include "Servidor.h"
class Sistema
{
private:
  int userLogadoId;
  std::string serverVisualizado;
  Canal *channelVizualizado;
  std::vector<Usuario> usuarios;
  std::vector<Servidor> servidores;

public:
  Sistema();
  /**
   * @brief Retorna o tamanho do vetor de usuários
   * 
   * @return int 
   */
  int getTamUsuarios();
  /**
   * @brief Adiciona um servidor no sistema
   * 
   * @param server 
   */
  void adicionarServidor(Servidor server);
  /**
   * @brief Remove um servidor do sistema
   * 
   * @param nome 
   */
  void removerServidor(std::string nome);
  /**
   * @brief Adiciona um usuário no sistema
   * 
   * @param user 
   */
  void adicionarUsuario(Usuario user);
  /**
   * @brief Retorna um usuário
   * 
   * @param email 
   * @return Usuario* 
   */
  Usuario *verificarUsuario(std::string email);
  /**
   * @brief Retorna um usuário através do seu id
   * 
   * @param id 
   * @return Usuario* 
   */
  Usuario *getUsuario(int id);
  /**
   * @brief Retorna um servidor apartir de seu nome
   * 
   * @param server 
   * @return Servidor* 
   */
  Servidor *acessarServidor(std::string server);
  /**
   * @brief Define o usuário atualmente logado
   * 
   * @param userLogado 
   */
  void setUsuarioLogado(int userLogado);
  /**
   * @brief Define o servidor vizualizado no momento
   * 
   * @param nome 
   */
  void setServerVizualizado(std::string nome);
  /**
   * @brief Retorna o nome do serviodr vizualizado no momento
   * 
   * @return std::string 
   */
  std::string getServerVizualizado();
  /**
   * @brief Retorna o id do usuário
   * 
   * @return int 
   */
  int getUsuarioLogado();
  /**
   * @brief Imprime todos os servidores do sistema
   * 
   */
  void imprimirServidores();
  /**
   * @brief Imprime todos os participantes do sistema
   * 
   * @param nome 
   */
  void imprimirParticipantes(std::string nome);
};

#endif