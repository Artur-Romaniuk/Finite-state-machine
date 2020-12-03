# Finite-state-machine
Simple program in C simulating specific finite-state machine.
Instruction in Polish

Artur Romaniuk	11.11.2020

Program symulujący działanie automatu skończonego M = (Q, S, d, q0, F), gdzie Q = {q0, q1, q2, q3}, S = {0, 1}, F = {q0}
∂	Wejścia
Stany	0	1
q0	q1	q2
q1	q3	q0
q2	q0	q3
q3	q1	q2

Instrukcja obsługi programu
Program rozpoczyna swoje działanie będąc w stanie q0. Program wykonuje przejścia na podstawie symboli wejściowych podanych przez użytkownika. Automat przyjmuje tylko „0” i „1”. Wszystkie symbole muszą być oddzielone białym znakiem. Po podaniu symbolu należącego do alfabetu, program wypisze stan po przejściu oraz będzie oczekiwał na kolejne polecenie. Aby zakończyć działanie programu wystarczy wpisać dowolny symbol różny od „0” i „1” i potwierdzić przyciskiem Enter. Program wtedy wypisze, czy ciąg został zaakceptowany i program będzie można bezpiecznie wyłączyć.

Przykładowe zestawy danych
Przykład 1
Dla przykładowego ciągu {0, 0, 0, 1} program wypisze, że zaakceptował wejście.
Przykład 2
Dla przykładowego ciągu {0, 0, 0, 1, 1} program wypisze, że nie zaakceptował wejścia.

