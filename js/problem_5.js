/*
2520 is the smallest number that can be divided by each of the
numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible
by all of the numbers from 1 to 20?
*/
function smallestMultiple() {
	let divisors = [11,12,13,14,15,16,17,18,19,20];
	let number = 2520;
	let perfect;

	do {
		perfect = true;
		number += 2520;
		for (i in divisors) {
			if (number % divisors[i] !== 0) {
				perfect = false;
				break;
			}
		}
	} while (!perfect);
	return number;
}

console.log(smallestMultiple());
