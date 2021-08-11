package ClassesAbstratas;

public class TestaConta {
    public static void main(String[] args) {
        Conta cp = new ContaPoupanca();
        cp.getSaldo();
        cp.setSaldo(2000);
        cp.imprimeSaldo();
    }
}
