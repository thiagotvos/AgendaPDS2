#include "Lembrete.hpp"
#include <string>

std::string Lembrete::getdata() const {

    // Retorna a data 
    return this->data;
}

std::string Lembrete::gethorario() const {

    // Retorna o horario
    return this->horario;
}

void Lembrete::alterarMensagem(std::string nova_mensagem) {
    
    // Verifica se a nova mensagem esta vazia, ou se a nova mensagem eh igual a mensagem atual
    if (!nova_mensagem.empty() || nova_mensagem != mensagem) {

        // Atribui a nova mensagem
        this->mensagem = nova_mensagem;
    }
}

void ListaLembrete::adicionarLembrete(Lembrete* lembrete) {
    
    // Adicionando o lembrete na lista
    listadeLembretes.push_back(*lembrete);
}

void ListaLembrete::removerLembrete(Lembrete* lembrete) {

    // Removendo o lembrete da lista
    listadeLembretes.remove(*lembrete);
}