package com.company;

public class Produtos {
    protected String tipo;
    protected String sabor;
    protected String precoCompra;
    protected String precoVenda;

    public Produtos(){}

    public Produtos(String tipo, String sabor, String precoCompra, String precoVenda){

        this.tipo = tipo;
        this.sabor = sabor;
        this.precoCompra = precoCompra;
        this.precoVenda = precoVenda;
    }

    public String getTipo() {
        return tipo;
    }

    public String getSabor() {
        return sabor;
    }

    public String getPrecoCompra() {
        return precoCompra;
    }

    public String getPrecoVenda() {
        return precoVenda;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public void setSabor(String sabor) {
        this.sabor = sabor;
    }

    public void setPrecoCompra(String precoCompra) {
        this.precoCompra = precoCompra;
    }

    public void setPrecoVenda(String precoVenda) {
        this.precoVenda = precoVenda;
    }
    public Produtos clocar(){
        return new Produtos(this);

    }


}
