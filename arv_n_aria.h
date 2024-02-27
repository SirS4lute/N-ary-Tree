
#define TRUE 1;
#define FALSE 0;

typedef int TipoAN;

typedef int Bool;

struct NoArvNaria{
    TipoAN info;
    struct NoArvNaria *primo;
    struct NoArvNaria *irmao;
};
typedef struct NoArvNaria *ArvNaria;

ArvNaria criaNoh(TipoAN ch);

ArvNaria inicializa(TipoAN ch);

Bool insere(ArvNaria raiz, TipoAN ch, TipoAN chPai);

void exibirArvore(ArvNaria raiz);

ArvNaria buscaTipoAN(TipoAN ch, ArvNaria raiz);

Bool estaNaArv(ArvNaria raiz, TipoAN ch);

ArvNaria criaArvNaria(TipoAN ch); //Cria e retorna uma arvNaria(folha)com a raiz igual à TipoAN

ArvNaria subArvNaria(ArvNaria arv); //Retorna a lista de sub-árvoresassociadas a arvNaria

TipoAN raizArvNaria(ArvNaria arv); //Retorna a raiz da arvNaria a

Bool vazioArvNaria( ArvNaria arv); //informa se a árvore é vazia

void insereArvNaria( ArvNaria a , ArvNaria sa); //adiciona aárvore sa como primeirasubarvore de a

void adicionaArvNaria( ArvNaria a , ArvNaria sa); //adiciona aárvore sacomo última subarvore de a

void elimSubArvNaria( ArvNaria a , int i); //desassocia(mas não destrói) a i-ésimasubarvore de a

void destruirArvNaria( ArvNaria a); //destrói a ArvNaria a, desalocando a memória ocupada