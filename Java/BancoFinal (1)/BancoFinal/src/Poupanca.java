import java.time.LocalDate;
import java.time.LocalTime;

public class Poupanca extends Conta{
    LocalDate inicio;
    LocalDate ultimaMov;
    LocalTime ultimaMovH = LocalTime.of(0,0);
    double rendimento = this.saldo *0.05;

    public Poupanca(int tp, String usr1, String s1, double s,Agencia ag, LocalDate x) {
        super(tp, usr1, s1, s,ag);
        this.inicio = x;
    }

    public void mudarData(LocalDate y){
        this.ultimaMov = y;
    }
    public void mudarDataH(LocalTime y){
        this.ultimaMovH = y;
    }

    @Override
    public String mostraDadosConta(){
        int hora = ultimaMovH.getHour();
        int min = ultimaMovH.getMinute();
        return super.mostraDadosConta()+"\n\tData de inicio: "+this.inicio+"\n\tUltima movimentacao: "
                +this.ultimaMov+ "  "+hora+":"+min+ "\n\tCom base no capital aplicado o rendimento mensal esperado eh: "+this.rendimento
                +"\n======================================================\n\n";
    }
}
