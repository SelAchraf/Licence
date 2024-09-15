7hfactoriel(0, 1).
factoriel(N, F) :-N > 0,N1 is N - 1,factoriel(N1, F1),F is N * F1.

fib(0, 1).
fib(1, 1).
fib(N, Result) :-N > 1,N1 is N - 1,N2 is N - 2,fib(N1, F1),fib(N2, F2),Result is F1 + F2.

pgcd(X, 0, X) :- X > 0.
pgcd(X, Y, D) :- X == Y, D is X.
pgcd(X, Y, D) :- X < Y, X1 is Y - X, pgcd(X, X1, D).
pgcd(X, Y, D) :- X > Y, pgcd(Y, X, D).


suite(0, 2).
suite(N, U) :-N > 0,N1 is N - 1,suite(N1, PrevU),U is 2 * PrevU + 3.


