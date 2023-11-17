#pragma once
#include <string>
#include <list>
   
class Lembrete {
public:
    Lembrete(const std::string& horario, const std::string& mensagem, const std::string& data);

    std::string getdata() const;
    std::string gethorario() const;
    
    ///@brief Adiciona/Altera uma mensagem especifica de um lembrete
    ///
    /// @param texto        Amensagem a ser mudada/adicionada
    void alterarMensagem (std::string texto);
    

private:
    std::string data;
    std::string horario;
    std::string mensagem;
};

class ListaLembrete {
public:
    ///@brief Adiciona um Lembrete a lista de Lembretes
    ///
    /// @param lembrete   O Lembrete a ser adicionado
    void adicionarLembrete(Lembrete* lembrete);
    
    ///@brief Remove um Lembrete da lista de Lembretes
    ///
    /// @param lembrete   O Lembrete a ser removido
    void removerLembrete(Lembrete* lembrete);
    

private:
    std::list<Lembrete> listadeLembretes;

};
