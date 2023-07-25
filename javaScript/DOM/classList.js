const element = document.querySelector('body')

element.classList.add('active', 'green')

console.log(element.classList)

element.classList.remove('active')
element.classList.toggle('active')

/* a classList faz uma lista de atributos para a modificação as 3 fuções mais utilizadas
são:
        add - adiciona independente da situação
        remove - remove o item caso exista
        toggle - caso não exista ele será introduzido*/


