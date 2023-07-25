import java.time.LocalDate;
import java.time.temporal.ChronoUnit;

public class Funcionario{
    private String CPF;
    private String nomeCompleto;
    private String nroCarteiraDeTrabalho;
    private String rg;
    private String dataDeNascimento;
    private String endereco;
    private String sexo;
    private String estadoCivil;
    private String cargo;
    private double salario;
    private LocalDate dataIngresso;

    public Funcionario(String CPF, String nomeCompleto, String nroCarteiraDeTrabalho, String rg, String dataDeNascimento, String endereco,
                       String sexo, String estadoCivil, String cargo, double salario, LocalDate dataIngresso){
        this.CPF = CPF;
        this.nomeCompleto = nomeCompleto;
        this.nroCarteiraDeTrabalho = nroCarteiraDeTrabalho;
        this.rg = rg;
        this.dataDeNascimento = dataDeNascimento;
        this.endereco = endereco;
        this.sexo = sexo;
        this.estadoCivil = estadoCivil;
        this.cargo = cargo;
        this.salario = salario;
        this.dataIngresso = dataIngresso;
    }
    public String mostraDados(){
        return "";
    }

    public double calcularSalario() {
        LocalDate data = LocalDate.now();
        double dias = ChronoUnit.DAYS.between(this.dataIngresso, data);
        double r;
        if ((dias / 365) < 5) {
            r = this.salario * 1.1;
        } else
            r = this.salario;

        return r;
    }

    public double getSalario() {
        return salario;
    }

    public String getNomeCompleto() {
        return nomeCompleto;
    }

    public String getNroCarteiraDeTrabalho() {
        return nroCarteiraDeTrabalho;
    }
}


