# C. Удаление дубликатов

## Описание
Дан упорядоченный по неубыванию массив целых 32-разрядных чисел. Требуется
удалить из него все повторения.

Желательно получить решение, которое не считывает входной файл целиком
в память, т. е., использует лишь константный объём памяти в процессе работы.

## Условия
| Compiler                  | Time limit  | Memory limit | Input                  | Output                   |
|---------------------------|-------------|--------------|------------------------|--------------------------|
| All compilers             | 1 секунда   | 10 Mb        | `stdin` or `input.txt` | `stdout` or `output.txt` |
| Node.js 14.15.5           | 1 секунда   | 20 Mb        | `stdin` or `input.txt` | `stdout` or `output.txt` |
| Oracle Java 7             | 1 секунда   | 40 Mb        | `stdin` or `input.txt` | `stdout` or `output.txt` |
| Kotlin 1.4.30 (JRE 11)    | 1,5 секунды | 40 Mb        | `stdin` or `input.txt` | `stdout` or `output.txt` |
| Oracle Java 8             | 1 секунда   | 40 Mb        | `stdin` or `input.txt` | `stdout` or `output.txt` |
| Scala 2.13.4              | 1 секунда   | 20 Mb        | `stdin` or `input.txt` | `stdout` or `output.txt` |
| OpenJDK Java 15           | 1 секунда   | 40 Mb        | `stdin` or `input.txt` | `stdout` or `output.txt` |
| Kotlin 1.1.50 (JRE 1.8.0) | 1 секунда   | 40 Mb        | `stdin` or `input.txt` | `stdout` or `output.txt` |
| Kotlin 1.3.50 (JRE 1.8.0) | 1 секунда   | 30 Mb        | `stdin` or `input.txt` | `stdout` or `output.txt` |
| Kotlin 1.5.32 (JRE 11)    | 1,5 секунды | 40 Mb        | `stdin` or `input.txt` | `stdout` or `output.txt` |
| Node JS 8.16              | 1 секунда   | 20 Mb        | `stdin` or `input.txt` | `stdout` or `output.txt` |

## Формат ввода
Первая строка входного файла содержит единственное число $n$,
$n \leqslant 1000000$.

На следующих $n$ строках расположены числа — элементы массива,
по одному на строку. Числа отсортированы по неубыванию.

## Формат вывода
Выходной файл должен содержать следующие в порядке возрастания уникальные элементы входного массива.

## Тестовые данные
### Пример 1
#### Ввод
```
5
2
4
8
8
8
```
#### Вывод
```
2
4
8
```
### Пример 2
#### Ввод
```
5
2
2
2
8
8
```
#### Вывод
```
2
8
```

## Решение
- [`solution.cpp`](solution.cpp)
