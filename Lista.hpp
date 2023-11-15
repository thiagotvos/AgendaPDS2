#pragma once
#include <string>
#include "Tarefa.hpp"
#include <list>

class ListaTarefa {
public:
    ListaTarefa();
    ~ListaTarefa();

    void adicionarTarefa(Tarefa* tarefa);
    void removerTarefa(Tarefa* tarefa);
    void verTarefas();

private:
    std::list<Tarefa> listadeTarefa;
};

class ListaCompromisso {
public:
    ListaCompromisso();
    ~ListaCompromisso();

    void adicionarCompromisso(Compromisso* compromisso);
    void removerCompromisso(Compromisso* compromisso);
    void verCompromissos();

private:
    std::list<Compromisso> listadeCompromisso;
};