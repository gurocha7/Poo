//
// Created by gusta on 30/11/2017.
//
#include "Pessoa.h"

void Pessoa::informeTipo() {
    int x;
    cout << "---------------------" << endl;
    cout << "1 - CHEFE" << endl;
    cout << "2 - FUNCIONARIO" << endl;
    cout << "---------------------" << endl;
    cout << "INFORME SEU TIPO: "; cin >> x;
    setTipo(x);
}

void Pessoa::setTipo(int op) {
    this->tipo = op;
}
int Pessoa::getTipo() {
    return tipo;
}