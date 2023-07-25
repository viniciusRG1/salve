const element = document.quertSelector('body')

console.log(element.firstChild)

console.log(element.firstElementChild)

/* aqui temos 2 formas de pegar informações do primeiro filho que exista dentro da tag
escolhida:
            a primeira é a firstChild - que pega a primeira coisa que existir pós inicio da tag, ou seja, um enter ou espaço podem ser pego pela função
            já a segunda é a firstElementChild - essa de fato pegará o primeiro elemnto visivle dentro da tag, ou seja, a próxima tag ou função aparente 
            */

            