describes how much time or memory an algorithm needs as the amount of input grows

time complexity is like basically how many times a loop or something runs

then there is space complexity- how does the memory requirement grow?

for example:
case1:

int x = 10;
cout << x;

and
case 2:

for (int i = 0; i < n; i++) {
    cout << i << ' ';
}


in case 1, the amount of work is same regardless of input (1 cycle) - O(1)
in case 2, the amount of work increases with the increase in input value (n cycles) - O(n)
n is input size
O(1) - constant growth
O(n) - work grows linearly with n


now if its a nested loop like for i<n and under that, for j<n, the inner loop runs n times for each outer loop iteration
which means total cycles run through is n*n
so, complexity will be
O(n^2)

if for some kind of nested loop, inner loop runs 5 times, and outerloop runs n times
total cycles run is 5n
complexity = O(n)       [basically n or n^2 or whatever is a simplified version of whether it is proportional to quadratic or linear or so on]


Big O - O(g(n)):
  asymptotic upper bound on how quickly a function grows.
  upper bound on an algorithm's resource requirements.
  ex:
    T(n)=3n+10
  then T(n) = O(n)
  similarly,
  T(n)=5n^2+3n+7=O(n^2)

  often use it to report worst-case running time, but those are different ideas



Big Omega - Omega(g(n))
  for ex: T(n)=3n+10 = Omega(n)





O(1) - constant growth
O(n) - linearly increasing growth/ process each element once
O(logn) - The problem size repeatedly shrinks by a constant factor
O(nlogn) - Typical efficient comparison sorting
O(n^2) - two nested loops
O(n^3) - three nested loops
O(n!) - explore all permutations
O(2^n) - Explore all subsets in a basic subset enumeration

logarithmic growth - 
  Suppose n=16, and an algorithm repeatedly halves the remaining search space:
  It takes only four halvings to reach 1. More generally, the number of halvings is about log_2 n


example:

for (int i = 1; i < n; i *= 2) {
    work();
}

values are 1,2,4,8,16,.....
after k iterations, i is 2^k and loop stops when 2^k>=n, so k is approx log_2 n 
so complexity is O(logn)






example:

for (int i = 1; i < n; i *= 2) {
    for (int j = 0; j < n; j++) {
        work();
    }
}

outerloop runs O(logn) cycles
inner loop runs O(n) cycles for each log cycle
so
complexity = O(nlogn)


