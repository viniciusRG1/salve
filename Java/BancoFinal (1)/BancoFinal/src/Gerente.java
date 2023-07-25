import java.time.LocalDate;

public class Gerente extends Funcionario {
    int ag;
    String nomeBanco;
    boolean cursoGerencia;

    public Gerente(String CPF, String nomeCompleto, String nroCarteiraDeTrabalho, String rg, String dataDeNascimento, String endereco, String sexo, String estadoCivil,
                   String cargo, float salario, LocalDate dataIngresso, boolean cursoGerencia){
        super(CPF, nomeCompleto,nroCarteiraDeTrabalho, rg, dataDeNascimento, endereco, sexo, estadoCivil, cargo, salario, dataIngresso);
        this.cursoGerencia = cursoGerencia;
    }

    @Override
    public double calcularSalario(){
        double r = super.getSalario();
        r = r*1.05;

        return r;
    }

    public String mostraDados(){
        String r = "\nNome: "+ super.getNomeCompleto() + " Carteira de trabalho: "+super.getNroCarteiraDeTrabalho() + " Salario atual: "+this.calcularSalario();

        return r;
    }
}