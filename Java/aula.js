// let idade = 5;
// console.log(idade)
// let altura =186
// console.log(altura)

// let familia = [20,15,47,55]
// console.log(familia[0])
// console.log(familia.length)
// let nomedecolega = [Leo, 18, ]

// let corsite = "azul";
// function resetacor(cor){
//     corsite = cor;
// }

// console.log(corsite);
// resetacor();
// console.log(corsite);
// resetacor("vermelho");
// console.log(corsite);

// function multiplicar(valor){
//     return valor * 2;
// }

// let resultado = multiplicar(3);

// console.log(resultado);
// let salario = 1200;
// console.log(salario + salario);
// console.log(salario - salario);
// console.log(salario * salario);
// console.log(salario / salario);
// console.log(salario ** salario);

//++ -- é subir ou descer 1 unidade do número escolhido

// let valor = 100;
// console.log(valor);
// valor += valor;
// console.log(valor);
// valor -= valor;
// console.log(valor);

// igualdade restrita 
// melhor forma de saber se os dois intes da comparação são iguais 
// console.log(1 === 1);
// console.log('1' === 1);

// comparar o tipo do cliente 
// let pontos = 100;
// let tipo = pontos > 100 ? 'premium' : 'comum';
// console.log(tipo);
// usar ? significa q está perguntando 'se'. Usar : significa 'se não'

// operadores lógicos 
// 'e' (&&). Retorna TRUE caso ambos objetos forem TRUE 
// 'ou'(||). Retorna TRUE caso apenas 1 objeto for TRUE
// 'não'(!). Retornara o valor inverso do objeto
// let maior_idade = true;
// let possui_carteira_de_trabalho = true;
// let pode_aplicar = maior_idade && possui_carteira_de_trabalho;
// console.log('pode aplicar: ',pode_aplicar);

// maior_idade = true;
// pode_aplicar = maior_idade && possui_carteira_de_trabalho;
// console.log('candidato recusado', pode_aplicar);

// pode_aplicar = maior_idade || possui_carteira_de_trabalho;
// console.log('pode aplicar: ', pode_aplicar);

// pode_aplicar = !maior_idade;
// console.log('candidato recusado', pode_aplicar);

// tipo de retorno falsy
// false 
// null 
// 0 
// ''
// NaN

// tipo de truthy 
// retorna o primeiro valor caso os dois forem verdade
// let cor_proprio = 'red';
// let cor_padrão = 'blue';
// let cor_usada = cor_padrão || cor_proprio;
//  console.log(cor_usada);

// let a = 'red';
// let b = 'blue';
// let c = 'yellow';

// console.log(a);
// console.log(b);

// c = a;
// a = b;
// b = c;

// console.log(a);
// console.log(b);

// if ... else
// Se a hora estiver entre 6h a 12h bom dia 
// Se estiver entre 12:01 e 18h é boa tarde 
// Caso contrario é boa noite 

// let hora = 6;
// if(hora >= 6 && hora <= 12){
//     console.log("bom dia");
// }
// else if (hora > 12 && hora < 18){
//     console.log("boa tarde");
// }
// else{
//     console.log("boa noite");
// }

// let permissao; // comum, gerente, diretor

// permissao = 'diretor';

// switch (permissao){
//     case 'comum': // permissão de uma pessoa comum
//         console.log('usuário comum');
//         break; // quebrar para que não continua a comparar

//     case 'gerente': // permissão de uma pessoa com cargo de gernete
//         console.log('usuário gerente');
//         break; // quebrar para que não continua a comparar

//     case 'diretor': // permissão de uma pessoa com cargo de diretor
//         console.log('usuário diretor');
//         break; // quebrar para que não continua a comparar

//         default: // caso não for nenhum dos casos
//         console.log('usuário não reconhecido!!');

// }

// Tipos de laço:
// For 
//While 
// do while
// For in
// For of

// for(let i = 0; i <= 5; i++){
//     if(i % 2 != 0){
//         console.log(i);
//     }
// }

// let i = 5;

// while (i >= 1) {
//     if(i % 2 !== 0){
//         console.log(i);
//     }
//     i--;
// }

// let i = 0;

