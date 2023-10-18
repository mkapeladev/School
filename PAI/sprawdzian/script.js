
// const a = parseInt(prompt("Podaj pierwszy wyraz ciągu arytmetycznego:"));
// const b = parseInt(prompt("Podaj różnicę między kolejnymi wyrazami:"));
// const c = parseInt(prompt("Podaj ilość elementów w ciągu:"));


// if (isNaN(a) || isNaN(b) || isNaN(c)) {
//     alert("Wprowadź poprawne liczby.");
// } else {
//     const ciang = [];
//     for (let i = 0; i < c; i++) {
//         ciang.push(a + i * b);
//     }

//     alert("Twój ciąg arytmetyczny: " + ciang.join(", "));
// }

// let userInput;

// do {
//     userInput = parseInt(prompt("1 do 8 "));
// } while (isNaN(userInput) || userInput < 1 || userInput > 8);

// const num = parseInt(prompt("Proszę podać liczbę:"));

// if (num <= 1) {
//     console.log("To nie jest liczba pierwsza.");
// } else if (num <= 3) {
//     console.log("To jest liczba pierwsza.");
// } else if (num % 2 === 0 || num % 3 === 0) {
//     console.log("To nie jest liczba pierwsza.");
// }
// else{
//     console.log("to jest liczba pierwsza")
// } 


// const a = parseInt(prompt(""));
// const b = parseInt(prompt(""));
//  const c = parseInt(prompt(""));
// function cos(a ,b , c ){
//    wyn = ax*x+b*x+c(delta =b * b -4*a*c)
//    return wyn;
// }

// console.log(wyn)


// function lpierw(number) {
//     if (number <= 1) return false;
//     if (number <= 3) return true;
//     if (number % 2 === 0 || number % 3 === 0) return false;
//     for (let i = 5; i * i <= number; i += 6) {
//         if (number % i === 0 || number % (i + 2) === 0) return false;
//     }
//     return true;
// }
// for (let i = 1; i < 10000; i++) {
//     if (lpierw(i)) {
//         console.log(i);
//     }
// }