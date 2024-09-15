fournisseur(f1,   omar  , 20,   annaba).
fournisseur(f2 ,  ali ,  10 ,  alger).
fournisseur(f3 ,  nabil,   30 ,  alger).
fournisseur(f4 ,  rami,   20 ,  annaba).
fournisseur(f5 ,  said,   30 ,  oran).
piece(p1,   ecrou  , rouge  , 12,  annaba).
piece(p2 ,  boulon , vert  , 17 ,  alger).
piece(p3  , vis  , bleu  , 17 ,  setif).
piece(p4  , vis  , rouge  , 14 ,  annaba).
projet(pj1,  disque,   alger).
projet(pj2,  scanner,  setif).
projet(pj3,  lecteur,  oran).
projet(pj4,  console,  annaba).
projet(pj5,  capteur,  annaba).
livraison(f1,  p1,  pj1,  200).
livraison(f1,  p1,  pj4,  700).
livraison(f2 , p3,  pj1, 400).
livraison(f2 , p3,  pj2,  200).
livraison(f2,  p3,  pj3,  200).
livraison(f2,  p3,  pj4,  500).
livraison(f3,  p3,  pj1,  200).
livraison(f3,  p4,  pj2,  500).
livraison(f4,  p2,  pj3,  300).
livraison(f4,  p4,  pj5,  300).
livraison(f5,  p1,  pj4,  100).
livraison(f5,  p2,  pj4,  500).
livraison(f5,  p3,  pj1,  100).
livraison(f5,  p4,  pj3,  200).
fpDistincts(F,P):- fournisseur(F ,  _,   _ ,  A), piece(P,   _  , _  , _ , B),A\==B.
pjF1P1(P,V):-livraison(F,  _,  P,  _),livraison(_,  B,  P,  _),projet(P,  _,   V),F==f1,B==p1.

