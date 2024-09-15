dernier(X,[X]).
dernier(X,[_|L]):-dernier(X,L),!.

construire(X,[],[X]).
construire(X,[T|Q],[T|W]):-construire(X,Q,W).


range(X,[X|_],0).
range(X,[_|R],C):-range(X,R,I),C is I+1.
