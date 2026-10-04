import java.util.*; // Imports Scanner, etc.

//Calculator - Basic Arithmetic

public class Calculator {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter first number: ");
        double num1 = input.nextDouble(); // first operand

        System.out.print("Enter an operator (+, -, *, /): ");
        String operator = input.next(); // grab the operator as text

        System.out.print("Enter second number: ");
        double num2 = input.nextDouble(); // second operand

        double result = 0;
        boolean valid = true; // tracks whether the operation went through okay

        try {
            switch (operator) { // decide which calculation to run based on the operator
                case "+": result = num1 + num2; break;
                case "-": result = num1 - num2; break;
                case "*": result = num1 * num2; break;
                case "/":
                    if (num2 == 0) throw new ArithmeticException("Cannot divide by zero"); // guard against div by 0
                    result = num1 / num2;
                    break;
                default:
                    System.out.println("Error!!!! Unknown operator: " + operator);
                    valid = false;
            }

            if (valid) {
                System.out.println("Result: " + result);
            }
        } catch (Exception e) {
            System.out.println("Error!!!! " + e.getMessage());
        }

        input.close();
    }
}
