
public class Agencia{
    private int numero;
    private String nome;
    private String endereco;
    private String cidade;
    private String estado;
    private String bairro;
    Gerente atual;

    public Agencia(int numero, String nome, String endereco, String cidade, String estado, String bairro, Gerente x){
        this.numero = numero;
        this.nome = nome;
        this.endereco = endereco;
        this.cidade = cidade;
        this.estado = estado;
        this.bairro = bairro;
        this.atual = x;
        //preenchendo onde esse gerente trabalha na classe Gerente
        atual.ag = this.numero;
        atual.nomeBanco = this.nome;
    }


    public String mostraDados(){
        String dados = "\nAgencia: "+ this.nome + "\nEndereco: "+this.cidade + " "+ this.endereco + " "+ this.bairro + " " + this.estado + "Geren" ;
        return dados;
    }

    public String mostraDadosSimples(){
        String dados = "Agencia:"+this.numero + " Banco:"+this.nome+" Cidade:"+this.cidade;
        return dados;
    }

    public int getNumero() {
        return numero;
    }
}