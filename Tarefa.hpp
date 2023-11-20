#pragma once
#include <string>
   
 class Tarefa {
  public:
   Tarefa(std::string& titulo, std::string& descricao, std::string& data,
          unsigned prioridade, std::string& estado);
    
     std::string getTitulo() const;
     unsigned getPrioridade() const;
     std::string getEstado() const; 
   
    /// @brief Muda o titulo de uma Tarefa/Compromisso
    ///
    /// @param NovoTitulo       O novo titulo a ser colocado
    void setTitulo(const std::string& novoTitulo);

    /// @brief Muda a descrição de uma Tarefa/Compromisso
    ///
    /// @param NovaDescricao       A nova descrição a ser colocada
    void setDescricao(const std::string& novaDescricao);

    /// @brief Muda a data de uma Tarefa/Compromisso
    ///
    /// @param NovaData       A nova data a ser colocada
    ///
    /// @attention A data informada deve estar no formato:
    /// DD/MM/AAAA
    ///
    void setData(const std::string& novaData);

    /// @brief Muda a prioridade da Tarefa/Compromisso
    ///
    /// @param NovaPrioridade       A nova prioridade a ser colocada
    ///
    /// @attention A prioridade varia entre: 
    /// 1 --> menos importante ; 2 --> importante; 3 --> muito importante.
    void setPrioridade(unsigned novaPrioridade);

    /// @brief Muda o estado de uma Tarefa/Compromisso
    ///
    /// @param NovoEstado       O novo estado a ser colocado
    ///
    /// @attention O Estado varia entre:
    /// feito ; em progresso; não feito.
    void setEstado(const std::string& novoEstado);
   
  private:
     std::string titulo;
     std::string descricao;
     std::string data;
     unsigned prioridade;
     std::string estado;
      //3 tipos de estado: feito (deletar em seguida); em progresso; não feito (alertar)

  
 };

class Compromisso : public Tarefa {
  public:
    Compromisso(std::string& data, std::string& local,std::string& titulo,
                std::string& descricao, std::string& horario, std::string& estado);
    
    std::string getLocal() const;
    std::string getHorario() const;

    /// @brief Muda o local de um Compromisso
    ///
    /// @param NovoLocal       O novo local a ser colocado 
    void setLocal(const std::string& novoLocal);

    /// @brief Muda o horário de um Compromisso
    ///
    /// @param NovoHorario       O novo horário a ser colocado
    ///
    /// @attention O Horario informado deve estar no formato:
    /// HH:MM:SS
    ///
    void setHorario(const std::string& novoHorario);

  private:
    std::string local;
    std::string horario;
};

