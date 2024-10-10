function faultyCalculator(a, b, operator) {
    // Generate a random number between 0 and 1
    let random = Math.random();

    // Decide if the result should be faulty (10% chance)
    let shouldFault = random < 0.1;

    let result;

    // Perform the correct operation based on the operator
    switch (operator) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b !== 0) {
                result = a / b;
            } else {
                result = 'Cannot divide by zero';
            }
            break;
        case '**':
            result = a ** b;
            break;
        default:
            return 'Invalid operator';
    }

    // If it should be faulty, modify the result slightly
    if (shouldFault) {
        result += (Math.random() * 10) - 5; // Randomly adjust result by up to ±5
    }

    return result;
}

// Example usage
console.log(faultyCalculator(10, 5, '+')); // Correct 90% of the time, faulty 10% of the time
console.log(faultyCalculator(10, 5, '-'));
console.log(faultyCalculator(10, 5, '*'));
console.log(faultyCalculator(10, 5, '/'));
console.log(faultyCalculator(2, 3, '**'));
