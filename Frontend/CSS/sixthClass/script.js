let button = document.querySelector('.button')
let sideBar = document.querySelector('.sideBar')

let state = false

button.addEventListener('click', () => {
    state = !state
    if(state){
        sideBar.style.left = '0'
        button.src = 'wrong.svg'
    }else{
        sideBar.style.left = '-100%'
        button.src = 'hamburger.svg'
    }
})