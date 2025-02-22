// LCM(A,B) * GCD(A,B) = A*B 
// Fibonacci(n)=round((((sqrt(5)+1)/2)^n)/sqrt(5))

/*
  TC
  Ordered map - always O(logn)
  Unordered map - Best and Avg - O(1)
                  Worst - O(n) which is vv rare.  
*/


// DP Problem -> Compulsorily need to have 
//     BOTH 
//         Overlapping subproblem (F(x) may be calculated multiple times)
//         Optimal Substructure (Like F(n) depends on F(n-1))
// Factorial is not an overlapping subproblem coz F(n)=n*F(n-1) there are no values which are calculated multiple times
