# Alkohol tester

## Príprava
- Arduino UNO
- MQ3 senzor
- LED dióda ľubovoľnej farby
- 3-krát kábel SAMEC-SAMIČKA

## Zapojenie

### Senzor
Senzor má 4 základný piny:
- AO - analógový výstup (Analog Output)
- DO - digitálny výstup (Digital Output)
- GND - uzemnenie (Ground)
- VCC - napätie (Voltage at the Common Collector)

Využijeme 3 z nich. VCC zapojíme na 

## Vysvetlenie javu
Etanol (alkohol) nachádzajúci sa v dychu po požití alkoholických nápojov sa oxiduje pri anóde:
CH3CH2OH + H2O -> CH3CO2H + 4H+ + 4e-

Pri katóde:
O2 + 4H+ + 4e- -> 2H2O

Celá reakcia:
CH3CH2OH + O2 → CH3COOH + H2O 

Elektrický prúd, ktorý vznikol počas tejto reakcie je zachytený a jeho hodnota prečítaná mikrokontrolerom.
Hodnota elektrického prúdu sa zvyšuje so zvýšenou hladinou alkoholu v krvi.