// do{
//     console.log('digitando!', i);
//     i++
// }while(i < 10) //no minimo uma vez e depois começa a condição

// for-in 

// const pessoa = {
//     nome: 'Vinicius',
//     idade: 20
// };

// for(let chave in pessoa){
//     console.log(chave,pessoa['nome']);
// }

// const cores = ['red','blue','green'];

// for(let indice in cores){
//     console.log(indice,cores[indice]);
// }

// for-of

// const cores = ['red','blue','green'];

// for(let cor of cores){
//     console.log(cor);
// }

// esse programa é pra comparar 2 valores e ver quem é o maior

// let primeiro_numero = 1;
// let segundo_numero = 7;

// if (primeiro_numero > segundo_numero){
//     console.log('o maior número é:', primeiro_numero);
// }else{
//     console.log('o maior número é:', segundo_numero);
// }

// melhor jeito de fazer

// let valor_maior = max(9,7);
// console.log(valor_maior);

// function max(numero1,numero2){
//     if(numero1 > numero2)
//     return numero1;
//     else return numero2;
// }

// fizzbuzz
// divisivel por 3 => fizz
// divisivel por 5 => buzz
// divisivel por 3 e 5 => fizzBuzz
// n divisivel por 3 e 5 => retorna a entrada
// não é um número => 'não é um número'

// modo correto de se fazer o exercício
// const resultado = fizzBuzz(15);
// console.log(resultado);

// function fizzBuzz(entrada){
//     if(typeof entrada !== 'number') // pra comparar o tipo da variavel se usa typeof
//         return 'não é um número';
//     else if(entrada % 3 === 0 && entrada % 5 === 0)
//     return 'FizzBuzz';
//     else if(entrada % 3 === 0)
//     return 'Fizz';
//     else if (entrada % 5 === 0)
//     return 'Buzz';
//     return entrada;
// }

// velocidade máxima de 70
// a cada 5km acima do limite ganha 1 ponto na carteira
// math.floor()
// caso for superior a 12 ponto a carteira é suspendida

// verificar_velocidade(80);



// function verificar_velocidade(velocidade){
//     const velocidade_maxima = 70;
//     const pontos_km = 5;
//     if (velocidade <= velocidade_maxima)
//         console.log('não passou do limite');
//     else {
//         const pontos = Math.floor(((velocidade - velocidade_maxima) / pontos_km));
//         if (pontos >= 12)
//             console.log('carteira suspensa');
//         else
//             console.log('você tem: ',pontos);
//     }
// }


// receber uma quantidade de valor e avalia se é PAR ou IMPAR

// exibir_tipo(5);
// function exibir_tipo(limite){
//     for(let t = 0; t <= limite; t++){
//         if( t % 2 === 0)
//         console.log(t,'é par');
//         else 
//         console.log(t,'é impar');
//     }
// }

// const filme = { // as strings que tem nesse exercício
//     titulo: 'Homem Aranha',
//     ano : 2021,
//     personagem: 'Homem Aranha'
// }
//  exibir_propriedades(filme);    // função que será usada para escrever apenas string sem número / número caracter
//  function exibir_propriedades(obj){
//     for (prop in obj)   // laço para comparar as string
//         if (typeof obj[prop] === 'string') // função q compara as prop obj da const se são string
//         console.log(prop,obj[prop]) // printar a função
//  }


// somar multiplos de 3 e de 5
// const limit = 10; // até que número pode somar
// let cont1 = 3; // multiplo número 1 
// let cont2 = 5; // multiplo número 2
// let mult1 = 1; // multiplicador 1
// let mult2 = 1; // multiplicador 2
// let armazenamento = 0; // guardar a soma
// somar (10); 
// function somar (limite){
//     for(let i = 0; i <= limit; i++){ //laço pra conferir todos os números
//         if(i % cont1 === mult1){ // condição 1 o resto de i e cont1 deve ser o mult1 ou seja, i deve ser o próximo número da tabela 
//             armazenamento = armazenamento + i;
//             mult1++; // lógica pra esperar o próximo número da tabela de mult 1
//         }else if(i % cont2 === mult2){ // condição 2 o resto de i e cont1 deve ser o mult1 ou seja, i deve ser o próximo número da tabela 
//             armazenamento = armazenamento + i; // lógica para esperar o próximo número da tabela de mult 2
//             mult2++;
//         }

