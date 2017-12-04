//
// Created by gusta on 30/11/2017.
//

#ifndef TPPOO_PESSOA_H
#define TPPOO_PESSOA_H

#include <iostream>
#include <cstring>
using  namespace std;


class Pessoa{
    int tipo;
public:


    Pessoa() {this->tipo = 1;}// se nao for passado o tipo, inicia com 1
    Pessoa(int tipo,string usuario,string senha) {
        this->tipo = tipo;// pode passar o tipo direto na criacao de pessoa
    }
    ~Pessoa(){};
    void setTipo(int op); // insere o tipo da pessoa
    int getTipo();
    void informeTipo();//pergunta o tipo para o usuario
};

#endif //TPPOO_PESSOA_H
