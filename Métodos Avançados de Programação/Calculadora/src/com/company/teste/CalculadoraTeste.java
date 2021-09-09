package com.company.teste;

import com.company.Calculadora;
import org.junit.Assert;
import org.junit.Test;

public class CalculadoraTeste {

    @Test
    public void testSoma(){
        Calculadora calculadora = new Calculadora();
        double soma = calculadora.soma(2,4);
        Assert.assertEquals(6,soma,6);
        System.out.println("Teste Ok");
    }
    @Test
    public void testeSub(){
        Calculadora calculadora = new Calculadora();
        double sub = calculadora.subtracao(10, 5);
        Assert.assertEquals(5,sub,5);
        System.out.println("Teste Ok");
    }
    @Test
    public void testeMult(){
        Calculadora calculadora = new Calculadora();
        double mult = calculadora.multiplicacao(5, 5);
        Assert.assertEquals(25,mult,25);
        System.out.println("Teste Ok");
    }
    @Test
    public void testeDiv(){
        Calculadora calculadora = new Calculadora();
        double div = calculadora.divisao(1000, 2);
        Assert.assertEquals(500,div, 500);
        System.out.println("Teste Ok");
    }
}
