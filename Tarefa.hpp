#pragma once
#include <string>
   
 class Tarefa {
  public:
   Tarefa(std::string& titulo, std::string& descricao, std::string& data,
          unsigned prioridade, std::string& estado);
    
     std::string getTitulo() const;
     unsigned getPrioridade() const;
     std::string getEstado() const; 
   
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
                std::string& descricao, std::string& horario, unsigned prioridade, std::string& estado);
    
    std::string getLocal() const;
    std::string getHorario() const;

  private:
    std::string local;
    std::string horario;
};

