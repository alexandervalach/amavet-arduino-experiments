# Detekcia pádu

## Príprava
- Arduino UNO
- Modul MPU6050
- bzučiak (angl. buzzer)
- 8-krát kábel SAMEC-SAMIČKA

## Knižnice
- Je nutné pridať externú knižnicu do Arduino IDE
- Konkrétne MPU6050_tckn v najnovšej verzii
- Knižnica slúži na komunikáciu s akcelerometrom prostredníctvom I2C rozhrania. Je malá a má spoľahlivú kalibráciu. 
- Je možne využiť aj iné knižnice, ale nemusia byť schopné správne kalibrovať senzor (zaseknú sa na kalibrácii alebo kalibrujú senzor do nekonečna).

## Komponenty
### Modul MPU6050
- Modul MPU6050 má v sebe zabudovaný akcelerometer, gyroskop a navyše aj teplomer merajúci teplotu okolia, ktorý však nebudeme využívať

### Bzučiak
- jeho úlohou je zvukovým signálom oznámiť vznik určitej udalosti 
- napríklad náramok vyhodnotil udalosť ako voľný pád (angl. free fall)
- alebo náramok nie je schopný kalibrovať MPU6050

## Zapojenie
![Zapojenie detektora pádu](https://github.com/alexandervalach/amavet-arduino-experiments/raw/main/03%20-%20Detekcia%20p%C3%A1du/Obr%C3%A1zky/detektor%20padu%20-%20akcelerometer%20%2B%20bzuciak.jpg)

## Pridanie kódu
Pri kalibrácii dbáme na to, aby bolo zariadenie vo vodorovnej polohe na pevnej podložke. Inak by mohlo dôjsť ku chybnej kalibrácii a referečná (vodorovná) poloha by teda nebola správne určená. V takom prípade by sa napr. za voľný pád mohlo brať práve uloženie do vodorovnej polohy.

- Pozn.
Na nahrávanie skompilované kódu na zariadenie používame USB kábel

## Jav
- Keď sa zmení zrýchlenie na osiach a zároveň aj poloha gyroskopu, môžeme uvažovať, že nastal voľný pád zariadenia.
- Testujeme zariadenie v plastovej krabičke pripojené na externý zdroj napájania, napr. 9 V batériu

## Vysvetlenie javu
