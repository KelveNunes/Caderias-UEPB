package Interfaces;

public class TesteContas {
    public static void main(String[] args) {
        ContaCorrente cc = new ContaCorrente();
        cc.depositar(100);
        cc.sacar(50);

        ContaPoupanca cp = new ContaPoupanca();
        cp.depositar(200);
        cp.sacar(100);

        GeradorExtratos geradorExtratos = new GeradorExtratos();
        geradorExtratos.geradorConta(cc);
        geradorExtratos.geradorConta(cp);
    }
}
