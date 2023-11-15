#pragma once
#include <string>
#include <list>
   
class Lembrete {
public:
    Lembrete(const std::string& horario, const std::string& mensagem, const std::string& data);

    std::string getdata() const;
    std::string gethorario() const;
    
    void alterarMensagem (std::string texto);
    //Adiciona uma mensagem especifica a notificação

private:
    std::string data;
    std::string horario;
    std::string mensagem;
};

class ListaLembrete {
public:
    void adicionarLembrete(Lembrete* lembrete);
    //adiciona a notificação a lista de notificações

    void removerLembrete(Lembrete* lembrete);
    //remove a notificação da lista de notificações

private:
    std::list<Lembrete> listadeLembretes;

};