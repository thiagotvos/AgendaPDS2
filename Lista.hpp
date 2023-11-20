#pragma once
#include <string>
#include "Tarefa.hpp"
#include <list>

class ListaTarefa {
public:
    ListaTarefa();
    ~ListaTarefa();

    /// @brief Adiciona uma Tarefa a Lista de Tarefas
    ///
    /// @param tarefa       a Tarefa a ser adicionada
    void adicionarTarefa(Tarefa* tarefa);

    /// @brief Remove uma Tarefa da Lista de Tarefas
    ///
    /// @param tarefa       a Tarefa a ser removida
    void removerTarefa(Tarefa* tarefa);

    /// @brief Mostra a Lista de Tarefas
    ///
    void verTarefas();

private:
    std::list<Tarefa> listadeTarefa;
};

class ListaCompromisso {
public:
    ListaCompromisso();
    ~ListaCompromisso();

    /// @brief Adiciona um Compromisso a Lista de Compromissos
    ///
    /// @param compromisso       O compromisso a ser adicionado.
    void adicionarCompromisso(Compromisso* compromisso);

    /// @brief Remove um Compromisso da Lista de Compromissos
    ///
    /// @param compromisso       O compromisso a ser removido.
    void removerCompromisso(Compromisso* compromisso);

    /// @brief Mostra os Compromisso da Lista de Compromissos
    ///
    void verCompromissos();

private:
    std::list<Compromisso> listadeCompromisso;
};
