#pragma once
#include <string>
#include "Tarefa.hpp"
#include "Lembrete.hpp"
#include <ctime>
#include <chrono>

class Notificacao {
public:
    Notificacao(const int AntecedenciaMinutos,const int AntecedenciaHoras);
    
    /// @brief Busca pelos minutos de antecedencia da notificaçao 
    ///
    /// @return Inteiro com os minutos
    int getAntecedenciaMinutos() const;

    /// @brief Busca pelas horas de antecedencia da notificaçao
    ///
    /// @return Inteiro com as horas 
    int getAntecedenciaHoras() const;

    /// @brief Muda a antecedencia, em minutos, de uma notificaçao
    ///
    /// @param NovaAntecedencia A antecedencia a ser alterada
    ///
    /// @attention NovaAntecedencia deve variar entre: 1 e 59 minutos.
    void setAntecedenciaMinutos(int NovaAntecedencia);
    
    /// @brief Muda a antecedencia, em horas, de uma notificaçao
    ///
    /// @param NovaAntecedencia A antecedência a ser alterada
    ///
    /// @attention NovaAntecedencia deve variar entre: 1 e 23 horas
    void setAntecedenciaHoras(int NovaAntecedencia);

    /// @brief Compara com o horario real e notifica uma tarefa no horario programado
    ///
    /// @param tarefa A tarefa a ser notificada
    void notificarTarefa(Tarefa* tarefa);
    
    /// @brief Compara com o horario real e notifica um compromisso no horario programado
    ///
    /// @param compromisso O compromisso a ser notificado
    void notificarCompromisso(Compromisso* compromisso);
    
    /// @brief Compara com o horario real e notifica um lembrete no horario programado
    ///
    /// @param lembrete O lembrete a ser notificado
    void notificarLembrete(Lembrete* lembrete);

private:
    int AntecedenciaMinutos; ///< Armazena os minutos de antecedencia da notificaçao (1 a 59) 
    int AntecedenciaHoras; ///< Armazena as horas de antecedencia da notificaçao (1 a 23)
};