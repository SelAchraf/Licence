element(X,[X|_]):- !.
element(X,[_|L]):-element(X,L),!.

ajouter([X],[Y]):-Y is X+1.
ajouter([X|RL],[Y|RL1]):- Y is X+1,ajouter(RL,RL1).

suivant(X,Y,[X|[Y|_]]).
suivant(X,Y,[_|RL]):-suivant(X,Y,RL).

maximum(M,[M]).
maximum(M,[Y|RL]):-maximum(M1,RL),M1>=Y,M is M1.
maximum(M,[Y|RL]):-maximum(M1,RL),M1<Y,M is Y.

occ([], _, 0).
occ([X|RL], X, N) :- occ(RL, X, N1), N is N1 + 1.
occ([Y|RL], X, N) :- Y \= X, occ(RL, X, N).

compress([], []).
compress([X], [X]).
compress([X,X|T], L1) :- compress([X|T], L1).
compress([X,Y|T], [X|L1]) :- X \= Y, compress([Y|T], L1).

split(L, 0, [], L).
split([H|T], N, [H|L1], L2) :- N > 0, N1 is N - 1, split(T, N1, L1, L2).

renverse([], []).
renverse([H|T], L1) :- renverse(T, R), append(R, [H], L1).

partition(_, [], [], []).
partition(X, [H|T], [H|LinfX], LsupX) :- H < X, partition(X, T, LinfX, LsupX).
partition(X, [H|T], LinfX, [H|LsupX]) :- H >= X, partition(X, T, LinfX, LsupX).




