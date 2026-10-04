# Calculator - Basic Arithmetic

def main():
    try:
        num1 = float(input("Enter first number: "))              # first operand
        operator = input("Enter an operator (+, -, *, /): ")     # grab the operator as text
        num2 = float(input("Enter second number: "))              # second operand

        if operator == "+":
            result = num1 + num2
        elif operator == "-":
            result = num1 - num2
        elif operator == "*":
            result = num1 * num2
        elif operator == "/":
            if num2 == 0:
                raise ZeroDivisionError("Cannot divide by zero")  # guard against div by 0
            result = num1 / num2
        else:
            print("Error!!!! Unknown operator: " + operator)
            return  # stop here, there's nothing to print

        print("Result: " + str(result))

    except Exception as e:
        # catches bad number input, division by zero, anything else
        print("Error!!!! " + str(e))


main()
