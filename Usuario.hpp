#pragma once
#include <string>
   
 class Usuario{
  public:
   Usuario(std::string& nome, std::string& sobrenome, std::string& idade,
          std::string& email);
    
     std::string getnome() const;
     std::string getemail() const; 
    
    /// @brief Muda o email de um usuario
    ///
    /// @param texto       o Email a ser alterado
     void mudaremail (std::string texto);
      
  private:
     std::string nome;
     std::string sobrenome;
     std::string idade;
     std::string email;

};
