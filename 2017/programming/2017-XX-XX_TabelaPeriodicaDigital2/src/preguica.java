
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author 20151inf0115
 */
public class preguica {

    public static int numAtom;
    public static String nome;
    public static String simbolo;
    public static String massa;

    public static void main(String[] args) throws SQLException {
        Conecta conn = new Conecta();
        conn.getConnection();
        for (int i = 1; i < 50; i++) {
            String sql = "Select numeroAtomico,nome,simbolo,massa from elementos where idElemento=" + i+" order by numeroAtomico asc";
            PreparedStatement stm = Conecta.connection.prepareStatement(sql);
            ResultSet rs = stm.executeQuery();
            rs.next();
            numAtom = rs.getInt("numeroAtomico");
            nome = rs.getString("nome");
            simbolo = rs.getString("simbolo");
            massa = rs.getString("massa");
            String htm = "<html>" + numAtom + "<br><b><font size=6 color=black>" + simbolo + "</font></b><br>" + nome + "<br>" + massa + "<br></html>";
            System.out.println(htm);

        }
    }

}
