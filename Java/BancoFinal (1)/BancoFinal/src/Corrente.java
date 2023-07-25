import java.time.LocalDate;
import java.time.LocalTime;

public class Corrente extends Conta{
    LocalDate inicio;
    LocalDate ultimaMov;
    LocalTime ultimaMovH = LocalTime.of(0,0);
    double limiteCheque;
    double taxa = 7.5;

    public Corrente(int tp, String usr1, String s1, double s,Agencia ag, LocalDate x, double lim) {
        super(tp, usr1, s1, s, ag);
        this.inicio = x;
        this.limiteCheque = lim;
    }

    public void mudarTaxa(double x){
        this.taxa = x;
    }

    public void mudarLimite(double x){
        this.limiteCheque = x;
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
        String r=super.mostraDadosConta()+"\n\tData de inicio: "+this.inicio+"\n\tUltima movimentacao: "+this.ultimaMov+
                "  "+hora+":"+min+ "\n\tLimite atual do cheque especial: " +this.limiteCheque+
                "\n\tTaxa atual de administracao: "+this.taxa+"\n======================================================\n\n";
        return r;
    }


}
