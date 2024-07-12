/*const readline = require('readline');

const rl = readline.createInterface({
    input : process.stdin,
    output : process.stdout
});
let num;
rl.question("", (number) => {
    //console.log('You entered '+number);
    //num = parseFloat(number);
    rl.close();
});*/
//console.log(num);

/*let num;
rl.question("enter num : ",(number) => {
    num = parseFloat(number);
    rl.close();
});
console.log(num);*/

//"use strict";

//const ps = require("prompt-sync");
//const prompt = ps();
const prompt = require("prompt-sync")({ sigint: true });

let num = prompt();
console.log(num);