# Meranie pulzu

## Príprava
- Arduino UNO
- Senzor na detekciu častíc MAX30105
- Počítač
- 3-krát kábel SAMEC-SAMIČKA

## Senzor
- MAX30105 sa využíva na detekciu malých častíc v prostredí. 
- Napr. je možné ho naprogramovať na detekciu dymu v miestnosti, povrchové meranie hemoglobínu v krvi (okysličenie krvi) alebo meranie pulzu.
- Senzor nemá priemyselnú kvalitu, takže v reálnych detektoroch požiaru ho nenájdeme, ale využíva sa rovnaký princíp.
- Senzor je určený na vzdelávanie alebo hobby.

- Senzor obsahuje 3 rôzne LED diódy:
1. diódu emitujúcu červené svetlo
2. diódu emitujúcu infračervené svetlo
3. diódu emitujúci zelené svetlo (majú ho všetky fitnes náramky schopné merať váš pulz).
Keď na fitnes náramku zvolíte akciu merania pulzu a obrátite ho naruby, tak uvidíte svietiť zelenú LED diódu.

Senzor ovládame pomocou I2C rozhrania.

![Vývojový kit s čipom MAX30105](https://github.com/alexandervalach/amavet-arduino-experiments/raw/main/01%20-%20Alkohol%20tester/Obr%C3%A1zky/mq-3%20senzor%20-%20alkohol%20detektor.jpg)


## Zapojenie

## Pridanie kódu

## Jav
Po priložení prstu na senzor sa začne vykresľovať graf detekujúci pulz danej osoby.

## Vysvetlenie javu
Využíva odrazene červené a infračevené svetlo a podľa toho dokáže neinvazívne (bez pichnutia do prsta) merať okysličenie krvi a pulz.
Na meranie pulzu využía zelenú LED diódu.