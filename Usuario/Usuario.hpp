#pragma once
#include <string>
   
class Usuario{
public:
   Usuario(std::string& nome, std::string& sobrenome, std::string& idade, std::string& email);
    
   /// @brief Busca pelo nome do usuario 
   ///
   /// @return String do nome
   std::string getnome() const;
   
   /// @brief Busca pelo email do usuario 
   ///
   /// @return String do email
   std::string getemail() const; 
    
   /// @brief Muda o email de um usuario
   ///
   /// @param texto O email a ser alterado
   void mudaremail (std::string texto);
      
private:
   std::string _nome; ///< Armazena o primeiro nome do usuario
   std::string _sobrenome; ///< Armazena o sobrenome do usuario
   std::string _idade; ///< Armazena a idade do usuario
   std::string _email; ///< Armazena o email do usuario
};
