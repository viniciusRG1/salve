function print(){
    console.log('print')
}

Input.onkeydown = function(){
    console.log('rodei')
}

const h1 = document.querySelector('h1');
h1.addEventListener('click', print)

const input = document.querySelector('input')

input.onkeydown = function(event){
    console.log(event.correntTarget.value)
}

