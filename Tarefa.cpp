#include "Tarefa.hpp"

std::string Tarefa::getTitulo() const {

    // Retorna o titulo
    return this->titulo;
}

unsigned Tarefa::getPrioridade() const {

    // Retorna a prioridade
    return this->prioridade;
}

std::string Tarefa::getEstado() const {

    // Retorna o estado
    return this->estado;
}

void Tarefa::setTitulo(const std::string& novoTitulo) {

    // Limite de caracteres para o novo titulo
    const size_t MAX_CARACTERES = 50;

    // Verifica se o novo titulo eh valido
    if (!novoTitulo.length() >= MAX_CARACTERES || !novoTitulo.empty()) {

        // Atribui o novo titulo
        this->titulo = novoTitulo;
    }
    else {

        // titulo invalido
    }
}

void Tarefa::setDescricao(const std::string& novaDescricao) {

    // Limite de caracteres para a nova descricao
    const size_t MAX_CARACTERES = 120;

    // Verifica se a nova descricao eh valida
    if (!novaDescricao.length() || !novaDescricao.empty()) {

        // Atribui a nova descricao
        this->descricao = novaDescricao;
    }
    else {
        
        // descricao invalida
    }
}

void Tarefa::setData(const std::string& novaData) {
    
    // A fazer
}

void Tarefa::setPrioridade(const unsigned novaPrioridade) {
    
    // A fazer
}

void Tarefa::setEstado(const std::string& novoEstado) {
    
    // Verifica se o novo estado eh valido
    if (novoEstado == "feito" || novoEstado == "em progresso" || novoEstado == "não feito") {
        
        // Atribui o novo estado
        this->estado = novoEstado;
    }
}
