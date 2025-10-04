# ♟️ Desafio: Movimentando as Peças do Xadrez em C

Este projeto foi desenvolvido como uma série de desafios de programação em **linguagem C**, com o objetivo de praticar **estruturas de repetição**, **loops aninhados** e **recursividade**, simulando o movimento das peças de xadrez no tabuleiro.

---

## 🧩 Estrutura do Projeto

O programa foi evoluindo em três níveis de complexidade:

### 🥉 Nível Novato – Movimentando as Peças do Xadrez
Implementa a movimentação básica de três peças usando diferentes estruturas de repetição:

- **Torre:** move 5 casas para a direita usando `for`.
- **Bispo:** move 5 casas na diagonal (cima + direita) usando `while`.
- **Rainha:** move 8 casas para a esquerda usando `do-while`.

📄 *Conceitos aplicados:* estruturas de repetição, variáveis inteiras, e `printf()` para exibir direções.

---

### 🥈 Nível Aventureiro – Movimentando o Cavalo
Expande o programa para incluir o **Cavalo**, utilizando **loops aninhados**.

- **Cavalo:** movimento em “L” → 2 casas para baixo e 1 para a esquerda.
- Usa **`for` + `while` aninhados** para representar o movimento composto.
- Mostra na tela:

📄 *Conceitos aplicados:* loops aninhados, controle de fluxo com contadores e separação de blocos de código.

---

### 🥇 Nível Mestre – Criando Movimentos Complexos
A etapa final transforma o projeto em uma versão mais avançada, com **recursividade** e **loops complexos**.

- **Torre, Bispo e Rainha:** agora usam **funções recursivas** para repetir movimentos.
- **Bispo:** combina **recursividade** com **loops aninhados** (vertical e horizontal).
- **Cavalo:** aprimorado para se mover em “L” para cima e à direita, com múltiplas variáveis, `continue` e `break`.

📄 *Conceitos aplicados:* recursividade, loops aninhados, controle de fluxo avançado, funções e modularização lógica.

---