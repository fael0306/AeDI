typedef struct listaSeq {

  int n;
  int valores[10];

}
listaSeq;

int buscarvalor(listaSeq L, int num) {
  int k;
  for (k = 0; k < L.n; k++) {
    if (L.valores[k] == num) {
      return k;
    }
  }
  return -1;
}

void inserirnofinal(listaSeq * L, int num) {
  int k;
  if (L -> n < 10) {
    if (buscarvalor( * L, num) == -1) {
      L -> valores[L -> n] = num;
      (L -> n) ++;
    } else {
      printf("Elemento já cadastrado.");
    }
  } else {
    printf("Lista cheia");
  }
}

void inicializar(listaSeq * L) {
  L -> n = 0;
}

int main() {

  listaSeq lista;

  inicializar( & lista);
  inserirnofinal( & lista, 4);
  inserirnofinal( & lista, 7);
  inserirnofinal( & lista, 1);
  inserirnofinal( & lista, 2);
  int busca = buscarvalor(lista, 7);
  int busca2 = buscarvalor(lista, 0);

  return 0;
}
