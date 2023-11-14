#pragma once
#include <string>
#include <vector>

   
class Notificacao {
public:
    Notificacao(std::string& horario, std::string& mensagem, std::string& data );

    std::string getdata() const;
    std::string gethorario() const;
    void adicionarMensagem (std::string texto);
    //Adiciona uma mensagem especifica a notificação

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
