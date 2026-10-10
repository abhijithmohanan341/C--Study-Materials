# C Programming: Conditional Statements and Conditional Operator

## 1. Simple `if` Statement

**Definition:** Executes a statement or block only when the given condition is true. If the condition is false, the block is skipped.

**Syntax:**
```c
if (condition)
{
    statements;
}
```

## 2. `if-else` Statement

**Definition:** Chooses between two blocks. The `if` block executes when the condition is true; otherwise, the `else` block executes.

**Syntax:**
```c
if (condition)
{
    statements_if_true;
}
else
{
    statements_if_false;
}
```

## 3. `else-if` Ladder

**Definition:** Checks multiple conditions in sequence. The block for the first true condition executes. If no condition is true, the final `else` block executes if it is present.

**Syntax:**
```c
if (condition1)
{
    statements1;
}
else if (condition2)
{
    statements2;
}
else if (condition3)
{
    statements3;
}
else
{
    default_statements;
}
```

## 4. Nested `if` Statement

**Definition:** An `if` statement written inside another `if` or `else` block is called a nested `if` statement.

**Syntax:**
```c
if (condition1)
{
    if (condition2)
    {
        statements;
    }
}
```

## 5. Conditional Operator (`?:`)

**Definition:** The conditional operator is a ternary operator that checks a condition and selects one of two expressions. If the condition is true, it selects the expression before the colon; otherwise, it selects the expression after the colon.

**Syntax:**
```c
condition ? expression_if_true : expression_if_false;
```

## Important Note

`if`, `if-else`, `else-if`, and nested `if` are conditional statements. The conditional operator (`?:`) is an operator, not a conditional statement.

## 6. `switch` Statement

**Definition:** The `switch` statement selects and executes a block of code based on the value of an expression. The `case` labels specify possible values, `break` exits the `switch` block, and `default` runs when no case matches.

**Syntax:**
```c
switch (expression)
{
    case constant1:
        statements;
        break;

    case constant2:
        statements;
        break;

    default:
        statements;
}
```

