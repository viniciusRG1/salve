
import java.time.LocalTime;
import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.Scanner;
import java.time.LocalDate;

public class Principal {
    //variaveis e arraylists usados no programa
    static ArrayList<Cliente> clien = new ArrayList<>();
    static ArrayList<Cliente> clienBD = new ArrayList<>();
    static ArrayList<Agencia> agencias = new ArrayList<>();
    static ArrayList<Gerente> gerentes = new ArrayList<>();
    static int op = -1;
    static int tipo, qualAG;
    static double saldo;
    static double limite,limite2;
    static String nome, CPF, telefone, nasc, civil, endereco;
    static String usr,sen;
    static Conta c1;
    static LocalDate data;
    static LocalTime hr;

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

    public static LocalDate getDate(){
        return LocalDate.now();
    }

    public class ValidaCPF {

        static boolean isCPF(String CPF) {
            // considera-se erro CPF's formados por uma sequencia de numeros iguais
            if (CPF.equals("00000000000") ||
                    CPF.equals("11111111111") ||
                    CPF.equals("22222222222") || CPF.equals("33333333333") ||
                    CPF.equals("44444444444") || CPF.equals("55555555555") ||
                    CPF.equals("66666666666") || CPF.equals("77777777777") ||
                    CPF.equals("88888888888") || CPF.equals("99999999999") ||
                    (CPF.length() != 11))
                return(false);

            char dig10, dig11;
            int sm, i, r, num, peso;

            // "try" - protege o codigo para eventuais erros de conversao de tipo (int)
            try {
                // Calculo do 1o. Digito Verificador
                sm = 0;
                peso = 10;
                for (i=0; i<9; i++) {
                    // converte o i-esimo caractere do CPF em um numero:
                    // por exemplo, transforma o caractere '0' no inteiro 0
                    // (48 eh a posicao de '0' na tabela ASCII)
                    num = (int)(CPF.charAt(i) - 48);
                    sm = sm + (num * peso);
                    peso = peso - 1;
                }

                r = 11 - (sm % 11);
                if ((r == 10) || (r == 11))
                    dig10 = '0';
                else dig10 = (char)(r + 48); // converte no respectivo caractere numerico

                // Calculo do 2o. Digito Verificador
                sm = 0;
                peso = 11;
                for(i=0; i<10; i++) {
                    num = (int)(CPF.charAt(i) - 48);
                    sm = sm + (num * peso);
                    peso = peso - 1;
                }

                r = 11 - (sm % 11);
                if ((r == 10) || (r == 11))
                    dig11 = '0';
                else dig11 = (char)(r + 48);

                // Verifica se os digitos calculados conferem com os digitos informados.
                if ((dig10 == CPF.charAt(9)) && (dig11 == CPF.charAt(10)))
                    return(true);
                else return(false);
            } catch (InputMismatchException erro) {
                return(false);
            }
        }

        public static String imprimeCPF(String CPF) {
            return(CPF.substring(0, 3) + "." + CPF.substring(3, 6) + "." +
                    CPF.substring(6, 9) + "-" + CPF.substring(9, 11));
        }
    }

    static void CriarCoisas(){
        //*COMEÇO* gerentes criados
        Gerente ge = new Gerente("3579512465","Rafael Marques", "3579548/1574","MG15954687",
                "25/11/1999","Avenida Segismundo Pereira","Masculino","Solteiro","Gerente",
                4562,data = LocalDate.of(2020,6,12),true);
        gerentes.add(ge);
        ge = new Gerente("56415641","Guilherme Marques","156489/1554","SP65416511","14/12/1978",
                "Rua 3 de maio", "Masculino", "Casado", "Gerente", 2546,data = LocalDate.of(2000,10,19),
                true);
        gerentes.add(ge);
        ge= new Gerente("8741561564", "Sofia Ribeiro", "156546/5421","SP65416541", "16/10/1998",
                "Rua das Palmeiras", "Feminino", "Solteira", "Gerente", 3874, data = LocalDate.of(2019,8,2),
                true);
        gerentes.add(ge);
        ge=new Gerente("6546354132", "Paula Rodrigues", "615646889/7848", "MG5456146", "11/08/1990",
                "Rua das Pederneiras", "Feminino", "Casada", "Gerente", 7777, data = LocalDate.of(2010,3,5),
                true);
        gerentes.add(ge);
        //*FIM* gerentes criados

        //*COMEÇO* agencias criadas como exemplo
        //int numero, String nome, String endereco, String cidade, String estado, String bairro
        Agencia agen = new Agencia(1692,"Bradesco","Avenida Arouca", "Passos", "Minas Gerais", "Centro",gerentes.get(0));
        agencias.add(agen);
        agen = new Agencia(4225, "Itau", "Avenida Segismundo Pereira", "Uberlandia", "Minas Gerais", "Santa Monica",gerentes.get(1));
        agencias.add(agen);
        agen = new Agencia(0001, "Banco do Brasil", "Avenida Joao Naves", "Uberlandia", "Minas Gerais", "Santa Monica",gerentes.get(2));
        agencias.add(agen);
        agen = new Agencia(5784,"Itau","Avenida Joao Naves", "Uberlandia", "Minas Gerais","Santa Monica",gerentes.get(3));
        agencias.add(agen);
        //*FIM agencias criadas como exemplo

        //*COMEÇO* contas criadas como exemplo
        Conta c0 = new Corrente(1, "joojgoliv", "1234", 1500,agencias.get(2), data=getDate(), 500);
        Cliente c2 = new Cliente("Joao Vitor", "70209528800", "35988322570", "16/10/2000",
                "Rua 5 de novembro - Passos - Minas Gerais","Solteiro", c0);
        clien.add(c2); clienBD.add(c2);

        c0 = new Salario(2, "gusdare", "123", 3598,agencias.get(0), data = getDate(), 800,850);
        c2 = new Cliente("Gustavo Dare","45621387952", "21998573654", "23/10/2001",
                "Rua Maria Dolores - Franca - Sao Paulo","Casado", c0);
        clien.add(c2); clienBD.add(c2);

        c0 = new Poupanca(1, "paulin", "321", 9994,agencias.get(1), data=getDate());
        c2 = new Cliente("Paulo Andrade", "3213211546", "34998787453", "20/03/1989",
                "Rua Joao Jose - Uberlandia - Minas Gerais","Viuvo", c0);
        clien.add(c2); clienBD.add(c2);
        //*FIM* contas criadas como exemplo
    }

