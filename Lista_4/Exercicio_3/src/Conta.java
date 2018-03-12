
public class Conta {

	private int numero;
	private double saldo;
	public Cliente titular;
	private static final float TAXA = 0.1F;

	public Conta(Cliente cliente, int numero) {
		this.titular = cliente;
		this.numero = numero;
		this.saldo = 0;
	}

	public void deposita(double valor) {
		if (valor > 0)
			this.saldo += valor;
	}

	public double saque(double valor) {
		if (valor > 0 && valor <= this.saldo)
			this.saldo -= valor;
		return valor * (1 - TAXA);
	}

	public double transfere(double valor, Conta destino) {
		double t = saque(valor);
		destino.deposita(t);
		return t;
	}

	public double getSaldo() {
		return this.saldo;
	}

}
