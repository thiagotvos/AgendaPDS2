#include "Exceções.hpp"
#include <iostream>

void handleExcecao(const std::exception& e) {
    
    std::cerr << "Erro: " << e.what() << std::endl;
}