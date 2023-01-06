/*
 By listing the first six prime numbers: 2,3,5,7,11,13
 we see that the sixth prime is 13.
 what is the 10001st prime number?
 */
function isPrime(n){
  for (let i = 2; i < n; i += 1) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
function nextPrime(n) {
  for (let i = n+1; i < n**2; i++) {
    if(isPrime(i)) {
      return i;
    }
  }
}

function nthPrime(n) {
  let arr = [2];
    for (let i = 0; i < n; i++) {
      arr.push(nextPrime(arr[i]));
    }
  return arr[arr.length-1];
}

console.log(nthPrime(10000));
