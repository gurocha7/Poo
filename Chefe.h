//
// Created by gusta on 30/11/2017.
//

#ifndef TPPOO_CHEFE_H
#define TPPOO_CHEFE_H

#include "Pessoa.h"
#include "Funcionario.h"

class Chefe:
        public Pessoa{

       static string usuario, senha;
       int acao;
public:
    Chefe(){ usuario="",senha="";};
    Chefe(string usuario,string senha){
        this->usuario = usuario;
        this->senha = senha;
    }; // costrutor de chefe
    ~Chefe(){} // destrutor de chefe

    void exibirMenu(){}; // exibe as acoes que o chefe pode realizar
    void controle();
    void cadastrarFuncionario();
    void funcionariosCadastrados();
    void checarPonto(); // horas extras + horas trabalhadas + horas pendentes
    double calcularSalario(); // horas trabalhadas + bonificacoes

};

#endif //TPPOO_CHEFE_H
