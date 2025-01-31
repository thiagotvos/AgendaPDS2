#pragma once
#include <string>
#include <list>
   
class Lembrete {
public:
    Lembrete(const std::string& horario, const std::string& mensagem, const std::string& data);

    /// @brief Busca pela data do lembrete
    ///
    /// @return String da data 
    std::string getdata() const;
    
    /// @brief Busca pelo horario do lembrete
    ///
    /// @return String do horario
    std::string getHorario() const;

    /// @brief Busca pela mensagem do lembrete
    ///
    /// @return String da mensagem
    std::string getMensagem() const;
    
    /// @brief Adiciona/Altera uma mensagem especifica de um lembrete
    ///
    /// @param texto A mensagem a ser mudada/adicionada
    void alterarMensagem (std::string texto);
    
private:
    std::string _data; ///< Armazena a data do lembrete
    std::string _horario; ///< Armazena o horario do lembrete
    std::string _mensagem; ///< Armazena a mensagem do lembrete
};

class ListaLembrete {
public:
    /// @brief Adiciona um Lembrete a lista de Lembretes
    ///
    /// @param lembrete O lembrete a ser adicionado
    void adicionarLembrete(Lembrete* lembrete);
    
    /// @brief Remove um lembrete da lista
    ///
    /// @param lembrete O lembrete a ser removido
    void removerLembrete(Lembrete* lembrete);

    /// @brief Imprime todos lembretes da lista 
    void verLembretes();
    
private:
    std::list<Lembrete> _listadeLembretes; ///< Armazena todos os lembretes ativos
};
