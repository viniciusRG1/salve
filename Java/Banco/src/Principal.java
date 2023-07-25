
import java.util.ArrayList;
import java.util.Scanner;

public class Principal {

    static Cliente[] clientes = new Cliente[10];
    static ArrayList<Cliente> clien = new ArrayList<>();

    //só para acessar conta
    static Cliente logar(Scanner sc) {
        System.out.print("Usuario: ");
        String usuario = sc.nextLine();
        System.out.print("Senha: ");
        String sen = sc.nextLine();
        for (int i=0;i<clien.size();i++) //percorre lista de clientes
            if ((clien.get(i).conta.usuario.equals(usuario))&&(clien.get(i).conta.senha.equals(sen)))
                return clien.get(i);
        return null;
    }

    static Conta buscaConta(int num) {
        for (int i=0;i<clien.size();i++) {
            if (clien.get(i).getConta().num == num)
                return clien.get(i).getConta();
        }
        return null;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int op = -1;
        int contClientes = 0;

        while (op != 9) {
            System.out.println("=== MENU ===");
            System.out.println("1 - Cadastrar");
            System.out.println("2 - Saldo");
            System.out.println("3 - Sacar");
            System.out.println("4 - Depositar");
            System.out.println("5 - Transferir");
            System.out.println("6 - Relatorio");
            System.out.println("7 - Clientes negativados");
            System.out.println("8 - Clientes com idade em intervalo");
            System.out.println("9 - Sair");
            op = sc.nextInt();
            sc.nextLine();
            String tipo;
            float saldo;
            String nome, CPF, telefone;
            int idade;
            String usr,sen;

            switch(op) {
                case 1:
                    System.out.print("Tipo da Conta: ");
                    tipo = sc.nextLine();
                    System.out.print("Saldo inicial: ");
                    saldo = sc.nextFloat();
                    sc.nextLine();
                    System.out.print("Nome: ");
                    nome = sc.nextLine();
                    System.out.print("CPF: ");
                    CPF = sc.nextLine();
                    System.out.print("Telefone: ");
                    telefone = sc.nextLine();
                    System.out.print("Idade: ");
                    idade = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Usuario: ");
                    usr = sc.nextLine();
                    System.out.print("Senha: ");
                    sen = sc.nextLine();
                    //String t, String usr1, String s1, float s
                    Conta c1 = new Conta(tipo, usr, sen, saldo);
                    //(String nome, String CPF, String tel, int idade, Conta ct)
                    clien.add(new Cliente(nome,CPF,telefone,idade,c1));
                    contClientes++;
                    break;
                case 2:
                    Cliente c = logar(sc);
                    if (c != null) {
                        System.out.println(c.getConta().mostraSaldo());
                    }else
                        System.out.println("Acesso negado.");
                    break;
                case 3:
                    c = logar(sc);
                    if (c != null) {
                        System.out.print("Valor: ");
                        float valor = sc.nextFloat();
                        if (c.getConta().sacar(valor))
                            System.out.println("Saque realizado com sucesso.");
                        else
                            System.out.println("Erro ao realizar o saque.");
                    }
                    break;
                case 4:
                    c = logar(sc);
                    if (c != null) {
                        System.out.print("Valor: ");
                        float valor = sc.nextFloat();
                        if (c.getConta().depositar(valor))
                            System.out.println("Deposito realizado com sucesso.");
                        else
                            System.out.println("Erro ao realizar o saque.");
                    }
                    break;
                case 5:
                    c = logar(sc);
                    if (c != null) {
                        System.out.print("Num conta destino: ");
                        int n = sc.nextInt();
                        System.out.print("Valor: ");
                        float valor = sc.nextFloat();
                        Conta temp = buscaConta(n);
                        if (temp != null)
                            c.getConta().transferir(valor,temp);
                        else
                            System.out.println("Conta destino inexistente!");
                    }
                    break;
                case 6:
                    for (int i=0;i<clien.size();i++) {
                        System.out.println(clientes[i].mostraDadosConta());
                    }
                    break;
                case 7:
                    System.out.println("=== Clientes negativados ===");
                    for (int i=0;i<clien.size();i++) {
                        if (clientes[i].estaNegativado())
                            System.out.println(clientes[i].mostraDadosConta());
                    }
                    break;
                case 8:
                    System.out.print("Idade inicial: ");
                    int idi = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Idade final: ");
                    int idf = sc.nextInt();
                    sc.nextLine();
                    System.out.println("Clientes com idade entre "+idi+" e "+idf+" anos:");
                    for (int i=0;i<clien.size();i++) {
                        if ((clientes[i].idade >= idi) &&
                                (clientes[i].idade <= idf))
                            System.out.println(clientes[i].mostraDadosConta());
                    }
            }
        }
    }
}