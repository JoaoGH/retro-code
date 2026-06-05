
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Odair
 */
public final class NumerosPrimos {

    protected int lim;
    public int valorContador;
    public NumerosPrimos(int limite) {
        this.lim = limite;
    }

    public void setContador(int cont) {
        this.valorContador = cont;
    }

    public int getContador() {
        int count = this.valorContador;
        return count;
    }

    public String Primos() throws IOException {
        FileWriter arq = new FileWriter("numerosPrimos.txt");
    PrintWriter gravarArq = new PrintWriter(arq);
        int primo = 0;
        int contador = 0;
        String textArea = "";
        for (int i = 1; i <= this.lim; i++) {
            for (int j = 1; j <= i; j++) {
                
                    if (i % j == 0 ) {
                        primo++;
                        if (primo > 2) {
                            break;
                        }
                    }
                }
            
            if (primo == 2) {
                gravarArq.printf(i+" ");
                textArea += i + "\n";
                contador++;
            }
            primo = 0;
        }
        arq.close();
        setContador(contador);
        return textArea;
    }
}
