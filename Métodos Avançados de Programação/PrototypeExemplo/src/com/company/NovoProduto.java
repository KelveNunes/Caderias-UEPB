package com.company;

public class NovoProduto extends Produtos{

    public NovoProduto(){}

    public NovoProduto(NovoProduto novoProduto){
        this.sabor = novoProduto.getSabor();
        this.tipo  = novoProduto.getTipo();
        this.valorCompra = novoProduto.getValorCompra();
        this.valorVenda = novoProduto.getValorVenda();
    }

    @Override
    public void informacoes() {
        System.out.println(this.sabor + "/n" +this.tipo + "/n" + this.valorCompra + "/n" + this.valorVenda);
    }

    @Override
    public Produtos clonar() {
        return new NovoProduto(this);
    }
}
