public class Cliente {
    static int ct = 0;
    String nome, CPF, telefone;
    String data;
    String endereco;
    String estadoCivil;
    Conta conta;

    public Cliente(String nome, String CPF, String tel, String data,String endereco,String estadoCivil, Conta ct){
        this.conta = ct;
        this.nome = nome;
        this.CPF = CPF;
        this.telefone = tel;
        this.data = data;
        this.endereco = endereco;
        this.estadoCivil = estadoCivil;
    }

    public Conta getConta() {
        return conta;
    }


    public String mostraDadosConta() {
        String r = "Detalhes da conta\nNome: "+this.nome+"\n\tEndereco: "+this.endereco+"\n\tEstado Civil: "+this.estadoCivil
                +conta.mostraDadosConta();
        return r;
    }

    public boolean estaNegativado() {
        return conta.ehNegativo();
    }

    public void desativa(){
        conta.desativar();
    }
    public boolean status(){
        return conta.ativada;
    }

}
