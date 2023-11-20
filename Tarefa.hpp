#pragma once
#include <string>
#include <list>
   
class Tarefa {
public:
  Tarefa(std::string& titulo, std::string& descricao, std::string& data, unsigned prioridade, std::string& estado);
    
  /// @brief Busca pelo titulo da tarefa 
  ///
  /// @return String do titulo
  std::string getTitulo() const;
    
  /// @brief Busca pela prioridade da tarefa
  ///
  /// @return Unsigned (1, 2 ou 3)
  unsigned getPrioridade() const;
    
  /// @brief Busca pelo estado da tarefa
  ///
  /// @return String do estado (feito, em progresso, nao feito)
  std::string getEstado() const; 
  
  /// @brief Muda o titulo de uma tarefa
  ///
  /// @param novoTitulo O novo titulo a ser colocado
  void setTitulo(const std::string& novoTitulo);

  /// @brief Muda a descrição de uma tarefa
  ///
  /// @param novaDescricao A nova descrição a ser colocada
  void setDescricao(const std::string& novaDescricao);

  /// @brief Muda a data de uma tarefa
  ///
  /// @param novaData A nova data a ser colocada
  ///
  /// @attention A data informada deve estar no formato: DD/MM/AAAA
  void setData(const std::string& novaData);

  /// @brief Muda a prioridade de uma tarefa
  ///
  /// @param novaPrioridade A nova prioridade a ser colocada
  ///
  /// @attention A prioridade varia entre: 
  /// 1 --> menos importante, 2 --> importante, 3 --> muito importante.
  void setPrioridade(unsigned novaPrioridade);

  /// @brief Muda o estado de uma tarefa
  ///
  /// @param novoEstado O novo estado a ser colocado
  ///
  /// @attention O estado varia entre: feito deletar em seguida), em progresso, não feito (alertar).
  void setEstado(const std::string& novoEstado);
   
private:
  std::string titulo; ///< Armazena o titulo da tarefa 
  std::string descricao; ///< Armazena a descricao da tarefa
  std::string data; ///< Armazena a data (em string) da tarefa 
  unsigned prioridade; ///< Armazena a prioridade da tarefa 
  std::string estado; ///< Armazena o estado da tarefa 
 };

class Compromisso : public Tarefa {
public:
  Compromisso(std::string& data, std::string& local,std::string& titulo, std::string& descricao, std::string& horario, std::string& estado);

  /// @brief Busca pelo local do compromisso
  ///
  /// @return String do local  
  std::string getLocal() const;

  /// @brief Busca pelo horario do compromisso
  ///
  /// @return String do horario 
  std::string getHorario() const;

  /// @brief Muda o local de um compromisso
  ///
  /// @param novoLocal O novo local a ser colocado 
  void setLocal(const std::string& novoLocal);

  /// @brief Muda o horário de um compromisso
  ///
  /// @param novoHorario O novo horario a ser colocado
  ///
  /// @attention O horario informado deve estar no formato: HH:MM:SS
  void setHorario(const std::string& novoHorario);

private:
  std::string local; ///< Armazena o local do compromisso
  std::string horario; ///< Armazena o horario do comprimisso
};