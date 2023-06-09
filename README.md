# Zbirka zadataka iz programiranja u C++

## 1. Petlje

Za sve programe napisati verzije koristeći for, while, i do-while petlju.

1. Korisnik unosi jednu ili više ocjena od 1 do 5. Unos se prekida kada korisnik unese nulu. Napiši program koji ispisuje prosjek unesenih ocjena, na dva decimalna mjesta.

2. Korisnik unosi jednu ili više ocjena od 1 do 5. Unos se prekida kada korisnik unese nulu. Napiši program koji ispisuje koliko jedinica, petica, i pogrešnih ocjena je korisnik unio. Pogrešne ocjene su sve one koje nisu 1, 2, 3, 4, ili 5.

3. Korisnik unosi jedan ili više pozitivnih cijelih brojeva. Unos se prekida kada korisnik unese nulu. Napiši program koji ispisuje najveći uneseni broj.

4. Korisnik unosi jedan ili više pozitivnih cijelih brojeva, manjih od 1.000.000. Unos se prekida kada korisnik unese nulu. Napiši program koji ispisuje najmanji uneseni broj.

5. Korisnik unosi jedan ili više pozitivnih cijelih brojeva, manjih od 1.000.000. Unos se prekida kada korisnik unese nulu. Napiši program koji ispisuje najveci i najmanji uneseni broj, kao i razliku između ta dva broja.

6. Korisnik unosi cijeli broj, koji je uvijek od 3 do 12. Napiši program koji ispisuje faktorijel unesenog broja.

7. Napiši program koji ispisuje prvih 14 elemenata Fibonačijevog niza.

## 2. Стрингови

За све програме написати верзије користећи for, while, и do-while петљу.

1. Корисник уноси ријеч која има непознат број слова. Напиши програм који исписује унесену ријеч уназад.

2. Корисник уноси ријеч која има непознат број слова. Напиши програм који исписује свако треће слово, почевши од првог. Примјер: `programator` ⇨ `pgmo`

## 3. Знакови (карактери)

За све програме написати верзије користећи for, while, и do-while петљу.

1. Корисник уноси реченицу. Напиши програм који исписује унијету реченицу али тако да умјесто сваког самогласника (малог или великог слова) исписује велико слово 'Х'. Примјер: `Repetitio est mater studiorum` ⇨ `RXpXtXtXX Xst mXtXr stXdXXrXm`.

## 4. Switch (избори, гранање, свич)

1. Корисник уноси један карактер који може бити: број, слово (мало или велико), % (знак за модуло), или / (знак за дијељење). Напиши програм који исписује који од четири наведена типа карактера је корисник унио. Корисник неће унијети ништа друго осим броја, слова, %, или /.

Примјери за тестирање:

Ако корисник унесе `%` ... програм исписује `Korisnik je unio znak za modulo!`.

Ако корисник унесе `/` ... програм исписује `Korisnik je unio znak za dijeljenje!`.

Ако корисник унесе `6` ... програм исписује `Korisnik je unio broj!`.

Ако корисник унесе `H` ... програм исписује `Korisnik je unio slovo!`.

2. Корисник уноси реченицу која садржи мала и велика слова, размаке, зарезе, и тачке. Напиши програм који исписује колико реченица садржи: самогласника, сугласника, размака, зареза, и тачака. Користити наредбу свич.

Примјер за тестирање:

Ако корисник унесе реченицу `Dum spiro, spero.` програм исписује:

```
Broj suglasnika: 8
Broj samoglasnika: 5
Broj razmaka: 2
Broj zareza: 1
Broj tacaka: 1
```

## 5. Функције

Нешто о функцијама у С++ (нисмо још све обрадили) можете наћи у ПДФ формату [овдје](https://github.com/gweler/zbirka/blob/main/Ne%C5%A1to%20o%20funkcijama%20u%20C%2B%2B.pdf) (преузето [одавде](https://www.geeksforgeeks.org/functions-in-cpp/)).

Податке о уграђеним математичким функцијама у С++ можете наћи [овдје](https://en.cppreference.com/w/cpp/numeric/math).

1. Корисник уноси дужине двије катете правоуглог троугла (оба ће бити реални бројеви). Напиши програм који исписује дужину хипотенузе троулга. Примјеи за тестирање:

Примјер 1

```
k1 = 3
k2 = 4
h = 5
```

Примјер 2

```
k1 = 12.34
k2 = 56.78
h = 58.1055
```

2. Напиши функцију која увијек враћа вриједност броја π (пи, Архимедова константа), на четири децимална мјеста.

3. Напиши функцију враћа збир своја два параметра. И параметри и збир су цијели бројеви.

4. Напиши функцију са сљедећим карактеристикама. Функција се зове `slovo` и има два параметра (аргумента): `string ime` и `int redni_broj`. Функција враћа једно слово из имена (један `char`), које је под редним бројем `redni_broj`.

На примјер, ако корисник позове функцију на сљедећи начин: `slovo("Programislav", 4)`, функција ће да врати слово `g` јер је то 4. (четврто) слово имена Програмислав.

Функција `main` треба да испише пронађено слово.

5. Напиши функцију са сљедећим каракетристикама. Функција се зове `da_li_je_djeljiv` и има два параметра (аргумента): `int broj` и `int sa_brojem`. Функција провјерава да ли је `broj` дјељив са `sa_brojem` (обе промјенљиве су цијели бројеви). Ако је први параметар дјељив са другим параметром, функција треба да испише `Prvi broj je djeljiv sa drugim brojem`. Ако први параметар није дјљеив са другим параметром, функција треба да испише `Prvi broj nije djeljiv sa drugim brojem`. Функција нема повратну вриједност.

На примјер:

Ако се функција позове на сљедећи начин: `da_li_je_djeljiv(27, 3)` потребно је да функција испише `Prvi broj je djeljiv sa drugim brojem`.

Ако се функција позове на сљедећи начин: `da_li_je_djeljiv(74, 6)` потребно је да функција испише `Prvi broj nije djeljiv sa drugim brojem`.

6. Напиши функцију из претходног задатка али тако да:

Функција враћа Булову вриједност тачно (Boolean bool true) ако је први параметар дјељив са другим параметром.

Функција враћа Булову вриједност нетачно (Boolean bool false) ако први параметар није дјељив са другим параметром.

Потребно је да главна функција `main` испише `TACNO` или `NETACNO` у зависности од повратне вриједности фукције.

7. Напиши функцију која провјерава да ли је година преступна. Функција се зове `da_li_je_prestupna` има један параметар `int godina`. Преступна година испуњава један од сљедећа два услова:

- Година је дјељива је са 4 али није дјељива са 100
- Година је дјељива је са 400.

Функција `main` треба да испише `Godina JESTE prestupna` или `Godina NIJE prestupna` у зависности од повратне вриједности функције.
