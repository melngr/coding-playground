% classes.pl
% Griffin Melnick, melnick DOT griffin AT gmail DOT com

takes(jane, his).
takes(jane, cs).
takes(ajit, art).
takes(ajit, cs).

classmates(X, Y) :- takes(X, Z), !, takes(Y, Z).
