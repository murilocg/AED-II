
public class Program {

	public static void main(String[] args) {

		Vetor V = new Vetor();
		V.insereNoFinal(1);
		V.insereNoFinal(2);
		V.insereNoFinal(3);
		V.insereNoFinal(1);
		V.insereNoFinal(2);
		V.insereNoFinal(3);
		V.insereNoFinal(1);
		V.insereNoFinal(2);
		V.insereNoFinal(3);
		V.insereNoFinal(1);
		V.insereNoFinal(2);

		V.imprime();

		V.alteraEm(3, 19);
		V.alteraEm(20, 9);
		for (int i = 0; i < V.obtemTamanho(); i++)
			System.out.println("Elemento na posicao " + i + ": " + V.elementoEm(i));

		System.out.println("Removendo 1");
		V.removerOcorrencias(1);
		System.out.println("Vetor tamanho: " + V.getMaxSize());

		System.out.println("Removendo 2");
		V.removerOcorrencias(2);
		System.out.println("Vetor tamanho: " + V.getMaxSize());

		System.out.println("Removendo 3");
		V.removerOcorrencias(3);
		System.out.println("Vetor tamanho: " + V.getMaxSize());

		V.reverte();
		V.imprime();
		Vetor v = new Vetor();

	}

}