    static void CadastrarNormal() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nome: ");
        nome = sc.nextLine();
        boolean cpfCerto;
        do {
            System.out.print("CPF: ");
            CPF = sc.nextLine();
            cpfCerto = false;
            if(ValidaCPF.isCPF(CPF) == true)
                cpfCerto = true;
            else
                System.out.println("ERRO, CPF invalido!!");
        } while (cpfCerto == false);

        System.out.print("Telefone: ");
        telefone = sc.nextLine();
        System.out.print("Data de nascimento: ");
        nasc = sc.nextLine();
        System.out.print("Endereco atual: ");
        endereco = sc.nextLine();
        System.out.print("Estado Civil: ");
        civil = sc.nextLine();
        System.out.print("Usuario: ");
        usr = sc.nextLine();
        System.out.print("Senha: ");
        sen = sc.nextLine();
        System.out.print("Saldo inicial: ");
        saldo = sc.nextDouble();
        do {
            System.out.println("Escolha uma das agencias");
            for (int i = 0; i < agencias.size(); i++)
                System.out.println("[" + i + "]" + agencias.get(i).mostraDadosSimples());
            qualAG = sc.nextInt();
        } while (qualAG < 0 || qualAG > agencias.size());


        data = getDate();
        tipo = 0;
        do {
            System.out.print("Tipo da Conta \n[1]Corrente\n[2]Poupança\n[3]Salario\n");
            tipo = sc.nextInt();
        } while (tipo != 1 && tipo != 2 && tipo != 3);
        if (tipo == 1) {
            System.out.println("Qual o limite do cheque especial ?");
            limite = sc.nextDouble();
            c1 = new Corrente(tipo, usr, sen, saldo, agencias.get(qualAG), data, limite);

            clien.add(new Cliente(nome, CPF, telefone, nasc, endereco, civil, c1));
            clienBD.add(new Cliente(nome, CPF, telefone, nasc, endereco, civil, c1));
        } else if (tipo == 2) {
            c1 = new Poupanca(tipo, usr, sen, saldo, agencias.get(qualAG), data);

            clien.add(new Cliente(nome, CPF, telefone, nasc, endereco, civil, c1));
            clienBD.add(new Cliente(nome, CPF, telefone, nasc, endereco, civil, c1));
        } else if (tipo == 3) {
            System.out.println("Defina o limite de saque");
            limite = sc.nextDouble();
            System.out.println("Defina o limite para transferencia");
            limite2 = sc.nextDouble();

            c1 = new Salario(tipo, usr, sen, saldo, agencias.get(qualAG), data, limite, limite2);
            clien.add(new Cliente(nome, CPF, telefone, nasc, endereco, civil, c1));
            clienBD.add(new Cliente(nome, CPF, telefone, nasc, endereco, civil, c1));
        }
    }

    static void AddPessoaNaConta(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Faça seu login normalmente e adicione os dados da pessoa");
        Cliente c = logar(sc);
        if(c != null){
            System.out.println("Logado!! Agora adicione os dados da pessoas a adicionar na conta compartilahda");
            System.out.print("Nome: ");
            nome = sc.nextLine();
            boolean cpfCerto;
            do {
                System.out.print("CPF: ");
                CPF = sc.nextLine();
                cpfCerto = false;
                if(ValidaCPF.isCPF(CPF) == true)
                    cpfCerto = true;
                else
                    System.out.println("ERRO, CPF invalido!!");
            } while (cpfCerto == false);
            System.out.print("Telefone: ");
            telefone = sc.nextLine();
            System.out.print("Data de nascimento: ");
            nasc = sc.nextLine();
            System.out.print("Endereco atual: ");
            endereco = sc.nextLine();
            System.out.print("Estado Civil: ");
            civil = sc.nextLine();
            System.out.print("Usuario: ");
            usr = sc.nextLine();
            System.out.print("Senha: ");
            sen = sc.nextLine();

            clien.add(new Cliente(nome,CPF,telefone,nasc,endereco,civil,c.conta));
            clienBD.add(new Cliente(nome,CPF,telefone,nasc,endereco,civil,c.conta));
        }
        else
            System.out.println("Acesso negado");
    }


    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        CriarCoisas();

        while (op != 0) {
            System.out.println("=== MENU ===");
            System.out.println("1 - Cadastrar");
            System.out.println("2 - Mostrar dados da sua conta");
            System.out.println("3 - Sacar");
            System.out.println("4 - Depositar");
            System.out.println("5 - Transferir");
            System.out.println("6 - Relatorio");
            System.out.println("7 - Clientes negativados");
            System.out.println("8 - Desativar uma conta");
            System.out.println("9 - Banco de Dados");
            System.out.println("10 - Adicionar uma pessoa a uma conta conjunta");
            System.out.println("11 - Folha de Salario dos funcionarios");
            System.out.println("0 - Sair");
            op = sc.nextInt();
            sc.nextLine();

            switch(op) {
                case 1:
                    CadastrarNormal();
                    break;

                case 2:
                    Cliente c = logar(sc);
                    if (c != null) {
                        if(c.conta instanceof Corrente){
                            System.out.println(c.mostraDadosConta());
                        }
                        else if(c.conta instanceof Poupanca){
                            System.out.println(c.mostraDadosConta());
                        }
                        else if(c.conta instanceof Salario){
                            System.out.println(c.mostraDadosConta());
                        }
                    }else
                        System.out.println("Acesso negado.");
                    break;

                case 3:
                    c = logar(sc);
                    if (c != null) {
                        System.out.print("Valor: ");
                        float valor = sc.nextFloat();
                        if (c.conta instanceof Salario && valor>=((Salario) c.conta).limiteSaque){
                            System.out.println("O valor ultrapassa o seu limite de saque");
                        }
                        else if (c.getConta().sacar(valor)) {
                            System.out.println("Saque realizado com sucesso.");

                            data = getDate();
                            hr = LocalTime.now();
                            if(c.conta instanceof Corrente){
                                ((Corrente) c.conta).mudarData(data);
                                ((Corrente) c.conta).mudarDataH(hr);
                            }
                            else if(c.conta instanceof Poupanca){
                                ((Poupanca) c.conta).mudarData(data);
                                ((Poupanca) c.conta).mudarDataH(hr);
                            }
                            else if(c.conta instanceof Salario){
                                ((Salario) c.conta).mudarData(data);
                                ((Salario) c.conta).mudarDataH(hr);
                            }
                        }
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
                        if (c.conta instanceof Salario && valor>=((Salario) c.conta).limiteTr){
                            System.out.println("O valor ultrapassa o seu limite de transferencia");
                        }
                        else if (temp != null)
                            c.getConta().transferir(valor,temp);
                        else
                            System.out.println("Conta destino inexistente!");
                    }
                    break;

                case 6:
                    for (int i=0;i<clien.size();i++) {
                        System.out.println(clien.get(i).mostraDadosConta());
                    }
                    break;

                case 7:
                    System.out.println("=== Clientes negativados ===");
                    for (int i=0;i<clien.size();i++) {
                        if (clien.get(i).estaNegativado())
                            System.out.println(clien.get(i).mostraDadosConta());
                    }
                    break;

                case 8:
                    System.out.println("Digitar o numero da conta que sera desativada: ");
                    c = logar(sc);
                    if(c != null){
                        System.out.println("Tem certeza que deseja prosseguir com esta ação ?");
                        System.out.println(c.mostraDadosConta());
                        int i;
                        do {
                            System.out.println("[1]Sim\n[2]Nao");
                            i = sc.nextInt();
                            if(i == 2)
                                break;
                            else if (i==1){
                                c.desativa();
                                clien.remove(c);
                            }
                        }while(i != 1 && i != 2);
                    }
                    else
                        System.out.println("Esta conta não existe");
                    break;

                case 9:
                    for (int i=0;i<clienBD.size();i++) {
                        System.out.println(clienBD.get(i).mostraDadosConta());
                        if(clienBD.get(i).status() == false)
                            System.out.print("  CONTA DESATIVADA\n");
                    }

                case 10:
                    AddPessoaNaConta();

                case 11:
                    for(int i = 0;i<gerentes.size();i++){
                        System.out.println(gerentes.get(i).mostraDados());
                    }
            }
        }
        System.out.println("Obrigado por usar!!");
    }
}