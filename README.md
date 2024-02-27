# N-Ary Tree - Definition - 🇺🇸
A N-ary tree is a non-linear tree-like data structure with N children for each parent.
Each node in a N-ary tree has an another N-ary tree reference along with the data element. The node at the top of a tree line is called the root node

N-Ary Tree - Cost O(n):
```
Root node, with subtrees as children
          -
         ( ) Root node
        / | \
   ...( )( )( )... Subtrees / Branch
     / |  |   \
...( )( )( )  ( ) Branch node
                \
                ( ) Leaf node
    
Each node has 0, 1 or N children
```
Basically an N-Ary Tree follows the same concepts as a Binary Tree, with some adjustments to its calculations, like changing the constant 2 (binary) to a N variable.
You can see more on [Binary-Tree](https://github.com/SirS4lute/Binary-Tree)

### Functions we are using to operate n-ary trees in this repository
```
  ArvNaria criaArvNaria(TipoAN ch); //Creates and returns an arvNaria(folha) with root equals to TipoAN

  ArvNaria subArvNaria(ArvNaria arv); //Returns an list of sub-trees of arvNaria
  
  TipoAN raizArvNaria(ArvNaria arv); //Returns an root of arvNaria a
  
  Bool vazioArvNaria( ArvNaria arv); //Informs if tree is empty
  
  void insereArvNaria( ArvNaria a , ArvNaria sa); //Adds the sa tree to first sub-tree of a
  
  void adicionaArvNaria( ArvNaria a , ArvNaria sa); //Adds sa tree to last sub-tree of a
  
  void elimSubArvNaria( ArvNaria a , int i); //Unlink (but don't destroy) the i-th sub-tree of a
  
  void destruirArvNaria( ArvNaria a); //Destroy the ArvNaria a, freeing the busy memory
```

All the content in this repository dates back to my time at college, the theoretical material mostly comes from professors (that's why I give them credit here),
with some of my writings. The code found here is entirely __my own__.

# Árvore N-Ária - Definição - 🇧🇷
Uma árvore N-ária é uma estrutura de dados não linear em forma de árvore com N filhos para cada pai.
Cada nó em uma árvore N-ária possui outra referência de árvore N-ária junto com o elemento de dados. O nó no topo de uma linha de árvore é chamado de nó raiz

Árvore N-ária - Custo O(n):
```
Nó raiz, com sub-árvores como filhos
          -
         ( ) Nó raiz
        / | \
   ...( )( )( )... Sub-Árvores / Ramo
     / |  |   \
...( )( )( )  ( ) Nó ramo
                \
                ( ) Nó folha
    
Cada nó tem 0, 1 ou N filhos    
```

### Funções que estamos utilizando para operar árvores n-árias nesse repositório
```
  ArvNaria criaArvNaria(TipoAN ch); //Cria e retorna uma arvNaria(folha) com a raiz igual à TipoAN

  ArvNaria subArvNaria(ArvNaria arv); //Retorna a lista de sub-árvores associadas a arvNaria
  
  TipoAN raizArvNaria(ArvNaria arv); //Retorna a raiz da arvNaria a
  
  Bool vazioArvNaria( ArvNaria arv); //Informa se a árvore é vazia
  
  void insereArvNaria( ArvNaria a , ArvNaria sa); //Adiciona a árvore sa como primeira sub-árvore de a
  
  void adicionaArvNaria( ArvNaria a , ArvNaria sa); //Adiciona a árvore sa como última sub-árvore de a
  
  void elimSubArvNaria( ArvNaria a , int i); //Desassocia (mas não destrói) a i-ésima sub-árvore de a
  
  void destruirArvNaria( ArvNaria a); //Destrói a ArvNaria a, desalocando a memória ocupada
```

Todo o conteúdo presente neste repositório data da minha época na faculdade, o material teórico advém na sua maior parte de professores (por isso dou crédito aqui a eles), 
com alguns escritos meus. O código encontrado aqui é inteiramente de __minha autoria__.
  
