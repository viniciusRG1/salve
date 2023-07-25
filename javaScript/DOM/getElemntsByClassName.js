// esse comando fará a mesma coisa que o comando getElementById, com a diferença de que em vez de pegar ID, tu pegará classe
console.log(document.getElementsByClassName('item2'));
// podemos usar também uma constante para guardar essas informações e utilizar em outro momento
const element = document.getElementsByClassName('item2');
// e utilizando isso novamente 
console.log(element)
