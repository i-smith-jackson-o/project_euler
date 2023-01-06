/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

// brute force solution
function isPrime(n) {
  for (let i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

function sumPrimes() {
  let sum = 0;
  for (let i = 2; i < 2000000; i++){
    console.log(i);
    if (isPrime(i)){
      sum += i;
    }
  }
  return sum;
}
// took 2m 45s on my machine
//console.log(sumPrimes());

function erastosthenes(n) {
  // algorithnm to find all primes under n
  var array = [], upperLimit = Math.sqrt(n), output = [];

  // make an array from 2 to (n - 1)
  for (var i = 0; i < n; i++) {
    array.push(true);
  }

  // remove multiples of primes starting from 2,3,5...
  for (var i = 2; i <= upperLimit; i++) {
    if (array[i]) {
      for (var j = i * i; j < n; j += i) {
        array[j] = false;
      }
    }
  }

  // arr array[i] set to true are prime
  for (var i = 2; i < n; i++) {
    if (array[i]) {
      output.push(i);
    }
  }
  // get sum of items in array
  let sum = 0;
  for (let i = 0; i < output.length; i++) {
    sum += output[i];
  }
  let msg = `The sum of all prime numbers less than ${n} is ${sum}.`
  return msg;
}
// runs in under a second
console.log(erastosthenes(2000000));
