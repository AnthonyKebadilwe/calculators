const readline = require("readline"); // built-in module, no install needed

// Calculator - Basic Arithmetic

const rl = readline.createInterface({ input: process.stdin, output: process.stdout });

rl.question("Enter first number: ", (answer1) => {
    const num1 = parseFloat(answer1); // first operand

    rl.question("Enter an operator (+, -, *, /): ", (operator) => {
        rl.question("Enter second number: ", (answer2) => {
            const num2 = parseFloat(answer2); // second operand
            let result;

            try {
                switch (operator) { // decide which calculation to run based on the operator
                    case "+":
                        result = num1 + num2;
                        break;
                    case "-":
                        result = num1 - num2;
                        break;
                    case "*":
                        result = num1 * num2;
                        break;
                    case "/":
                        if (num2 === 0) throw new Error("Cannot divide by zero"); // guard against div by 0
                        result = num1 / num2;
                        break;
                    default:
                        console.log("Error!!!! Unknown operator: " + operator);
                        rl.close();
                        return;
                }

                console.log("Result: " + result);
            } catch (e) {
                console.log("Error!!!! " + e.message);
            }

            rl.close(); // closes the input stream, lets the program end
        });
    });
});
