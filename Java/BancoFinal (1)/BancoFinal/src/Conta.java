abstract class Conta {
    static int ct = 0;
    int tp; // tipo da conta
    String tipo;
    Agencia ag;
    double saldo;
    int num; // numero da conta
    String usuario, senha;
    boolean ativada = true;

    public Conta(int tp, String usr1, String s1, double s, Agencia ag) {
        if(tp == 1){
            tipo = "Corrente";
        }else if(tp == 2){
            tipo = "Poupança";
        }else if(tp == 3){
            tipo = "Salario";
        }
        usuario = usr1;
        senha = s1;
        if (s >= 500) saldo = s;
        else saldo = 500;
        this.ag = ag;
        num = ct;
        ct++;
    }

    String mostraSaldo() {
        return "O saldo da conta num "+num+", do tipo ("+tipo+") eh "+saldo+" reais.";
    }
    public String mostraDadosConta(){
        String r = "\n\tAgencia: "+this.ag+"\n\tConta "+this.tipo+"\n\tNumero da conta: "+this.num +"\n\tSaldo: "+this.saldo;
        return r;
    }

    boolean sacar(float valor) {
        if (valor <= (saldo+100)) {
            saldo -= valor;
            return true;
        }else
            return false;
    }

    boolean depositar(float valor) {
        saldo += valor;
        return true;
    }

    boolean ehNegativo() {
        return (saldo < 0);
    }

    void transferir(float valor, Conta c) {
        if (sacar(valor)) {
            c.depositar(valor);
            System.out.println("Transferencia concluida.");
        } else
            System.out.println("Erro na operacao. Transferencia cancelada.");
    }

    void desativar(){
        this.ativada = false;
    }

}
