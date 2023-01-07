/*
Problem-1: 
if we list all the natural numbers below ten that are multiples of 3 or 5, 
we get 3,5,6, and 9. The sum of these multiples is 23. 
find the sum of all the multiples of 3 or 5 below 1000
*/

function threeOrFive(num) {
    let sum = 0; 
    for (let i = 0; i < num; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i; 
        }
    }
    return sum; 
}

console.log(threeOrFive(1000)); 
