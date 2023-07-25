const header = document.querySelector('header')
header.setAttribute('id', 'header')

const headerId = document.querySelector('#header')

console.log(headerId.getAttribute('class'))

header.removeAttribute('id')

header.setAttribute('class', 'bg header')