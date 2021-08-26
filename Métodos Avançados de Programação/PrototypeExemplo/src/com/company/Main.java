package com.company;

public class Main {

    public static void main(String[] args) {
        Sorvete sorvete = new Sorvete();
        Picole picole = new Picole();

        Sorveteria sorveteMorago = sorvete.clonar();
        sorveteMorago.setSabor("Morango");
        sorveteMorago.informacoes();

        Sorveteria sorveteLimao = sorvete.clonar();
        sorveteLimao.setSabor("limao");
        sorveteLimao.informacoes();

        Sorveteria picoleMorango = picole.clonar();
        picoleMorango.setSabor("Morango");
        picoleMorango.informacoes();
    }
}
