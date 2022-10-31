const form = document.queryselector('form')
const ul = document.queryselector('ul')


form.onsubmit = function(event){
	event.preventDefault()

	const input = form.queryselector('input')
	const value = input.value

	if(value == "") return

	const li = ul.queryselector('li').cloneNode(true)
	li.queryselector('span').textContent = value
	ul.appendChild(li)

	input.value = ""

}

ul.onlick = function(event){
	if(event.target.classList.contains('delete')){
		if(confirm("deseja deletar esse item?")){
			event.target.parentElement.remove()
		}
	}
}