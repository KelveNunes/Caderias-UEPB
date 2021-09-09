package com.company;

public class Calculadora {

    private double numero1;
    private double numero2;


    public double soma(double numero1, double numero2) {
        this.numero1 = numero1;
        this.numero2 = numero2;
        return numero1 + numero2;
    }

    public double subtracao(double numero1, double numero2){
        this.numero1 = numero1;
        this.numero2 = numero2;
        return numero1 - numero2;
    };
    public double multiplicacao(double numero1, double numero2){
        this.numero1 = numero1;
        this.numero2 = numero2;
        return numero1 * numero2;
    };
    public double divisao(double numero, double numero2){
        this.numero1 = numero1;
        this.numero2 = numero2;
        return numero1 / numero2;
    };

}
