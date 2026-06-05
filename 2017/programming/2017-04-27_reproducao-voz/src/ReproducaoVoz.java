import java.io.File;
import java.net.URL;
import javax.swing.*;
import javax.sound.sampled.*;

public class ReproducaoVoz {

    public static void main(String[] args) throws Exception {

        // Carrega o arquivo de áudio (não funciona com .mp3, só .wav) 
        System.out.println("olar");
        File file = new File("https://drive.google.com/drive/folders/1USShfeVaE5xcxDf90A9ao1Zga6gnnNdy\test.wav");
        Clip oClip = AudioSystem.getClip();
        AudioInputStream oStream = AudioSystem.getAudioInputStream(file);
        oClip.open(oStream);

        oClip.loop(0); // Toca uma vez
        //clip.loop(Clip.LOOP_CONTINUOUSLY); // Toca continuamente (para o caso de músicas)

        // Para a execução (senão o programa termina antes de você ouvir o som)
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                JOptionPane.showMessageDialog(null, "Clique pra fechar!");
            }
        });
    }
}