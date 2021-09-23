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

    public String getTipo() {
        return tipo;
    }

    public double getValorCompra() {
        return valorCompra;
    }

    public double getValorVenda() {
        return valorVenda;
    }

    public void setSabor(String sabor) {
        this.sabor = sabor;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public void setValorCompra(double valorCompra) {
        this.valorCompra = valorCompra;
    }

    public void setValorVenda(double valorVenda) {
        this.valorVenda = valorVenda;
    }
}
