package com.company;

public class Cliente {
     private String nome;
     private String endereco;
     private double dividas;
     private int cartaoFidelidade;

     public Cliente(){}

     public Cliente(String nome, String endereco){
          this.nome = nome;
          this.endereco = endereco;
          this.dividas = 0;
          this.cartaoFidelidade = 0;
     }


     public void cadastrarDivida(double valor){
          this.dividas += valor;
     }

     public  void pagarDivida(double valor){
          this.dividas -= valor;
     }

     public void pontoFidelidade(){
          if(this.cartaoFidelidade == 10){
               this.cartaoFidelidade = 1;
          }
          else{
               this.cartaoFidelidade++;
          }
     }

     public Cliente clonar() {
          Cliente cliente = new Cliente();
          return cliente;
     }

     public String getNome() {
          return nome;
     }

     public String getEndereco() {
          return endereco;
     }

     public double getDividas() {
          return dividas;
     }

     public int getCartaoFidelidade() {
          return cartaoFidelidade;
     }

     public void setNome(String nome) {
          this.nome = nome;
     }

     public void setEndereco(String endereco) {
          this.endereco = endereco;
     }

     public void setCartaoFidelidade(int cartaoFidelidade) {
          this.cartaoFidelidade = cartaoFidelidade;
     }
}
