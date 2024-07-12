var date = new Date(2023,7,10,18,43,25);

console.log(date.getDate());//10

console.log(date.getMonth());//7

console.log(date.getFullYear());//2023

console.log(date.getDay());//4 (0 sunday)

console.log(date.getHours());//18

console.log(date.toString());//Thu Aug 10 2023 18:43:25 GMT+0300 (GMT+03:00)

console.log(date.toUTCString());//Thu, 10 Aug 2023 15:43:25 GMT

console.log(date.toLocaleDateString());//10.08.2023

console.log(date.toLocaleTimeString());//18:43:25

console.log(date.toISOString());//2023-08-10T15:43:25.000Z