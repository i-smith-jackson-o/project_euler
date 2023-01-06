/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

function isPrime(n) {
	for (let i = 2; i < n; i+= 1) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}


function largestPrime(num) {
	let primeArr = [];
	for (let i = 1; i < Math.sqrt(num); i++ ) {
		if (num  % i == 0 && isPrime(i)) {
			primeArr.push(i);
			}
		}
	return primeArr[primeArr.length-1];
}

console.log(largestPrime(600851475143));
console.log(isPrime(6));


// solution from poblem overview
function largestPrimeFactor(){
	let n = 600851475143
	let factor = 2;
	let lastFactor = 1;

	while (n > 1) {
		if (n % factor == 0) {
			lastFactor = factor;
			n = n / factor;
			while (n % factor == 0) {
				n = n / factor;
			}
		}
		factor = factor + 1;
	}
	return lastFactor;
}

console.log(largestPrimeFactor());
