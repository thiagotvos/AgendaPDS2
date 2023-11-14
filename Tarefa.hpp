#pragma once
#include <string>
   
 class Tarefa {
  public:
   Tarefa(std::string titulo, std::string descricao, unsigned dia,
          unsigned mes, unsigned ano, unsigned prioridade, std::string estado);
    
     std::string getTitulo() const;
     unsigned getPrioridade() const;
     std::string getEstado() const; 
   
  private:
     std::string titulo;
     std::string descricao;
     unsigned dia;
     unsigned mes;
     unsigned ano; 
     unsigned prioridade;
     std::string estado;
      //3 tipos de estado: feito (deletar em seguida); em progresso; não feito (alertar)

  
 };

class Compromisso : public Tarefa {
  public:
    Compromisso(unsigned hora, unsigned minutos, unsigned segundos, std::string local,
                 std::string titulo, std::string descricao, unsigned dia,
                 unsigned mes, unsigned ano, unsigned prioridade,std::string estado);
    
    std::string getLocal() const;
    unsigned getHora() const;
    unsigned getMinutos() const;
    unsigned getSegundos() const;

  private:
    std::string local;
    unsigned hora;
    unsigned minutos;
    unsigned segundos;

};

