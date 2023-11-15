#pragma once
#include <string>
#include <vector>
#include "Tarefa.hpp"
#include "Usuario.hpp"
   
class Notificacao {
public:
    Notificacao(std::string& horario, std::string& mensagem, std::string& data );

    std::string getdata() const;
    std::string gethorario() const;
    
    void adicionarMensagem (std::string texto);
    //Adiciona uma mensagem especifica a notificação
    void notificarTarefa (Tarefa* tarefa, Usuario* usuario);
    //Adiciona Notificação com base em uma tarefa de um usuario
    void notificarCompromisso (Compromisso* compromisso, Usuario* usuario);
    //Adiciona Notificação com base em um compromisso de um usuario
    void notificar (Notificacao* notificacao);
    //imprime a notificação na tela

private:
    std::string data;
    std::string horario;
    std::string mensagem;

};

class ListaNotificacao {
public:
    void adicionarNotificacao(Notificacao* notificacao);
    //adiciona a notificação a lista de notificações

    void removerNotificacao(Notificacao* notificacao);
    //remove a notificação da lista de notificações
private:
        std::vector<Notificacao*> listaNotificacao;

};