//     }
//     console.log(armazenamento);
// }


// fazer a média das notas
// 0-59 - F
// 60-69 - D
// 70-79 - C 
// 80-89 - B 
// 90-100 - A

// const array = [60,70,80];
// let media = 0;
// console.log(media_do_aluno(array));

// function media_do_aluno(notas){
//     let soma = 0;
//     for (let nota of notas){
//         soma += nota;
//     }
//     media = soma/(notas.length);
// }
//     if(media >= 0 && media <= 59){
//         console.log('F');
//     }else if(media >= 60 && media <= 69){
//         console.log('D')
//     }else if(media >= 70 && media <= 79){
//         console.log('C')
//     }else if(media >= 80 && media <= 89){
//         console.log('B')
//     }else{
//         console.log('A')
//     }

// função que aumenta a quantidade de * printados 

// const asterisco = 10;
// let i = 0;
// let qtd_asteriscos = '';
// exibir_asteriscos(asterisco);

// function exibir_asteriscos(asterisco){
//    for(let linha = 1; linha <= asterisco; linha++){
//         qtd_asteriscos += '*';
//         console.log(qtd_asteriscos);
        
//     }


// }

// identificar número primos

// const primo = 15;
// exibir_primos(primo); 

// function exibir_primos(primo){
//     for(let numero = 2; numero <= primo; numero ++){
//         let primoo = true; // confirma se é primou ou n
        
//         for(let div = 2; div < numero; div++){
//             if(numero % div === 0){ // confere divisior entre 1 e o próprio número, caso algum caso de confirmado ele quebra e pula pro próximo número
//             primoo = false; // confirma q é falso para n cair no proxima condição
//             break;
//             }
//         }
//         if (primoo) console.log(numero); // caso ele for primo printara o número
//     }
// }

// funçoes de fábrica

// vc define dentro dá própria função 

// function criar_celular(marca_celular,tamanho_tela,bateria){
//     return{
//         marca_celular,
//         tamanho_tela,
//         bateria,
    
//         ligar: function(){
//             console.log("fazendo uma ligação");
//     }
// }
// }

// const celular1 = criar_celular('iphone', 5.5, 3000);
// console.log(celular1);

// cria a objeto novo com o new

// parcal case 
// o this serve para reverenciar um arquivo diretamente já marcando o valor dela, é a msm coisa da função acima
// function Celular (marca_celular,tamanho_tela,bateria){
//     this.marca_celular = marca_celular,
//     this.tamanho_tela = tamanho_tela,
//     this.bateria = bateria,
//     this.ligar = function(){
//         console.log("fazendo uma ligação");
//     }
// }
// const celular = new Celular('iphone',5.5,5000);
// console.log(celular);

// aqui vemos que o objeto é muito variavel e fácil de ser mudado, e nesse ex vemos q mudamos varios aspectos rápidamente 

// const mouse ={
//     cor : 'red',
//     marcar: 'dazz'
// }
// console.log(mouse)
// mouse.velocidade = 5000; // add termos na string
// mouse.trocarDPI = function () {
//     console.log('mudando DPI');
// }
// console.log(mouse)
// delete mouse.velocidade; // deletando termos da string 
// delete mouse.trocarDPI;
// console.log(mouse)

// const celular = {
//     marca_celular : 'samsung',
//     tamanho_da_tela : {
//         vertical : 155,
//         horizontal : 75
//     },
//     ligar: function () { 
//         console.log("fazendo ligação...");
//     }
// }



// const novo_objeto = Object.assign({ // processo de clonagem de objeto
//     bateria : 5000
// }, celular);
// console.log(novo_objeto);
// console.log(novo_objeto); 
// const objeto_2 = {...celular}; 
// console.log(objeto_2);  

// const carro = {
//     marca : 'hb20',
//     tamanho : 'heat',
//     funções : {
//         ar_condicionado : 'tem',
//         abs : 'tem',
//         quatro_portas : 'tem'
//     },
//     ligar: function(){
//         console.log("dando partida no carro vrum vrum");
//     }
// }

