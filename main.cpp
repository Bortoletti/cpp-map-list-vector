#include <iostream>
#include <map>
#include <vector>
#include <list>
#include "Produto.cpp"

int main()
{
    //***************************************************************
    //                         MAP
    //***************************************************************

    std::cout << std::endl << "PRODUTOS - MAP";

    std::map<std::string, Produto> mapa;

    mapa["001"] = Produto("Produto 1");
    mapa["002"] = Produto("prod2");
    mapa["003"] = Produto("produto-003");
    
    std::cout << std::endl << mapa["001"].show();

    Produto p = mapa["002"];
    std::cout << std::endl << p.show();

    for( auto m: mapa )
    {
      Produto p = m.second;
      std::cout << std::endl << m.first << "-" << p.show();
    }

    std::cout << '\n';


    //***************************************************************
    //                         VECTOR
    //***************************************************************
    std::cout << std::endl << "PRODUTOS - VECTOR";
    std::vector<Produto> lista;

    lista.push_back( Produto("Prod 1") );
    lista.push_back( Produto("Prod 2") );
    lista.push_back( Produto("Prod 3") );

    for( auto p: lista )
    {
      std::cout << std::endl << ((Produto)p).show();
    }
    //***************************************************************
    //                         LISTA
    //***************************************************************
    std::cout << std::endl << "PRODUTOS - LIST";
    std::list<Produto> produtos;
    produtos.push_back( Produto("Prod 001") );
    produtos.push_back( Produto("Prod 002") );
    produtos.push_back( Produto("Prod 003") );
    for( auto p: produtos )
    {
      std::cout << std::endl << ((Produto)p).show();
    }



    //***************************************************************
    //                         FIM
    //***************************************************************
    std::cout << std::endl;

  return 0;
}