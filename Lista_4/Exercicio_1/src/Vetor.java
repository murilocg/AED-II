
public class Vetor {

	public static final int TAMANHO = 10;
	private int v[];
	private int numElementos;

	public Vetor() {
		this.numElementos = 0;
		this.v = new int[TAMANHO];
	}

	public int obtemTamanho() {
		return this.numElementos;
	}

	public void insereNoFinal(int novoElemento) {
		if (numElementos == TAMANHO)
			return;
		v[numElementos++] = novoElemento;
	}

	public int posicaoDe(int elemento) {
		for (int i = 0; i < numElementos; i++) {
			if (v[i] == elemento)
				return i;
		}
		return -1;
	}

	public int alteraEm(int pos, int novoValor) {
		if (pos < 0 || pos >= TAMANHO)
			return -1;
		v[pos] = novoValor;
		return pos;
	}

	public int elementoEm(int pos) {
		if (pos < 0 || pos >= TAMANHO)
			return -1;
		return v[pos];
	}

	public void imprime() {
		for (int i = 0; i < numElementos; i++) {
			System.out.print(v[i] + " ");
		}
		System.out.println();
	}

	public void reverte() {
		int aux;
		for (int i = 0; i < numElementos / 2; i++) {
			aux = v[i];
			v[i] = v[numElementos - i - 1];
			v[numElementos - i - 1] = aux;
		}
	}
}
