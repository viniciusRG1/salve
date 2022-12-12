//cria um objeto do tipo em que o new esteja na frente

let name = new String('mark')
name.surName = "zug"
let age = new Number(23)
console.log(name.surName, age)
let date = new Date('2020-12-01')
console.log(date.__proto__)

//operadores unários
//delete apenas exclui um campo da sua struct
const person = {
    name: 'mark',
    age: 25,
}
delete person.age
console.log(person)

//operadores atitimético 

//multiplicação funciona com números reais ou não
console.log(3*2)

//divisão
console.log(12/2)

//soma
console.log(34+67)

//subtração
console.log(34-23)

//resto de divisão
let remainder = 11 % 3
console.log(remainder)

//incremento 
let increment = 0
increment++
console.log(increment)

//decremento
let decrement = 0
decrement--
console.log(decrement)

//exponencial
console.log(3 ** 2)

//agrupamento de operador(), dá preferencia ao que está dentro dos parenteses
let total = (2+3) * 5
console.log(total)
let totaly = ("oi" + "como você está?")

//operadores de comparação, irá comparar e retornar um valor boolean baseado na sua comparação

let one = 1
let two = 2

//== igual a
console.log(two == 1) //falso
console.log(one == "1") //verdadeiro

//!= diferente 
console.log(two != "2")
console.log(one != "two")
console.log(one != 1)

//=== extritamente igual a, pois caso for string ele irá concatenar, se for int então poderá ser alguma operação
console.log(one === "1")
console.log(one === 1)

//!== extritamente diferente a, será true quando algo for qualquer coisa diferente do que foi escrito, isso inclue tipo e outras coisas
console.log(two !== "2")
console.log(two !== 2)

// > maior que
console.log(one > two)

// >= maior igual que
console.log(one >= one)

//menor que
console.log(one < two)

//menor igual que
console.log(one <= two)

//operadores de atribuição
let x

//assignment
x = 1
console.log(x)

//addition assignment
x += 2
console.log(x)

//subtraction assignment
x -= 1
console.log(x)

//multiplication assignment
x *= 2
console.log(x)

//division assignment

x /= 2
console.log(x)

//remainder

x %= 2
console.log(x)

//exponetiation

x **= 2
console.log(x)

//operadores lógicos

let pao = true
let queijo = true

//AND &&
console.log(pao && queijo)//dará verdadeiro pois ambos são que ser true

//OR ||
console.log(pao || queijo)//dará verdadeiro pois apenas 1 precisa ser verdadeiro

//NOT !
console.log(!pao)//troca o valor booleano da variavel, ou seja, verdadeiro vira falso e falso vira verdadeiro

//operador condicional

const niceBreakfast = pao && queijo ? 'café bom' : "café ruim"

console.log(niceBreakfast)

//ex: MIOR DE 18   
let anos = 16
const canDrive = anos >= 18 ? 'can drive' : "can't drive"

//operador de string 

//comparision
console.log('a' == 'a')

//concatenation, isso quer dizer que irá ser juntado duas string
let alpha = 'alpha'
console.log(alpha + 'bet')

//throw, normalmente é um erro

function sayMyName(name = ' '){
    if(name === ' '){
        throw 'nome é obrigatorio'
    }

    console.log('depois do erro')
}

// try catch, é importante usar junto pois o throw cancela toda a aplicação e com o try catch ele n é finalizado

try{
    sayMyName()
}catch(e){
    console.log(e)
}

// for...of, esse for pegará 1 uma posição no tipo introduzido, se for String pegará uma letra de cada vez, se for lista, um item de cada vez

let name = 'myke'
let names = ['joao', 'paulo', 'pedro']

//for...in

let persona = {
    name:'john',
    age: 30,
    weight: 88.6
}

for(let property in person){
    console.log(property)
    console,log(persona[property])
}