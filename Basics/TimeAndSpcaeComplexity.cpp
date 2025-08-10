// ✅ 1. What is Time Complexity?
// Time Complexity measures how the runtime of an algorithm grows as the input size n increases.

// It gives an upper bound on the time required — without depending on hardware, language, or machine speed.

// 💡 Key Idea:
// We count the number of basic operations, not actual seconds.

// ✅ 2. What is Space Complexity?
// Space Complexity is the amount of memory an algorithm uses in terms of input size n. It includes:

// Input space

// Auxiliary space (temporary variables, stacks, recursions)

// 🧠 3. Why Do We Need Time and Space Complexity?
// Because we want to:

// Compare different algorithms efficiently.

// Optimize code beyond syntax — for performance and scalability.

// Write code that works well for very large inputs (n ≤ 10^5, 10^6, 10^9 etc).

// ⏳ 4. Common Time Complexities (Ordered from Fastest to Slowest)
// Big-O Notation	Name	Example Algorithm
// O(1)	Constant time	Accessing array element arr[i]
// O(log n)	Logarithmic	Binary Search
// O(n)	Linear	Linear Search, Single Loop
// O(n log n)	Linearithmic	Merge Sort, QuickSort (avg case)
// O(n²)	Quadratic	Bubble Sort, Selection Sort
// O(n³)	Cubic	Triple nested loops
// O(2^n)	Exponential	Recursive Fibonacci, Subset problems
// O(n!)	Factorial	Backtracking (Travelling Salesman, etc.)

// ⚠️ Always aim for O(n log n) or better in large-scale inputs.

// 💾 5. Common Space Complexities
// Big-O Notation	Meaning	Examples
// O(1)	Constant space	Swapping, Two-pointer algo
// O(n)	Linear space	Extra array, hash maps, recursion
// O(log n)	Logarithmic (recursive)	Binary search (recursion stack)
// O(n²)	Matrix storage, 2D arrays	Graph adjacency matrix, DP tables

// 🛠️ 6. How to Calculate Time Complexity
// 6.1 Simple loop
// cpp
// Copy
// Edit
// for (int i = 0; i < n; i++) {
//     // O(1)
// }
// ✅ O(n)

// 6.2 Nested loop
// cpp
// Copy
// Edit
// for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//         // O(1)
//     }
// }
// ✅ O(n²)

// 6.3 Logarithmic loop
// cpp
// Copy
// Edit
// for (int i = 1; i < n; i *= 2) {
//     // O(1)
// }
// ✅ O(log n)

// 6.4 Combination
// cpp
// Copy
// Edit
// for (int i = 0; i < n; i++) {       // O(n)
//     for (int j = 1; j < n; j *= 2) {// O(log n)
//         // O(1)
//     }
// }
// ✅ O(n log n)

// 6.5 Recursion (Fibonacci)
// cpp
// Copy
// Edit
// int fib(int n) {
//     if (n <= 1) return n;
//     return fib(n-1) + fib(n-2);
// }
// ✅ O(2^n) (Exponential)

// 6.6 Recursion + Memoization
// cpp
// Copy
// Edit
// int dp[1000];
// int fib(int n) {
//     if (n <= 1) return n;
//     if (dp[n] != -1) return dp[n];
//     return dp[n] = fib(n-1) + fib(n-2);
// }
// ✅ O(n) time
// ✅ O(n) space (for dp[] array and call stack)

// 🔍 7. Analyzing Space Complexity
// Example:
// cpp
// Copy
// Edit
// int sum(int arr[], int n) {
//     int total = 0;     // O(1)
//     for (int i = 0; i < n; i++) {
//         total += arr[i];  // O(1)
//     }
//     return total;
// }
// ✅ Time: O(n)
// ✅ Space: O(1)

// Recursive Example:
// cpp
// Copy
// Edit
// int factorial(int n) {
//     if (n == 1) return 1;
//     return n * factorial(n - 1);
// }
// ✅ Time: O(n)
// ✅ Space: O(n) (due to call stack)

// 🧾 8. Types of Notations
// Notation	Meaning
// Big-O	Worst-case scenario
// Big-Ω (Omega)	Best-case scenario
// Big-Θ (Theta)	Average-case (tight bound)

// We mostly use Big-O for DSA, interviews, and CP.
