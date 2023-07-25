public class Cliente {
    static int ct = 0;
    String nome, CPF, telefone;
    int idade;
    Conta conta;

    public Cliente(String nome, String CPF, String tel, int idade, Conta ct){
        this.conta = ct;
        this.nome = nome;
        this.CPF = CPF;
        this.telefone = tel;
        this.idade = idade;
    }

    public Conta getConta() {
        return conta;
    }


    public String mostraDadosConta() {
        String r = "";
        r += conta.num+" ";
        r += nome+" ";
        r += conta.saldo;
        return r;
    }

    public boolean estaNegativado() {
        return conta.ehNegativo();
    }
}
