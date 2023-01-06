/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

// solution has correct answer in output... is dirty.
//TODO- Refactor w/ PE solution spec
function isPalindrome(num){
  let str = num.toString();
  let n = str.length / 2;

  if (str.slice(0,n) == str.slice(-n).split("").reverse().join("")) {
    return num;
  }
  return false;
}

function largestPalindrome(){
  for (let i = 99; i <= 1000; i++){
    for (let j = i + 1; j <= 1000; j++){
      let product = i * j;
      if (isPalindrome(product))  {
        console.log(i, j, product);
      }
    }
  }
}
console.log(largestPalindrome());