// const new_carro = Object.assign({
//     cor : 'cinza'
// }, carro);
// console.log(new_carro);
// console.log(new_carro);
// const carro_2  = {...carro};
// console.log(carro_2); 

// propriedade sobre matemática 

// let M = Math.max(1,2,3,4,5,6,7,8,9); // acha o maior termo entre todos escritos
// let m = Math.min(9,8,7,6,5,4,3,2,1); // acha o menos termo entre todos escritos
// console.log(M);
// console.log(m);

// tipo primitivo
// const mensagem = 'minha primeira mensagem';
// tipo objeto 
// const outra_mensagem = new String ('bom dia');
// console.log(outra_mensagem.length); // conferir o tamanho da string
// console.log(mensagem[7]);
// console.log(mensagem.includes('primeira')); // conferir se a palavra está no string
// console.log(outra_mensagem.startsWith('bom')); // conferir se a palavra inicial é essa
// console.log(outra_mensagem.endsWith('noite')); // conferir se a palavra final é essa
// console.log(mensagem.indexOf('bom')); 
// console.log(mensagem.replace('mensagem', 'namorada')); // trocar palavras dentro da string

// const mensagem = 'aaa aa aaaa    meu Deus   como é bom    ser v1d4 l0k 4  ';
// console.log(mensagem.trim()); // tira os espaços extras
// console.log(mensagem.split('')); // conta quantas palvras tem na string

// template literal
 // `` // serve para mandar uma frase ou um texto da exata forma q foi escrita 
 // serve tb para fazer conta e outra variaveis dentro da formatação, para poder inserir eles deve usar '& + variavel/const'
//  const email = 
//  `olá vc é muito legal
 
//  eu amo vc
//  tititititi`;
//  console.log(email); // será escrito da msm forma q foi formatado dento do código

// data / date 

// const data1 = new Date();
// const data2 = new Date(2019,02,06,9,30) 

// data1.setFullYear(2030); // muda o ano após capturar a data
// data1.toDateString(); // transforma em string
// data1.toTimeString(); // colhe a hora local
// data1.toISOString(); // formato de banco de dados, tanto pra enviar quanto para receber de lá

// const datahj = new Date(2021,10,28,19,26);

// criar um objeto endereço que contem rua, cidade, cep e exibir endereço

// rua = 'marechal Deodoro 1630';
// cidade = 'Palestina';
// cep = '15470-000'


// Endereco(rua,cidade,cep);
// function Endereco(Rua,Cidade,CEP){
//     return{
//         Rua,
//         Cidade,
//         CEP 
        
//     }
// }

// let endereco = {
//     Rua: 'marechal Deodoro 1630',
//     Cidade: 'Palestina',
//     CEP: '15470-000'
// };

// function exibir_Endereco(){
//     for (let chave in endereco)
//     console.log(chave,endereco[chave]);
// }

// exibir_Endereco(endereco);

// igualdade de objeto // comparar os objetos criados

// function Endereco (rua,cidade,cep){
//     this.rua = rua,
//     this.cidadde = cidade,
//     this.cep = cep
// }
// const endereco1 = new Endereco('a','b','c');
// const endereco2 = new Endereco('a','b','c');

// function saoiguais(endereco1,endereco2){
//     return endereco1.rua === endereco2.rua &&
//            endereco1.cidade === endereco2.cidade &&
//            endereco1.cep == endereco2.cep
// }

// console.log(saoiguais(endereco1,endereco2));

// function temenderecomemoriaiguais (endereco1,endereco2){
//     return endereco1 === endereco2;
// }

// console.log(temenderecomemoriaiguais(endereco1,endereco2));

//postagem, titulo mensagem autor vizualização comentarios(autor,mesagem), esta ao vivo

// let postagem = {
//     titulo: 'a',
//     mensagem: 'b',
//     autor: 'c',
//     visualizacao: 10,
//     comentario : [
//         {autor: 'a',mensagem:'b'},
//         {autor: 'a',mensagem:'b'}
//     ],
//     estaaovivo: true
// }
// console.log(postagem);

