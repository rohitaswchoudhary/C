# Python3 program to evaluate a
# given expression

# A utility function to check if
# a given character is operand
def isOperand(c):

	return (c >= '0' and c <= '9');

# utility function to find
# value of and operand
def value(c):
	return ord(c) - ord('0');

# This function evaluates simple
# expressions. It returns -1 if the
# given expression is invalid.
def evaluate(exp):

	len1 = len(exp);
	
	# Base Case: Given expression is empty
	if (len1 == 0):
		return -1;

	# The first character must be
	# an operand, find its value
	res = value(exp[0]);

	# Traverse the remaining
	# characters in pairs
	for i in range(1,len1,2):
		# The next character must be
		# an operator, and next to
		# next an operand
		opr = exp[i];
		opd = exp[i + 1];

		# If next to next character
		# is not an operand
		if (isOperand(opd)==False):
			return -1;

		# Update result according
		# to the operator
		if (opr == '+'):
			res += value(opd);
		elif (opr == '-'):
			res -= int(value(opd));
		elif (opr == '*'):
			res *= int(value(opd));
		elif (opr == '/'):
			res /= int(value(opd));

		# If not a valid operator
		else:
			return -1;
	
	return res;

# Driver Code
strin=input("enter the expression: ");
expr1 = strin;
res = evaluate(expr1);
print(expr1,"is Invalid") if (res == -1) else print("Value of",expr1,"is",res);

expr2 = "1+2*3";
res = evaluate(expr2);
print(expr2,"is Invalid") if (res == -1) else print("Value of",expr2,"is",res);

expr3 = "2+6*3+5";
res = evaluate(expr3);
print(expr3,"is Invalid") if (res == -1) else print("Value of",expr3,"is",res);

expr4 = "1++2";
res = evaluate(expr4);
print(expr4,"is Invalid") if (res == -1) else print("Value of",expr4,"is",res);

# This code is contributed by mits
