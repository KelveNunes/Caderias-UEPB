package com.company;

public class Picole extends Sorveteria{

    public Picole() {
    }

    public Picole(Picole picole ) {
        this.sabor = picole.getSabor();
        this.valor = 1;
    }

    @Override
    public void informacoes() {
        System.out.println("Sabor do Picolé: "  + getSabor() + "\nValor: " + this.valor +"\n");
    }

    @Override
    public Sorveteria clonar() {
        return new Picole(this);
    }
}
