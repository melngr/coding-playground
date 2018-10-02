% cities.pl
% Griffin Melnick, melnick DOT griffin AT gmail DOT com

rainy(seattle).
rainy(rochester).
cold(rochester).
snowy(X) :- rainy(X), cold(X).
snowy(troy).
