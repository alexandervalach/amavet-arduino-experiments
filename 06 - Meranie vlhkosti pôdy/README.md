# Meranie vlhkosti pôdy

## Príprava
- Arduino UNO
- Senzor na meranie vlhkosti pôdy (napríklad ER-SPM32100S)
- Zelená (modrá) LED dióda
- 8-krát kábel SAMEC-SAMIČKA

Pripravíme si kvetináč so suchou a druhý s vlhkou zeminou.
Alternatívne je možné použiť sklenený pohár naplnený vodou.
Plastový sa neodporúča, pretože je veľmi ľahké ho pri manipulácii prevrátiť.

Senzor sa pri dlhšom používaní oxiduje a stráca svoju presnosť.
Preto je dôležité uchovávať ho v obale (napr. plastovom púzde, v ktorom bol pôvodne zabalený).

## Knižnice
- Nie je nutné pridávať externé knižnice
- Arduino totiž prečíta iba nameranú hodnotu napätia a podľa nej dokáže vyhodnotiť vlhkosť pôdy
- Podobne ako alkohol tester, aj tento senzor sa odporúča vopred ho nastaviť, ešte pred demonštráciou

## Komponenty
### Senzor na meranie vlhkosti pôdy (ER-SPM32100S)
![Senzor na meranie vlhkosti pôdy, ER-SPM32100S](https://github.com/alexandervalach/amavet-arduino-experiments/blob/198185ad4db478862237ccaa665cbed04f9f1a9d/06%20-%20Meranie%20vlhkosti%20p%C3%B4dy/Obr%C3%A1zky/senzor%20na%20meranie%20vlhkosti%20pody.jpg)

### LED dióda
Je dobré použiť farbu, ktorá je viditeľná na otvorenom svetle, kde sa bude pravdepodobne experiment predvádzať.

## Zapojenie

## Pridanie kódu
V kóde je dôležité kvôli demonštrácii stanoviť, kedy sa má LED dióda rozsvietiť.

## Jav
V prípade vlhkého prostredia sa LED dióda rozsvieti. 
Keď je snímač voľne ponechaný alebo je v suchom prostredí, tak LED dióda nie je rozsvietená.

## Vysvetlenie javu
Medzi oboma snímačmi (nožičky senzora) sa vytvorí elektrický prúd. 
Senzor meria odpor pôdy, ktorý takto vzniká.
V prípade vlhkeho prostredia je odpor (R, Ohm) veľmi nízky.
V prípade suchého prostredia je odpor (R, Ohm) vysoký. 