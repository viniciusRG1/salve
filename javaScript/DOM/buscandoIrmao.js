const element = document.querySelector('header')

console.log(element.nextElementSibling)

console.log(element.previousElementSibling)

/* aqui estaremos buscando os primeiros irmãos que apareçam junto a tag escolhida, tag irmã são as que tem o mesma tag pai, 
a diferença aqui é do mesmo modo que se utiliza pra pegar filho, no caso temos duas formas:]
    nextElementSiblind - pega a primeira coisa que vier pós tag escolhida, então assim como para o encontro de tags filhas, então quer dizer que espaços e 'enters' contaram nesse processo
    previousElementSibling - já aqui pegará de fato o primeiro filho que aparecer, oque faz com que tenhamos certeza que pegará uma tag e não um espaço ou algo parecido
    */