
public class Programa {

	public static void main(String[] args) {

		Cliente jose = new Cliente(1, "José");
		Cliente maria = new Cliente(2, "Maria");

		Conta c1 = new Conta(jose, 1);
		Conta c2 = new Conta(maria, 2);

		c1.deposita(100);
		c2.deposita(100);

		c1.saque(10);
		c2.saque(20);

		c1.transfere(20, c2);

		print(c1);
		print(c2);
	}

	private static void print(Conta conta) {
		System.out.println("Cliente Numero: " + conta.getTitular().getNumero());
		System.out.println("Cliente: " + conta.getTitular().getNome());
		System.out.println("Número Conta: " + conta.getNumero());
		System.out.println("Saldo: " + conta.getSaldo());
	}

}
