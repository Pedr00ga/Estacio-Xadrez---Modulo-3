# ♟️ Simulador de Movimentos de Xadrez em C

Este programa simula os movimentos de peças de xadrez (Torre, Bispo, Rainha e Cavalo) com base em uma opção definida pelo usuário via código.

## 📁 Arquivo

Salve o código em um arquivo com extensão `.c`. Exemplo:

```bash
xadrez.c
```

## 🔧 Requisitos

* Compilador C (como `gcc`)
* Terminal ou prompt de comando

## 🛠️ Como Compilar

Use o terminal para compilar o programa:

```bash
gcc xadrez.c -o xadrez
```

> Isso criará um executável chamado `xadrez`.

## ▶️ Como Executar

No terminal:

```bash
./xadrez
```

> No Windows, use:

```cmd
xadrez.exe
```

## 🧠 Como Funciona

O programa utiliza uma **estrutura `switch`** para selecionar uma das peças de xadrez, com base no valor da variável `opcoes`:

| Valor de `opcoes` | Peça Selecionada |
| ----------------- | ---------------- |
| 1                 | Torre            |
| 2                 | Bispo            |
| 3                 | Rainha           |
| 4                 | Cavalo           |

Os movimentos são impressos no terminal com comandos simples como `Direita`, `Esquerda`, `Cima`, etc.

## ✏️ Como Alterar a Peça

Abra o código e mude o valor da variável:

```c
int opcoes = 4; // Mude para 1, 2, 3 ou 4
```

---

