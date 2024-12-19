#include<animais.h>
#include <iostream>


animais::animais(){
    cout << "Gerando construtor" << std::endl;
};

char animais::setNome(char nome_){
    nome_= nome;
}

char animais::getNome(){
    return nome;
}



