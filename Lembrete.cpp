#include "Lembrete.hpp"
#include <string>

std::string Lembrete::getdata() const {

    return this->data; ///< Retorna a data
}

std::string Lembrete::gethorario() const {

    return this->horario; ///< Retorna o horario
}

void Lembrete::alterarMensagem(std::string nova_mensagem) {
    
    /// Verifica se a nova mensagem esta vazia, ou se a nova mensagem eh igual a mensagem atual
    if (!nova_mensagem.empty() || nova_mensagem != this->mensagem) {

        this->mensagem = nova_mensagem; ///< Atribui a nova mensagem
    }
}

void ListaLembrete::adicionarLembrete(Lembrete* lembrete) {
    
    listadeLembretes.push_back(*lembrete); ///< Adicionando o lembrete na lista
}

void ListaLembrete::removerLembrete(Lembrete* lembrete) {

    listadeLembretes.remove(*lembrete); ///< Removendo o lembrete da lista
}