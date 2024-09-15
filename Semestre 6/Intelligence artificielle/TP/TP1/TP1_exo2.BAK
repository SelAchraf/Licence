masculin(amine).
masculin(nabil).
masculin(badr).
masculin(jamel).
feminin(samia).
feminin(louisa).
feminin(amira).
feminin(nadia).
enfant(badr,samia).
enfant(badr,amine).
enfant(louisa,amine).
enfant(amira,badr).
enfant(nadia,badr).
enfant(nabil,louisa).
enfant(jamel,nadia).
pere(X,Y) :- enfant(Y,X), masculin(X).
mere(X,Y) :- enfant(Y,X), feminin(X).
grand_pere(X,Y) :- pere(X,Z), pere(Z,Y),masculin(X).
frere(X,Z) :- enfant(X,Y),enfant(Z,Y),masculin(X),X\==Z.
soeur(X,Z) :- enfant(X,Y),enfant(Z,Y),feminin(X),X\==Z.
tante(X,Z) :- soeur(X,Y),enfant(Z,Y).
cousin(X,Z) :- enfant(X,Y),enfant(Z,W),frere(Y.W).



