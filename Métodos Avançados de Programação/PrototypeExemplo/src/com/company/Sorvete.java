package com.company;

public class Sorvete extends Sorveteria {

    public Sorvete() {
    }

    public Sorvete(Sorvete sorvete){
        this.sabor = sorvete.getSabor();
        this.valor = 2;
    }

    @Override
    public void informacoes(){
        System.out.println("Sabor do Sorvete: "  + getSabor() + "\nValor: " + this.valor +"\n");

    }
    @Override
    public Sorveteria clonar() {
        return new Sorvete(this);
    }
}
