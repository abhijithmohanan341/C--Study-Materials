# C Programming: Looping Statements

## 1. `while` Loop

**Definition:** The `while` loop repeatedly executes a block of statements as long as its condition is true. The condition is checked before the loop body, so the loop may execute zero times.

**Syntax:**
```c
while (condition)
{
    statements;
}
```

## 2. `do-while` Loop

**Definition:** The `do-while` loop executes the block of statements first and checks the condition afterward. Therefore, the loop body executes at least once.

**Syntax:**
```c
do
{
    statements;
} while (condition);
```

## 3. `for` Loop

**Definition:** The `for` loop repeats a block of statements using initialization, a condition, and an update expression. The condition is checked before each iteration.

**Syntax:**
```c
for (initialization; condition; update)
{
    statements;
}
```

## 4. Difference Between `while` and `do-while`

| `while` Loop | `do-while` Loop |
|---|---|
| The condition is checked at the beginning of the loop. | The condition is checked at the end of the loop. |
| If the condition is false at the beginning, the loop body does not execute. | The loop body executes at least once, even if the condition is false. |

### `while` Loop Structure
```c
i = 10;

while (i <= 5)
{
    printf("%d", i);
    i++;
}
```

### `do-while` Loop Structure
```c
i = 10;

do
{
    printf("%d", i);
    i++;
}
while (i <= 5);
```

**Key Point:** `while` checks the condition before executing the body. `do-while` checks the condition after executing the body.
