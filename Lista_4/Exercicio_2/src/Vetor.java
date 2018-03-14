
public class Vetor {

	public int tamanho = 10;
	private int v[];
	private int numElementos;

	public Vetor() {
		this.numElementos = 0;
		this.v = new int[tamanho];
	}

	public int obtemTamanho() {
		return this.numElementos;
	}

	public void insereNoFinal(int novoElemento) {
		if (numElementos == tamanho)
			realocarVetor(tamanho * 2);
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
		if (pos < 0 || pos >= tamanho)
			return -1;
		v[pos] = novoValor;
		return pos;
	}

	public int elementoEm(int pos) {
		if (pos < 0 || pos >= tamanho)
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

	public void removerOcorrencias(int elemento) {
		int i = 0;
		int j = 0;
		while (i < numElementos) {
			if (v[i] == elemento) {
				j = i + 1;
				while (j < numElementos) {
					v[j - 1] = v[j];
					j++;
				}
				numElementos--;
			} else
				i++;
		}
		if (numElementos < tamanho / 2) {
			realocarVetor(tamanho / 2);
		}
	}

	private void realocarVetor(int tamanho) {
		int[] aux = new int[tamanho];
		for (int i = 0; i < numElementos; i++) {
			aux[i] = v[i];
		}
		this.v = aux;
		this.tamanho = tamanho;
	}

	public int getMaxSize() {
		return this.tamanho;
	}
}
