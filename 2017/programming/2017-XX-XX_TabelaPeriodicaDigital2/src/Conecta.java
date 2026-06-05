/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import javax.swing.JOptionPane;

/**
 *
 * @author 20151inf0115
 */
public class Conecta {

    
 public static Connection connection;
    public void getConnection(){
        try {
            Conecta.connection = DriverManager.getConnection(
                    "jdbc:mysql://localhost:3306/tabela","root","");
        } catch (SQLException e) {
            JOptionPane.showMessageDialog(null, "Problemas Com a conexão ao banco de dados: "+e);
        }
    }
}