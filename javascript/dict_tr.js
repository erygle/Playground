/*var list = {x:1,y:3,z:5};
console.log(list.x);

var array = [1,2,3,4,5];
console.log(array);*/

/*var a=[];
var b=a;
b[0]=1;
b[1]=2;
b[2]=3;
console.log(a);
console.log(b);*/

var a=[1,2,3];
var b=[];
for(var i=0 ; i<a.length ; i++)b[i]=a[i];
b.push(4);
b.push(5);
console.log(a);
console.log(b);