//
// Created by gusta on 30/11/2017.
//

#include "Funcionario.h"

void Funcionario::setNome(string nome){
    this->nome = nome;
}
string Funcionario:: getNome(){
    return nome;
}
void Funcionario::setFuncao(string funcao){
    this->funcao = funcao;
}
string Funcionario::getFuncao(){
    return funcao;
}
void Funcionario::setTipoFuncionario(string tipoFuncionario){
    this->tipoFuncionario = tipoFuncionario;
}
string Funcionario::getTipoFuncionario(){
    return tipoFuncionario;
}
void Funcionario::setUsuario(string usuario){
    this->usuario = usuario;
}
string Funcionario::getUsuario(){
    return usuario;
}
void Funcionario::setSenha(){
    this->senha = senha;
}
string Funcionario::getSenha(){
    return senha;
}
void Funcionario::setSalarioPorHora(double salarioPorHora){
    this->salarioPorHora = salarioPorHora;
}
double Funcionario::getSalarioPorHora(){
    return salarioPorHora;
}
void Funcionario:: setHorasTrabalhadas(int x){
    horasTrabalhadas = x;
}
int Funcionario::getHorasTrabalhadas(){
    return horasTrabalhadas;
}
void Funcionario::exibirSalario() {
    double bonificacoes;
    cin >> bonificacoes;
    double tot = (horasTrabalhadas*salarioPorHora)+bonificacoes;
    cout << "Salario total = " << tot << endl;
}
void Funcionario::exibirMenu() {

}
int Funcionario::getQuantidadeFuncionarios() {
    return qtdFunc;
}
