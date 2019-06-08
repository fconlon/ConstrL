%regIdxCol
regIdxCol(X, Y, Z) :- regIdxCol_and1(X, Y, Z), reg(X), int(Y), reg(Z).
regIdxCol_and1(X, Y, Z) :- regIndex(X, Y), regIndex(Z, Y), X != Z, reg(X), int(Y), reg(Z).

#show regIdxCol/3.
