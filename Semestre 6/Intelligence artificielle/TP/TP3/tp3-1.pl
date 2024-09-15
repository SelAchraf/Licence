distance(point(X1, Y1), point(X2, Y2), Distance) :-Distance is sqrt((X2-X1)**2+(Y2-Y1)**2).

valeur_absolue(X, X) :- X >= 0.
valeur_absolue(X, AbsX) :- X < 0, AbsX is -X.


maximum(X, Y, X) :- X >= Y.
maximum(X, Y, Y) :- X < Y.


max_et_min(A, B, C, Min) :-maximum(A, B, MaxAB),(   MaxAB = A ->  Min is min(A, C);Min is min(B, C)).

pair(X) :- X mod 2 =:= 0.


