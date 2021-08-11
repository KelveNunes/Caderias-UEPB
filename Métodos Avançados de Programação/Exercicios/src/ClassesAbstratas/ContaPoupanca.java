package ClassesAbstratas;

import java.text.SimpleDateFormat;
import java.util.Date;

public class ContaPoupanca extends Conta{

    @Override
    public void imprimeSaldo() {
        System.out.println("### Extrato ###");
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/aaaa HH:mm:ss");
        Date date = new Date();

        System.out.println("Saldo:" + this.getSaldo());
        System.out.println("Dara: " + sdf.format(date));
    }

}
