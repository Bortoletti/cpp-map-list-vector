#include <iostream>
#include <string>

class Produto
{
  public:
    Produto()
    {
        this->nome = "";
    }
    Produto( std::string nomeParam )
    {
        this->nome = nomeParam;
    }
    std::string show()
    {
        return this->nome;
    }
  private:
    std::string nome;
};