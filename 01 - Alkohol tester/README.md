# Alkohol tester

## Príprava
- Arduino UNO
- MQ3 senzor
- LED dióda ľubovoľnej farby
- 3-krát kábel SAMEC-SAMIČKA

## Senzor
Senzor má 4 základný piny:
- AO - analógový výstup (Analog Output)
- DO - digitálny výstup (Digital Output)
- GND - uzemnenie (Ground)
- VCC - napätie (Voltage at the Common Collector)

Využijeme 3 z nich: A0, GND a VCC.

![Senzor MQ-3 na meranie hladiny alkoholu v dychu](https://github.com/alexandervalach/amavet-arduino-experiments/raw/main/01%20-%20Alkohol%20tester/Obr%C3%A1zky/mq-3%20senzor%20-%20alkohol%20detektor.jpg)

## Zapojenie

## Pridanie kódu
Napätie genrovaná na senzore pri chemickou jave je závislé od okolitej teploty (teploty v miestnosti alebo danom prostredí). Preto je vhodné senzor MQ-3 v miestnosti pred prezentovaním kalibrovať (upraviť hodnoty). Tu pomôžu dvaja animátori. Jeden nebude mať v dychu alkohol a druhý ho bude mať (tým, že si napríklad vypláchne pusu ústnou vodou s alkoholom). Podľa výslednych hodnôt napätia upravíme kód na hranice tak, aby sa červená LED rozsvietila v prípade prítomnosti alkoholu v dychu.

## Jav
Ak je v dychu prítomný alkohol, rozsvieti sa červená LED dióda.

## Vysvetlenie javu
Etanol (alkohol) nachádzajúci sa v dychu po požití alkoholických nápojov sa oxiduje pri anóde:
CH3CH2OH + H2O -> CH3CO2H + 4H+ + 4e-

Pri katóde:
O2 + 4H+ + 4e- -> 2H2O

Celá reakcia:
CH3CH2OH + O2 → CH3COOH + H2O 

Elektrický prúd, ktorý vznikol počas tejto reakcie je zachytený a jeho hodnota prečítaná mikrokontrolerom.
Hodnota elektrického prúdu sa zvyšuje so zvýšenou hladinou alkoholu v krvi.
