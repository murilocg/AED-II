
public class Program {

	public static void main(String[] args) {

		Vetor V = new Vetor();
		V.insereNoFinal(10);
		V.insereNoFinal(8);
		V.insereNoFinal(16);
		V.insereNoFinal(7);
		V.insereNoFinal(5);
		V.insereNoFinal(13);

		V.imprime();
		
		V.alteraEm(3, 19);
		V.alteraEm(15, 9);
		for (int i = 0; i < V.obtemTamanho(); i++)
			System.out.println("Elemento na posicao " + i + ": " + V.elementoEm(i));
		V.reverte();
		V.imprime();
		Vetor v = new Vetor();

	}

}
