package com.company;

public abstract class Produtos {


    public String sabor;
    public String tipo;
    public double valorCompra;
    public double valorVenda;

    public abstract Produtos clonar();
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
