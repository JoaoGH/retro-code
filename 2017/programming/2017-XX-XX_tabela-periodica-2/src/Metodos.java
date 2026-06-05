
import java.awt.image.BufferedImage;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import javax.imageio.ImageIO;
import javax.swing.Icon;
import javax.swing.ImageIcon;
import sun.misc.BASE64Decoder;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author 20151inf0115
 */
public class Metodos {

    public static int idEle;
    public static int numAtom;
    public static String nome;
    public static String simbolo;
    public static String massa;
    public static String distEletronica;
    public static double eletroneg;
    public static double densidade;
    public static double pFusao;
    public static double pEbulicao;
    public static String aplicacao;
    public static String descImagem;
    public static String img64;
    public static int grupo;
    public static int periodo;

    public void ConsultarElementos(int numAto) throws SQLException, UnsupportedEncodingException, IOException {
        String sql = "Select * from elementos where numeroAtomico="+numAto;
        PreparedStatement stm = Conecta.connection.prepareStatement(sql);
        ResultSet rs = stm.executeQuery();
        rs.next();
        this.numAtom = rs.getInt("numeroAtomico");
        
        String nomez = rs.getString("nome");
        String value = new String(nomez.getBytes("ISO-8859-1"));
        this.nome=value;
        
        String simboloz = rs.getString("simbolo");
        String value1 = new String(simboloz.getBytes("ISO-8859-1"));
        this.simbolo=value1;
        
        this.massa = rs.getString("massa");
        this.distEletronica = rs.getString("distEletronica");
        this.eletroneg = rs.getDouble("eletronegatividade");
        this.densidade = rs.getDouble("densidade");
        this.pFusao = rs.getDouble("pFusao");
        this.pEbulicao = rs.getDouble("pEbulicao");
        
        //this.aplicacao = rs.getString("aplicacoes");
        String aplicacaoz = rs.getString("aplicacoes");
        String value2 = new String(aplicacaoz.getBytes("ISO-8859-1"));
        this.aplicacao=value2;
        
        String descImagemz=rs.getString("descImagem");
        String value3=new String(descImagemz.getBytes("ISO-8859-1"));
        this.descImagem = value3;
        
        String img64z = rs.getString("img64");
        String value4 = new String(img64z.getBytes("ISO-8859-1"));
        this.img64 = value4;
        
        this.grupo = rs.getInt("grupo");
        this.periodo = rs.getInt("periodo");
        test teste = new test();
        teste.setVisible(true);
    }

    public Icon img64Converter() throws IOException{
        BASE64Decoder decoder = new BASE64Decoder();
        byte[] imgBytes = decoder.decodeBuffer(Metodos.img64);
        ByteArrayInputStream bis = new ByteArrayInputStream(imgBytes);
        BufferedImage bufImg = ImageIO.read(bis);
        ImageIcon ico = new ImageIcon();
        ico.setImage(bufImg);
        return ico;
    }
    public static int getIdEle() {
        return idEle;
    }

    public static int getNumAtom() {
        return numAtom;
    }

    public static String getNome() {
        return nome;
    }

    public static String getSimbolo() {
        return simbolo;
    }

    public static String getMassa() {
        return massa;
    }

    public static String getDistEletronica() {
        return distEletronica;
    }

    public static double getEletroneg() {
        return eletroneg;
    }

    public static double getDensidade() {
        return densidade;
    }

    public static double getpFusao() {
        return pFusao;
    }

    public static double getpEbulicao() {
        return pEbulicao;
    }

    public static String getAplicacao() {
        return aplicacao;
    }

    public static String getDescImagem() {
        return descImagem;
    }

    public static String getImg64() {
        return img64;
    }

    public static int getGrupo() {
        return grupo;
    }

    public static int getPeriodo() {
        return periodo;
    }
    
}
