initial(st([left, left, left, left])).
final(st([right, right, right, right])).


crossing(st([left,X,Y,Z]),st([right,X,Y,Z]), farmer_crosses_river).
crossing(st([right,X,Y,Z]),st([left,X,Y,Z]), farmer_comes_back).

crossing(st([left,X,left,Z]),st([right,X,right,Z]), bring_goose_over).
crossing(st([right,X,right,Z]),st([left,X,left,Z]), bring_goose_back).

crossing(st([left, left, X, Y]),st([right, right, X, Y]), bring_fox_over).
crossing(st([right, right, X, Y]),st([left, left, X, Y]), bring_fox_back).

crossing(st([left, X, Y, left]),st([right, X, Y, right]), bring_beans_over).
crossing(st([right, X, Y, right]),st([left, X, Y, left]), bring_beans_back).


not_allowed(st([X, Y, Y, _])) :- X \== Y.
not_allowed(st([X, _, Y, Y])) :- X \== Y.


river_aux(A,A,_,[]). % To go from A to A the crossing is empty meaning that we do not cross at all, this will be true when we reach our destination.
river_aux(A,B,V,P) :- crossing(A,C,Action), not(not_allowed(C)), not(member(C,V)),
        river_aux(C,B,[C|V],Plan), P = [Action | Plan].


river(P) :- initial(Start), final(End), river_aux(Start, End, [Start], P).
