//força a troca de tipo
console.log(Number('9') + 5)

let string = "123"
console.log(Number(string))
let Number = 321
console.log(String(number))

//contar quantidade de letras da String, caso não seja string, você transforma

let word = "paralelepipedo"
console.log(word.length)

let number = 1234
console.log(String(number).length)

//trocar um caracter para outro, nesse exemplo trocamos um caracter por outro

let numbero = 444.333
console.log(number.toFized(2).replace(".",","))

//trocar letra minusculas por maiusculas

let world = "programa é bala de mais!"
console.log(world.toLowerCase().toUpperCase())

//cria um array onde você pode escolher algo que seja parametro para separação como espaço 
//no caso a seguir por exempo podemos ver uma separação por " " espaços

let phrase = "eu quero viver"
let myArray = phrase.split(" ")
console.log(myArray)

// usando para procurar se aquele conjunto de caracter existe dentro da String escolhida

console.log(phrase.includes("viver"))

//nessa manipulação você cria um array vazio para poder ser preenchido futuramente com oque você queira

let newMyArray = new Array(10)
console.log(newMyArray)

//nessa manipulação você faz a conta a quantidade de elementos de um array

console.log(["a",
    {type: "array"},
    function(){return "alo"},
    ][1].type)

// aqui fará com que cada letra da String em questão se transforme em uma posição dentro do array

let woord = "manipulação"
console.log(Array.from(word))

//manipulação de array
let techs = ["htlm", "css", "js"]
//adicionar um item no fim
techs.push("node.js")
//adicionar no começo
techs.unshift("sql")
//remover do fim
techs.pop()
//remover no começo
techs.shift()
//pega somente alguns elementos do array
console.log(techs.slice(1,2))
//irá remover o segundo e o terceiro(lembrando quem começa no 0)
techs.splice(1, 1)
//essa manipulação dá a possibilidade de escolher de onde vai começar e de onde 
//caso não saiba onde está o elemento que você quer retirar, podemos usar essa manipulação para achar a posição e assim remover
let index = techs.indexOf('css')
techs.splice(index, 1)

