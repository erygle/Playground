const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function where(num, random) {
  rl.question('Enter number: ', (input) => {
    num = parseInt(input);

    if (num < random) {
      console.log("Random is bigger.");
      where(num, random);
    } else if (num > random) {
      console.log("Number is bigger.");
      where(num, random);
    } else {
      console.log("The number is " + random);
      rl.close();
    }
  });
}

let random_number = Math.floor(Math.random() * 100 + 1);
where(null, random_number);
