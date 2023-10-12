package com.POO.gestaoDisk.modelo.conexao;

import java.sql.Connection;
import java.sql.SQLException;

/**
 *
 * @author André & Letícia
 */
public interface Conexao {
    
    public Connection obterConexao() throws SQLException;
    public void fecharConexao()throws SQLException;
    
}
