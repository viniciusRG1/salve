//createElement
const div = document.createElement('div');
div.innerText = "olá devs!"

//append prepend
const body =document.querySelector('body');

body.prepend(div)

//insertBefore
//const body = document.querySelector('corpo');
const script = body.querySelector('script');
body.insertBefore(dic, script);

//insertBefore
//const body = document.querySelector('corpos');
const header = body.querySelector('header');
body.insertBefore(dic, header.nextElementSibling);

