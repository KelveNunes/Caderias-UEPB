package Polimorfismo;

public class TesteOperacao {
    public static void calculaOperacao(OperacaoMatematica o, double x, double y){
        System.out.println(o.calcular(x, y));
    }

    public static void main(String[] args) {
        calculaOperacao(new Soma(),2500, 3000);
        calculaOperacao(new Multiplicacao(), 300, 200);
    }
}