// function Postagem(titulo,mensagem,autor){
//     this.titulo = titulo,
//     this.mensagem = mensagem,
//     this.autor = autor,
//     this.visualizacao = 0,
//     this.comentario = [],
//     this.aovivo = false
// }

// aqui compara faixa de preço 

// let postagem = new Postagem('a','b','c');
// console.log(postagem);

// valor = 1000;
// dinheiroDisponivel(valor);

// function faixaPreço(faixaEscolha){
//     if(faixaEscolha === 1){
//         console.log('produtos até 1000 reais');
//         console.log('produto X');
//         console.log('produto Y');
//     }
//     else if(faixaEscolha === 2){
//         console.log('produto até 2000 reais');
//         console.log('produto XX');
//         console.log('produto YY');
//     }
// }

// function dinheiroDisponivel(valor){
//     if(valor <= 1000){
//         valor = 1;
//         faixaPreço(valor);
//     }else{
//         valor = 2;
//         faixaPreço(valor);
//     }
// }

// criação de faixa de preço

// let faixas = [
//     {tooltip: 'até 700', minimo: 0, maximo: 700},
//     {tooltip: 'de 700 até 1000', minimo: 700, maximo: 1000},
//     {tooltip: '1000 ou mais', minimo: 1000, maximo: 9999}

// ]

// function Faixa(tooltip,minimo,maximo){
//     this.tooltip = tooltip,
//     this.minimo = minimo,
//     this.maximo = maximo
// }

// let faixa3 = [
//     new Faixa('a',10,20),
//     new Faixa('b',20,30),
//     new Faixa('c',30,40)
// ];
// console.log(faixa3);

// como introduzir ARRAY 
// add novos elementos
// encontrar elementos
// remover elementos
// dividir elementos 
// dividir arrays
// combinar array

// const numeros = [1,2,3]; // não é posivel add objetos constantes, porem podemos alterar
// início 
// numeros.unshift(0);
// console.log(numeros);
// meio 
// numeros.splice(1,0,'a'); // é dividido da seguinte forma (qual local vc quer mudar/lugar que vc quer deletar/termo q vc quer add)
// console.log(numeros);
// final 
// numeros.push(5);
// console.log(numeros);

// const number = [1,2,3,4,5,6];
// number.unshift(44);
// console.log(number);

// number.splice(3,0,'abacate');
// console.log(number);

// number.splice(0,0,'77');
// console.log(number);

// const numero = [1,2,3,4];
// console.log(numero.indexOf(7)); // essa função busca o termo, 1 quer dizer q ele encontrou, -1 diz o contrario 

// const numero = [1,55,3,4];
// console.log(numero.lastIndexOf(1)); // diz a posição q ele esta 
// console.log(numero.includes(2)); // informa se o número existre ou não no array com um true ou false

// enctronar elementos do tipo referencia 

// const marcas = [ // como achar algo partido de uma referencia
//     {id:1 , nome: 'a'},
//     {id:1 , nome: 'b'}
// ];

// const marca = marcas.find(function(marca){
//     return marca.nome === 'a';
// })

// console.log(marca); 

// const video_games = [
//     {id:1 , nome : 'LOL'},
//     {id:1 , nome : 'CS'},
//     {id:1 , nome : 'BF'},
//     {id:1 , nome : 'COD'},
//     {id:1 , nome : 'DOTINHA'}
// ];

// const melhor = video_games.find(function(melhor){
//     return melhor.nome === 'CS';
// })

// console.log(melhor);

// arrow functions 
// const marcas = [ // entendi porra nenhuma
//     {id:1 , nome:'a'},
//     {id:2 , nome:'b'}
// ];

// console.log(marcas.find(marca => marca.nome === 'a'));

// removendo elementos 
// const numeros = [1,2,3,4,5,6];

// numeros.push();
// numeros.unshift();
// numeros.splice();

//FINAL
// const ultimo = numeros.pop(); // retira o ultimo termo 
// console.log(ultimo);
// console.log(numeros);

//inicio
// const primeiro = numeros.shift(); // retira o primeiro termo do array
// console.log(primeiro);
// console.log(numeros);

//meio 
// const meio = numeros.splice(2,1); // nessa forma vc escolhe a posição e a quantidade de termos q será deletado
// console.log(meio);


