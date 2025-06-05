# ♛ MateCheck - Sistema de Movimentação de Xadrez

Um sistema avançado de simulação de movimentos de peças de xadrez desenvolvido em C, utilizando técnicas como recursividade, loops complexos e loops aninhados.

## 📋 Índice

- [Sobre o Projeto](#sobre-o-projeto)
- [Funcionalidades](#funcionalidades)
- [Pré-requisitos](#pré-requisitos)
- [Como Compilar](#como-compilar)
- [Como Executar](#como-executar)
- [Peças e Movimentos](#peças-e-movimentos)
- [Exemplos de Uso](#exemplos-de-uso)
- [Estrutura do Código](#estrutura-do-código)
- [Técnicas Implementadas](#técnicas-implementadas)

## 🎯 Sobre o Projeto

O **MateCheck** é um sistema educacional que demonstra diferentes técnicas de programação em C através da simulação de movimentos de peças de xadrez. O projeto implementa o **Nível Mestre** com técnicas avançadas de programação.

### Características Principais:
- ♛ **4 Peças de Xadrez**: Torre, Bispo, Rainha e Cavalo
- 🔄 **Recursividade**: Implementada para Torre, Bispo e Rainha
- 🔗 **Loops Complexos**: Sistema avançado para movimento do Cavalo
- 📐 **Loops Aninhados**: Implementação alternativa para o Bispo
- 🎮 **Interface Visual**: Exibição organizada com bordas e emojis

## 🚀 Funcionalidades

### 1. Movimentos Recursivos
- **Torre**: Movimento horizontal (5 casas para direita)
- **Bispo**: Movimento diagonal (5 casas cima-direita)
- **Rainha**: Movimento horizontal (8 casas para esquerda)

### 2. Loops Complexos
- **Cavalo**: Movimento em "L" (2 casas cima + 1 direita)
- Múltiplas variáveis de controle
- Uso de `break` e `continue`

### 3. Loops Aninhados
- **Bispo Alternativo**: Demonstração com loops duplos
- Loop externo: controle vertical
- Loop interno: controle horizontal

## 🛠️ Pré-requisitos

Para compilar e executar este programa, você precisa de:

- **Compilador C**: GCC, Clang, ou similar
- **Sistema Operacional**: Windows, Linux, macOS
- **Terminal/Prompt de Comando**

### Instalação do GCC:

**Windows:**
```bash
# Instalar MinGW-w64
# Ou usar Dev-C++, Code::Blocks
```

**Linux (Ubuntu/Debian):**
```bash
sudo apt update
sudo apt install gcc
```

**macOS:**
```bash
xcode-select --install
```

## ⚙️ Como Compilar

### Compilação Básica:
```bash
gcc xadrez_matecheck.c -o matecheck
```

### Compilação com Debugging:
```bash
gcc -Wall -Wextra -g xadrez_matecheck.c -o matecheck
```

### Compilação Otimizada:
```bash
gcc -O2 xadrez_matecheck.c -o matecheck
```

## ▶️ Como Executar

### Windows:
```bash
matecheck.exe
```

### Linux/macOS:
```bash
./matecheck
```

## ♟️ Peças e Movimentos

### Torre ♜
- **Movimento**: Horizontal/Vertical
- **Implementação**: Função recursiva
- **Simulação**: 5 casas para a direita
- **Técnica**: `mover_torre_recursivo()`

```c
void mover_torre_recursivo(int casas_restantes, int casa_atual)
```

### Bispo ♝
- **Movimento**: Diagonal
- **Implementação**: Recursividade + Loops Aninhados
- **Simulação**: 5 casas na diagonal (cima-direita)
- **Técnicas**: `mover_bispo_recursivo()` e `mover_bispo_loops_aninhados()`

```c
void mover_bispo_recursivo(int casas_restantes, int casa_atual)
void mover_bispo_loops_aninhados()
```

### Rainha ♛
- **Movimento**: Todas as direções
- **Implementação**: Função recursiva
- **Simulação**: 8 casas para a esquerda
- **Técnica**: `mover_rainha_recursivo()`

```c
void mover_rainha_recursivo(int casas_restantes, int casa_atual)
```

### Cavalo ♞
- **Movimento**: Em formato "L"
- **Implementação**: Loops complexos
- **Simulação**: 2 casas para cima + 1 casa para direita
- **Técnica**: Loops aninhados com múltiplas variáveis

## 💡 Exemplos de Uso

### Exemplo 1: Movimento da Torre
```
╔══════════════════════════════════════════════════════════╗
║               TORRE - RECURSIVIDADE                     ║
╚══════════════════════════════════════════════════════════╝
Movimento: 5 casas para a direita (função recursiva)

Casa 1: Direita
Casa 2: Direita
Casa 3: Direita
Casa 4: Direita
Casa 5: Direita

✓ Torre completou movimento recursivo!
```

### Exemplo 2: Movimento do Bispo
```
╔══════════════════════════════════════════════════════════╗
║               BISPO - RECURSIVIDADE                     ║
╚══════════════════════════════════════════════════════════╝
Movimento: 5 casas na diagonal (função recursiva)

Casa 1: Cima, Direita
Casa 2: Cima, Direita
Casa 3: Cima, Direita
Casa 4: Cima, Direita
Casa 5: Cima, Direita

✓ Bispo completou movimento recursivo!
```

### Exemplo 3: Movimento do Cavalo
```
╔══════════════════════════════════════════════════════════╗
║              CAVALO - LOOPS COMPLEXOS                   ║
╚══════════════════════════════════════════════════════════╝
Movimento em 'L': 2 casas para cima + 1 casa para a direita
Usando loops complexos com múltiplas variáveis e condições

--- Etapa 1: Movimento Vertical ---
Casa 1: Cima
Casa 2: Cima
✓ Movimento vertical concluído!

--- Etapa 2: Movimento Horizontal ---
Casa 1: Direita
✓ Movimento horizontal concluído!

✓ Cavalo completou movimento em 'L' com loops complexos!
```

### Exemplo 4: Bispo com Loops Aninhados
```
=== BISPO COM LOOPS ANINHADOS ===
Loop externo: movimento vertical
Loop interno: movimento horizontal

--- Movimento vertical 1 ---
Casa 1: Cima, Direita
--- Movimento vertical 2 ---
Casa 2: Cima, Direita
--- Movimento vertical 3 ---
Casa 3: Cima, Direita
--- Movimento vertical 4 ---
Casa 4: Cima, Direita
--- Movimento vertical 5 ---
Casa 5: Cima, Direita

✓ Bispo completou movimento com loops aninhados!
```

## 🏗️ Estrutura do Código

### Funções Principais:

#### 1. Funções Recursivas:
```c
void mover_torre_recursivo(int casas_restantes, int casa_atual)
void mover_bispo_recursivo(int casas_restantes, int casa_atual)
void mover_rainha_recursivo(int casas_restantes, int casa_atual)
```

#### 2. Função com Loops Aninhados:
```c
void mover_bispo_loops_aninhados()
```

#### 3. Função Principal:
- Declaração de variáveis
- Chamadas das funções de movimento
- Implementação de loops complexos para o Cavalo
- Exibição de resultados

### Estrutura de Arquivos:
```
matecheck/
├── xadrez_matecheck.c    # Código principal
├── README.md             # Este documento
└── matecheck.exe         # Executável (após compilação)
```

## 🎯 Técnicas Implementadas

### 1. Recursividade
- **Caso Base**: Condição de parada (`casas_restantes <= 0`)
- **Chamada Recursiva**: Função chama a si mesma
- **Controle de Stack**: Prevenção de overflow

```c
if (casas_restantes <= 0) {
    return;  // Caso base
}
// Lógica do movimento
mover_torre_recursivo(casas_restantes - 1, casa_atual + 1);  // Recursão
```

### 2. Loops Complexos
- **Múltiplas Variáveis**: Controle simultâneo de diferentes aspectos
- **Condições Avançadas**: Uso de `break` e `continue`
- **Estruturas Aninhadas**: Loops dentro de condicionais

```c
for (int mov_vertical = 1, casa_vertical = 1; 
     mov_vertical <= movimento_cavalo_vertical; 
     mov_vertical++, casa_vertical++) {
    // Lógica com múltiplas variáveis
    if (movimentos_feitos >= movimento_cavalo_vertical) {
        break;  // Controle de fluxo
    }
}
```

### 3. Loops Aninhados
- **Loop Externo**: Controle de repetições principais
- **Loop Interno**: Detalhamento de cada repetição
- **Sincronização**: Coordenação entre loops

```c
for (int vertical = 1; vertical <= casas_verticais; vertical++) {
    for (int horizontal = 1; horizontal <= casas_horizontais; horizontal++) {
        // Movimento coordenado
    }
}
```

## 📊 Resumo Técnico

| Peça | Técnica | Implementação | Movimento |
|------|---------|---------------|-----------|
| **Torre** | Recursividade | `mover_torre_recursivo()` | 5 casas → |
| **Bispo** | Recursividade + Loops | `mover_bispo_recursivo()` + `mover_bispo_loops_aninhados()` | 5 casas ↗ |
| **Rainha** | Recursividade | `mover_rainha_recursivo()` | 8 casas ← |
| **Cavalo** | Loops Complexos | Implementação direta no `main()` | L: 2↑ + 1→ |

### Conceitos Demonstrados:
- ✅ **Funções recursivas** com casos base
- ✅ **Loops aninhados** com controle de fluxo
- ✅ **Múltiplas variáveis** de controle
- ✅ **Estruturas condicionais** complexas
- ✅ **Controle de fluxo** com break/continue
- ✅ **Otimização** e boas práticas

## 📝 Licença

Este projeto é desenvolvido para fins educacionais e demonstração de técnicas de programação em C.

## 👨‍💻 Autor

**Antonio José** - Desenvolvimento do sistema MateCheck


---

### 🎯 Dicas de Uso:

- **Estudo**: Observe como cada técnica é implementada
- **Experimentação**: Modifique os valores de movimento
- **Análise**: Compare recursividade vs. loops para problemas similares
- **Debugging**: Use flags de compilação para análise detalhada

**Explore o poder da programação através do xadrez! ♛**