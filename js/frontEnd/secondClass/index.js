// loops | functions | strings | arrays | bussiness name generator | faulty calculator

// Loops while | do while | for

// let no = 10
// let i = 0

// while(i <= no){
//     console.log(i)
//     i++
// }

// do{
//     console.log(i)
//     i++
// }while(i>=no)

// for(let a = 0; a<=no; a++){
//     console.log(a)
// }

// Functions

// function add(a , b){
//     console.log(a+b)
// }

// add(1,4)
// add(5,5)

// arrow function

// const add = ()=>{
//     console.log('hey i am an arrow function')
// }

// add()

// String

// const a = "This is a string"

// console.log(typeof(a))

// Array

// let array = [[1,2,3,4,5,6,7,87]]
// console.log(typeof(array))

// let firstName = ['mohammed', 'syed', 'abdul', 'shaik'];
// let secondName = ['hamza', 'adnan', 'naser', 'mansoor'];

// function firstNameGen() {
//   let no = Math.floor(Math.random() * firstName.length);
//   return firstName[no];
// }

// function secondNameGen() {
//   let no = Math.floor(Math.random() * secondName.length);
//   return secondName[no];
// }

// console.log(firstNameGen() + '\t' + secondNameGen());

// Faulty Calculator

let a = 4
let b =6
var opr = '*'

function randomNo(){
    return Math.floor(Math.random()*10)
}
console.log(randomNo())

if(randomNo()<0 && randomNo >=4){
if(opr === '+'){
    console.log(a+b)
}}

else if(randomNo()<4 && randomNo >=6){
    console.log(a-b)
}
if(randomNo()<6 && randomNo >=8){
 if(opr === '*'){
    console.log(a*b)
}}
if(randomNo()<8 && randomNo >=10){
if(opr === '/'){
    console.log(a/b)
}}
// else{
//     console.log('Invalid Opr')
// }