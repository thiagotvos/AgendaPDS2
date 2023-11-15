#pragma once
#include <string>
   
 class Usuario{
  public:
   Usuario(std::string& nome, std::string& sobrenome, std::string& idade,
          std::string& email);
    
     std::string getnome() const;
     std::string getemail() const; 

     void mudaremail (std::string texto);
      
  private:
     std::string nome;
     std::string sobrenome;
     std::string idade;
     std::string email;

};