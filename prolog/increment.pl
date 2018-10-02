% increment.pl
% Griffin Melnick, melnick DOT griffin AT gmail DOT com

plus(X, Y, Z) :- Z is X+Y.

initial([1, 2, 3]).
aux(A, V, P) :- A = [X | _Y], plus(X, 5, Sum), not( member(Sum, V) ), aux(Sum, [Sum | V], Plan),
        P = [Sum | Plan].
solve(P) :- initial(Start), aux(Start, [Start], P).
