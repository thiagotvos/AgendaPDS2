#pragma once
#include <string>
#include "Tarefa.hpp"
#include "Lembrete.hpp"
#include <ctime>
#include <chrono>

class Notificacao {
public:
    Notificacao(const int AntecedenciaMinutos,const int AntecedenciaHoras);
    
    int getAntecedenciaMinutos() const;
    int getAntecedenciaHoras() const;

    /// @brief Muda a antecedência, em minutos, de uma notificação
    ///
    /// @param NovaAntecedencia       A antecedência a ser alterada
    ///
    /// @attetion NovaAntecedencia deve variar entre:
    /// 1 e 59 minutos.
    void setAntecedenciaMinutos(int NovaAntecedencia);
    
    /// @brief Muda a antecedência, em horas, de uma notificação
    ///
    /// @param NovaAntecedencia       A antecedência a ser alterada
    ///
    /// @attetion NovaAntecedencia deve variar entre:
    /// 1 e 23 horas.
    void setAntecedenciaHoras(int NovaAntecedencia);

    /// @brief Compara com o horário real e notifica uma Tarefa
    ///com o tempo de antecedência ou no horário programado.
    ///
    /// @param tarefa       A tarefa a ser notificada.
    void notificarTarefa(Tarefa* tarefa);
    
    /// @brief Compara com o horário real e notifica um Compromisso
    ///com o tempo de antecedência ou no horário programado.
    ///
    /// @param compromisso       O compromisso a ser notificado.
    void notificarCompromisso(Compromisso* compromisso);
    
    /// @brief Compara com o horário real e notifica um Lembrete
    ///com o tempo de antecedência ou no horário programado.
    ///
    /// @param lembrete       O lembrete a ser notificado.
    void notificarLembrete(Lembrete* lembrete);

private:
    int AntecedenciaMinutos;
    // de 1 a 59 min 
    int AntecedenciaHoras;
    // de 1 a 23 horas
};

