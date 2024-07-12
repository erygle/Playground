var s = "hello, world"                  // Start with some text.

console.log(s.charAt(0));               // => "h": the first character.
//console.log(s[0]);

console.log(s.charAt(s.length-1));      // => "d": the last character.

console.log(s.substring(1,4));          // => "ell": the 2nd, 3rd and 4th characters.

console.log(s.slice(1,4));              // => "ell": same thing

console.log(s.slice(-3));               // => "rld": last 3 characters

console.log(s.indexOf("l"));            // => 2: position of first letter l.

console.log(s.lastIndexOf("l"));        // => 10: position of last letter l.

console.log(s.indexOf("l", 3));         // => 3: position of first "l" at or after 3

console.log(s.split(", "));             // => ["hello", "world"] split into substrings

console.log(s.replace("h", "H"));       // => "Hello, world": replaces all instances

console.log(s.toUpperCase());           // => "HELLO, WORLD"
