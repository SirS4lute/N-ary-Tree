
ArvNaria criaNoh(TipoAN ch){
    ArvNaria novo = (ArvNaria)malloc(sizeof(struct NoArvNaria));
    novo->primo = NULL;
    novo->irmao = NULL;
    novo->info = ch;
    return novo;
}

ArvNaria criaArvNaria(TipoAN ch){
    return criaNoh(ch);
}

ArvNaria inicializa(TipoAN ch){
    return criaNoh(ch);
}

Bool insere(ArvNaria raiz, TipoAN ch, TipoAN chPai){
    ArvNaria pai = buscaTipoAN(chPai, raiz);
    if(!pai)
        return FALSE;
    
    ArvNaria filho = criaNoh(ch);
    ArvNaria p = pai->primo;
    if(!p)
        pai->primo = filho;
    else{
        while(p->irmao)
            p = p->irmao;
        p->irmao = filho;
    }
    return TRUE;
}

ArvNaria subArvNaria(ArvNaria arv){
    if(arv->primo != NULL)
        return arv->primo;
    else
        return arv->irmao;
}

void exibirArvore(ArvNaria raiz){
    if(raiz == NULL)
        return;
    printf("%d(", raiz->info);
    ArvNaria p = raiz->primo;
    while(p){
        exibirArvore(p);
        p = p->irmao;
    }
    printf(")");
}

ArvNaria buscaTipoAN(TipoAN ch, ArvNaria raiz){
    if(raiz == NULL)
        return NULL;
    if(raiz->info == ch)
        return raiz;
    ArvNaria p = raiz->primo;
    while(p){
        ArvNaria resp = buscaTipoAN(ch, p);
        if(resp)
            return resp;
        p = p->irmao;
    }
    return NULL;
}

Bool estaNaArv(ArvNaria raiz, TipoAN ch){
    if(buscaTipoAN(ch, raiz)){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

Bool vazioArvNaria( ArvNaria arv){
    if(arv == NULL){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

void insereArvNaria(ArvNaria a, ArvNaria sa){
    if(!vazioArvNaria(a)){
        if(vazioArvNaria(a->primo))
            a->primo = sa;
        else{
            if(!vazioArvNaria(sa)){
                ArvNaria p = sa;
                while(p->primo){
                    p = p->primo;
                }
                p->primo = a->primo;
                a->primo = sa;
            }
            
        }
    }
}

void adicionaArvNaria(ArvNaria a , ArvNaria sa){
    if(!vazioArvNaria(a)){
        if(vazioArvNaria(a->primo))
            a->primo = sa;
        else{
            if(!vazioArvNaria(sa)){
                ArvNaria p = a;
                while(p->primo){
                    p = p->primo;
                }
                p->primo = sa;
            }
        }
    }
}

void elimSubArvNaria( ArvNaria a , int i){
    if(!vazioArvNaria(a)){
        if(i == 0 || i < 0){
            return destruirArvNaria(a);
        }
        ArvNaria p = a;
        int j;
        for(j = 1 ; j < i && !vazioArvNaria(p->primo); j++){
            p = p->primo;
        }
        p->primo = NULL;
    }
}

void destruirArvNaria(ArvNaria a){
    if(!vazioArvNaria(a)){
        destruirArvNaria(a->irmao);
        destruirArvNaria(a->primo);
        free(a);
    }
}