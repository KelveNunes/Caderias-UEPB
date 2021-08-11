package Interfaces;

public class ContaCorrente implements Conta{
    private double saldo;
    private double taxaDeOperacao = 0.45;

    @Override
    public void depositar(double valor) {
        this.saldo += valor - taxaDeOperacao;
    }

    @Override
    public void sacar(double valor) {
        this.saldo -= valor + taxaDeOperacao;
    }

    @Override
    public double getSaldo() {
        return this.saldo;
    }
}
