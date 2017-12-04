//
// Created by gusta on 30/11/2017.
//

#ifndef TPPOO_FUNCIONARIO_H
#define TPPOO_FUNCIONARIO_H

#include "Pessoa.h"

 class  Funcionario:
        public Pessoa{
     // tem que criar um vetor de funcionarios
        string nome,funcao,tipoFuncionario,usuario,senha;
        double salarioPorHora;
        int qtdFunc=0,horasTrabalhadas; // contara a quantidade de funcionarios cadastrados
public:
    Funcionario(string nome,string funcao,string tipoFuncionario,string usuario,string senha,double salarioPorHora,int horasTrabalhadas){
            this->nome = nome;
            this->funcao = funcao;
            this->tipoFuncionario = tipoFuncionario;
            this->usuario = usuario;
            this->senha = senha;
            this->salarioPorHora = salarioPorHora;
            this->horasTrabalhadas = horasTrabalhadas;
            this->qtdFunc++;
    };
    Funcionario(){
            nome="",funcao="",tipoFuncionario="",usuario="",senha="",salarioPorHora=0;
    };
    ~Funcionario(){}
     void exibirMenu();
     void setNome(string nome); // insere o nome
     string getNome(); // pega o nome
     void setFuncao(string funcao); // insere o cargo
     string getFuncao(); // pega o cargo
     void setTipoFuncionario(string tipoFuncionario);
     string getTipoFuncionario();
     void setUsuario(string usuario);
     string getUsuario();
     void setSenha();
     string getSenha();
     void setSalarioPorHora(double salarioPorHora);
     double getSalarioPorHora();
     void setHorasTrabalhadas(int x);
     int getHorasTrabalhadas();
     int getQuantidadeFuncionarios();
     void cadastrarPonto();
     void exibirSalario(); //em funcao das horas trabalhasdas + bonificacoes
     void cadastrarVendas();
};

#endif //TPPOO_FUNCIONARIO_H
