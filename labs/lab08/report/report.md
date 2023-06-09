---
## Front matter
title: "Лабораторная работа №8"
subtitle: "Дисциплина: Операционные системы"
author: "Галиев Казиз Жарылкасымович"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: true # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Освоение основных возможностей командной оболочки Midnight Commander.
Приобретение навыков практической работы по просмотру каталогов и файлов; ма-
нипуляций с ними.

# Выполнение лабораторной работы

1. Изучение информацию о mc, вызвав в командной строке man mc (рис. @fig:001).

![man mc](image/1.png){#fig:001 width=70%}

2. Запустите из командной строки mc, изучите его структуру и меню.
Перейти в меню клавиша F9 (рис. @fig:002).

![меню mc](image/2.png){#fig:002 width=70%}

3. Выполните несколько операций в mc, используя управляющие клавиши
Операции с панелями 
Меняем местами панели (рис. @fig:003).

![Меняем местами панели](image/3.png){#fig:003 width=70%}

4. Меняем местами панели (рис. @fig:004).
Ctrl-u

![Меняем местами панели](image/4.png){#fig:004 width=70%}

5. Убираем панели (рис. @fig:005).
Ctrl-o

![Убираем панели](image/5.png){#fig:005 width=70%}

6. Выделение файла (рис. @fig:006).
Клавиша Insert

![Выделение файла](image/6.png){#fig:006 width=70%}

7. Копирование файла (рис. @fig:007). Клавиша F5

![Копирование файла](image/7.png){#fig:007 width=70%}

8. Перемещение файла (рис. @fig:008).
Клавиша F6 

![Перемещение файла](image/8.png){#fig:008 width=70%}

9. Получение информации о размере и правах доступа на файл 
Нажимаем Ctrl-x, а потом i (рис. @fig:009).

![Получение информации о размере и правах доступа на файл ](image/9.png){#fig:009 width=70%}

10. Выполните основные команды левой (или правой) панели (рис. @fig:010).

![команды левой (или правой) панели](image/10.png){#fig:010 width=70%}

11. Используя возможности подменю Файл выполните просмотр содержимого текстового файла (рис. @fig:011).

![просмотр содержимого текстового файла](image/11.png){#fig:011 width=70%}

12. Редактирование содержимого текстового файла (рис. @fig:012).

![Редактирование содержимого текстового файла](image/12.png){#fig:012 width=70%}

13. Создание каталога (рис. @fig:013).

![Создание каталога](image/13.png){#fig:013 width=70%}

14. Копирование файлов в созданный каталог (рис. @fig:014).

![Копирование файлов в созданный каталог](image/14.png){#fig:014 width=70%}

15. С помощью соответствующих средств подменю Команда осуществите поиск в файловой системе файла с заданными условиями (рис. @fig:015).

![Поиск файла](image/15.png){#fig:015 width=70%}

16. Выбор и повторение одной из предыдущих команд (рис. @fig:016).

![Поиск файла](image/16.png){#fig:016 width=70%}

17. Переход в домашний каталог (рис. @fig:017).

![Переход в домашний каталог](image/17.png){#fig:017 width=70%}

18. Анализ файла меню (рис. @fig:018).

![Анализ файла меню](image/18.png){#fig:018 width=70%}

19. Анализ файла расширений (рис. @fig:019).

![Анализ файла расширений](image/19.png){#fig:019 width=70%}

20. С помощью подменю Настройки показываем скрытые файлы (рис. @fig:020).

![показываем скрытые файлы](image/20.png){#fig:020 width=70%}

21. Задание по встроенному редактору mc. Создаем текстовый файл text.txt. Нажимаем Shift-F4
Открываем этот файл с помощью встроенного в mc редактора. Для этого нажимаем клавишу F4 (рис. @fig:021).

![Новый файл text.txt](image/21.png){#fig:021 width=70%}

22. Вставляем в открытый файл небольшой фрагмент текста, скопированный из интернета. Для этого зажимаем Shift и курсором выделяем нужный участок текста. Дальше стандартным сочетанием Ctrl+ins мы копируем этот кусок. Ctrl+Ins вставит нужный нам текст из буфера (рис. @fig:022).
 
![Вставляем небольшой фрагмент текста](image/22.png){#fig:022 width=70%}

23. Удаляем строку текста (рис. @fig:023).

![Удаляем строку текста](image/23.png){#fig:023 width=70%}

24. Для этого нажимаем Ctrl+y (рис. @fig:024).

![Удаляем строку текста](image/24.png){#fig:024 width=70%}

25. Выделяем фрагмент текста и копируем его на новую строку. Для выделения фрагмента текста в его начале и конце нажимаем F3. Потом перемещаем курсор на новую строку и нажимаем F5. (рис. @fig:025)

![Копируем фрагмент текста](image/25.png){#fig:025 width=70%}

26. Выделяем фрагмент текста и переносим его на новую строку. Для выделения нажимаем клавишу F3 в начале и в конце. Потом нажимаем F6 (рис. @fig:026).

![Переносим фрагмент текста](image/26.png){#fig:026 width=70%}

27. Сохраняем файл. Кнопка F2 (рис. @fig:027). 

![Сохраняем файл](image/27.png){#fig:027 width=70%}

28. Отменяем последнее действие Ctrl+u (рис. @fig:028).

![Отменяем последнее действие](image/28.png){#fig:028 width=70%}

29. Перейдем в начало файла, нажав Ctrl+Home (рис. @fig:029).

![Перейдем в начало файла нажав Ctrl+Home](image/29.png){#fig:029 width=70%}

30. Перейдем в конец файла, нажав Ctrl+End (рис. @fig:030).

![Перейдем в конец файла, нажав Ctrl+End](image/30.png){#fig:030 width=70%}

31. Сохраним и закроем файл. Клавиши F2 и копка 10 выход (рис. @fig:031).

![Сохраним и закроем файл](image/31.png){#fig:031 width=70%}

32. Открываем файл с текстом на языке программирования Python. Нажимаем F4 (рис. @fig:032).

![Открываем файл с текстом на языке программирования Python](image/32.png){#fig:032 width=70%}

33. Используя опцию меню Команда отключаем подсветку синтаксиса. (рис. @fig:033)

![отключаем подсветку синтаксиса](image/33.png){#fig:033 width=70%}

# Выводы

В результате лабораторной работы я освоил основные возможности командной оболочки Midnight Commander и приобрел навыи практической работы по просмотру каталогов и файлов, манипуяций с ними.

# Контрольные вопросы

1. Какие режимы работы есть в mc. Охарактеризуйте их. 

Панели могут быть переведены в один из двух режимов: Информация или Дерево. В режиме Информация на панель выводятся сведения о файле и текущей файловой системе, расположенных на активной панели. В режиме Дерево на одной из панелей выводится структура дерева каталогов.

2. Какие операции с файлами можно выполнить как с помощью команд shell, так и с помощью меню (комбинаций клавиш) mc? 

 Таблица – Операции, которые выполняются с помощью команд shell и совпадают с командами меню и функциональными клавишами
Операцию Просмотр файла можно выполнить с помощью команды cat или в mc кнопка F3
Операцию Копирование можно выполнить с помощью команды cp или в mc кнопка F5
Операцию Переименование можно выполнить с помощью команд mv и mvdir или в mc кнопка F6
Операцию Изменить права доступа можно выполнить с помощью команды chmod или в mc Ctrl-x c.

3. Опишите структура меню левой (или правой) панели mc, дайте характеристику командам. 

Перейти в строку меню панелей mc можно с помощью функциональной клавиши F9. В строке меню имеются пять меню: Левая панель, Файл, Команда, Настройки и Правая панель. Подпункт меню Быстрый просмотр позволяет выполнить быстрый просмотр содержимого панели. Подпункт меню Информация позволяет посмотреть информацию о файле или каталоге.
В меню каждой (левой или правой) панели можно выбрать Формат списка : – стандартный — выводит список файлов и каталогов с указанием размера и времени правки; – ускоренный — позволяет задать число столбцов, на которые разбивается панель при выводе списка имён файлов или каталогов без дополнительной информации; – расширенный — помимо названия файла или каталога выводит сведения о правах доступа, владельце, группе, размере, времени правки; – определённый пользователем — позволяет вывести те сведения о файле или каталоге, которые задаст сам пользователь. Подпункт меню Порядок сортировки позволяет задать критерии сортировки при выводе списка файлов и каталогов: без сортировки, по имени, расширенный, время правки, время доступа, время изменения атрибута, размер, узел.

4. Опишите структуру меню Файл mc, дайте характеристику командам. 

Команды меню Файл:
 – Просмотр (F3) — позволяет посмотреть содержимое текущего (или выделенного) файла без возможности редактирования. 
– Просмотр вывода команды (М+!) — функция запроса команды с параметрами (аргумент к текущему выбранному файлу). 
– Правка (F4) — открывает текущий (или выделенный) файл для его редактирования.
 – Копирование (F5) — осуществляет копирование одного или нескольких файлов, или каталогов в указанное пользователем во всплывающем окне место. 
– Права доступа (Ctrl-x c) — позволяет указать (изменить) права доступа к одному или нескольким файлам, или каталогам. 

5. Опишите структура меню Команда mc, дайте характеристику командам.

Команды меню Команда:
 – Дерево каталогов — отображает структуру каталогов системы. 
– Поиск файла — выполняет поиск файлов по заданным параметрам. – Переставить панели — меняет местами левую и правую панели. 
– Сравнить каталоги (Ctrl-x d) — сравнивает содержимое двух каталогов.
 – Размеры каталогов — отображает размер и время изменения каталога (по умолчанию в mc размер каталога корректно не отображается). 
– История командной строки — выводит на экран список ранее выполненных в оболочке команд.
 – Каталоги быстрого доступа (Ctrl-\)  при вызове выполняется быстрая смена текущего каталога на один из заданного списка. 
– Восстановление файлов — позволяет восстановить файлы на файловых системах ext2 и ext3. 
– Редактировать файл расширений — позволяет задать с помощью определённого синтаксиса действия при запуске файлов с определённым расширением (например, какое программное обеспечение запускать для открытия или редактирования файлов с расширением doc или docx).
 – Редактировать файл меню — позволяет отредактировать контекстное меню пользователя, вызываемое по клавише F2. 
– Редактировать файл расцветки имён — позволяет подобрать оптимальную для пользователя расцветку имён файлов в зависимости от их типа. 


6. Опишите структура меню Настройки mc, дайте характеристику командам.

Меню Настройки содержит: 
– Конфигурация — позволяет скорректировать настройки работы с панелями. 
– Внешний вид и Настройки панелей — определяет элементы (строка меню, командная строка, подсказки и прочее), отображаемые при вызове mc, а также геометрию расположения панелей и цветовыделение.
 – Биты символов — задаёт формат обработки информации локальным терминалом. 
– Подтверждение — позволяет установить или убрать вывод окна с запросом подтверждения действий при операциях удаления и перезаписи файлов, а также при выходе из программы. 
– Распознание клавиш — диалоговое окно используется для тестирования функциональных клавиш, клавиш управления курсором и прочее. 

– Виртуальные ФС –– настройки виртуальной файловой системы: тайм-аут, пароль и прочее. 
7. Назовите и дайте характеристику встроенным командам mc. 

F1 Вызов контекстно-зависимой подсказки
F2 Вызов пользовательского меню с возможностью создания и/или дополнения дополнительных функций 
F3 Просмотр содержимого файла, на который указывает подсветка в активной панели (без возможности редактирования) 
F4 Вызов встроенного в mc редактора для изменения содержания файла, на который указывает подсветка в активной панели
F5 Копирование одного или нескольких файлов, отмеченных в первой (активной) панели, в каталог, отображаемый на второй панели 
F6 Перенос одного или нескольких файлов, отмеченных в первой (активной) панели, в каталог, отображаемый на второй панели 
F7 Создание подкаталога в каталоге, отображаемом в активной панели
F8 Удаление одного или нескольких файлов (каталогов), отмеченных в первой (активной) панели файлов
F9 Вызов меню mc 
F10 Выход из mc 
8. Назовите и дайте характеристику командам встроенного редактора mc.

Редактор mc. Встроенный в mc редактор вызывается с помощью функциональной клавиши F4. В нём удобно использовать различные комбинации клавиш при редактировании содержимого (как правило текстового) файла.
9. Дайте характеристику средствам mc, которые позволяют создавать меню, определяемые пользователем. 

Команда меню Команда Редактировать файл меню — позволяет отредактировать контекстное меню пользователя, вызываемое по клавише F2 .

10. Дайте характеристику средствам mc, которые позволяют выполнять действия, определяемые пользователем, над текущим файлом.

  1. Клавиши для редактирования файла
  2. Ctrl-y удалить строку 
  3. Ctrl-u отмена последней операции 
  4. Ins вставка/замена 
  5. F7 поиск (можно использовать регулярные выражения) 
  6. -F7 повтор последней операции поиска 
  7. F4 замена 
  8. F3 первое нажатие — начало выделения, второе — окончание выделения 
  9. F5 копировать выделенный фрагмент
  10. F6 переместить выделенный фрагмент
  11. F8 удалить выделенный фрагмент
  12. F2 записать изменения в файл
  13. F10 выйти из редактора 

# Список литературы{.unnumbered}

::: {#refs}
:::
