package com.POO.gestaoDisk.modelo.conexao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
/**
 *
 * @author André & Letícia
 */
//public class ConexaoPostgres implements Conexao{
//    private Connection connection;
//    private final String URL = "jdbc:mysql://localhost/banco_gestao_disk?";
//    private final String USER = "root";
//    private final String PASSWORD = "Farm3R7c4984";
//
//    @Override
//    public Connection obterConexao() throws SQLException {
//        if(connection == null) {
//            connection = DriverManager.getConnection(URL, USER, PASSWORD);
//        }
//        return connection;
//    }
//
//    @Override
//    public void fecharConexao() throws SQLException {
//        if(connection != null)
//            connection.close();
//    }
//}
