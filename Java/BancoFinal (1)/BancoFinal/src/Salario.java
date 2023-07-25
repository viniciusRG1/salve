import java.time.LocalDate;
import java.time.LocalTime;

public class Salario extends Conta{
    LocalDate inicio;
    LocalDate ultimaMov;
    LocalTime ultimaMovH = LocalTime.of(0,0);
    double limiteSaque;
    double limiteTr;
    public Salario(int tp, String usr1, String s1, double s,Agencia ag, LocalDate x, double saque, double trans) {
        super(tp, usr1, s1, s,ag);
        this.inicio = x;
        this.limiteTr = trans;
        this.limiteSaque = saque;
    }

    public void mudarData(LocalDate y){
        this.ultimaMov = y;
    }
    public void mudarDataH(LocalTime y){
        this.ultimaMovH = y;
    }
    public void mudarLimiteSaque(double q){
        this.limiteSaque = q;
    }
    public void mudarLimiteTransferencia(double q){
        this.limiteTr = q;
    }

    @Override
    public String mostraDadosConta(){
        int hora = ultimaMovH.getHour();
        int min = ultimaMovH.getMinute();
        String r = super.mostraDadosConta()+"\n\tData de inicio: "+this.inicio+"\n\tUltima movimentacao: "
                +this.ultimaMov+ "  "+hora+":"+min+"\n======================================================\n\n";
        return r;
    }

}
