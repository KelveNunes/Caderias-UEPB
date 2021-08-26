package com.company;

public abstract class Sorveteria {


    public String sabor;
    public int valor;
    public abstract Sorveteria clonar();
    public abstract void informacoes();

    public String getSabor(){
        return sabor;
    }

    public int getValor() {
        return valor;
    }

    public void setSabor(String sabor) {
        this.sabor = sabor;
    }

    public void setValor(int valor) {
        this.valor = valor;
    }
}
