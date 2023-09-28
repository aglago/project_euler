# Learning Javascript Through Problem Solving.
## Array comparison
Comparing two arrays with === checks if the two arrays are the same object in memory, and not if their contents are the same.

### What does it mean to say two arrays are the same object in memory.
When we say that two arrays are the same object in memory, it means that both arrays refer to the exact same location in computer memory. In JavaScript, objects, including arrays, are stored as reference types. When you assign an array to a variable or pass it as an argument to a function, you're actually working with a reference to the array's memory location, not a copy of the array itself.

Here's an example:

```javascript
var array1 = [1, 2, 3];
var array2 = array1; // array2 now references the same memory location as array1

console.log(array1 === array2); // This will be true because they reference the same memory location
```

In the example above, `array1` and `array2` are two different variables, but they both point to the same array in memory. Any changes made to one of them will affect the other because they are essentially the same array in memory.

So, when we use the `===` operator to compare two arrays in JavaScript, it checks whether they are the same object in memory, not whether they have the same elements. If you want to compare the contents of two arrays to check if they have the same elements, you need to loop through the arrays and compare their elements individually, as shown in the corrected `isPalindromic` function in your code.


