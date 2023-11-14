#pragma once
#include <string>
#include "Tarefa.hpp"
   
class Lista {
public:
    Lista();
    ~Lista();

    void adicionarTarefa(Tarefa* tarefa);
    void adicionarCompromisso(Compromisso* compromisso);
    void removerTarefa(Tarefa* tarefa);
    void removerCompromisso(Compromisso* compromisso);

private:
    struct Node {
        Tarefa* tarefa;
        Compromisso* compromisso;
        Node* proximo;
    };

    Node* cabeca;
};