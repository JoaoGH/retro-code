package com.example.a20151inf0115.calculadora;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class MainActivity extends AppCompatActivity {

    TextView txtOperando;
    TextView txtResultado;
    String sOperando1, sOperando2, sOperacao, sSinal;
    double resultado,n1,n2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        txtOperando=(TextView) findViewById(R.id.txtOperandos);
        txtResultado=(TextView) findViewById(R.id.txtResultado);
        sOperando1="";
        sOperando2="";
        sOperacao="";
        sSinal="";
        //-------------INICIO DAS OPERAÇÕES
        findViewById(R.id.btnMais).setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v) {
                if(sOperando1.isEmpty()){
                    sOperando1="0";
                }
                sOperacao="+";
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim do mais

        findViewById(R.id.btnMenos).setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v) {
                if(sOperando1.isEmpty()){
                    sOperando1="0";
                }
                sOperacao="-";
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim do menos

        findViewById(R.id.btnVezes).setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v) {
                if(sOperando1.isEmpty()){
                    sOperando1="0";
                }
                sOperacao="x";
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim do vezes

        findViewById(R.id.btnDivisao).setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v) {
                if(sOperando1.isEmpty()){
                    sOperando1="0";
                }
                sOperacao="÷";
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim do divisao
        //inverte sinal
        findViewById(R.id.btnInverte).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(sOperacao=="") {
                    if (!sOperando1.isEmpty()) {
                        if (sOperando1.matches("\\W(\\d+(\\W\\d+)?)")) {
                            Pattern grupNum = Pattern.compile("(\\d+(\\W\\d+)?)");
                            Matcher n = grupNum.matcher(sOperando1);
                            if (n.find(0)) {
                                sOperando1 = n.group(0);
                            }
                        } else {
                            sOperando1 = "-" + sOperando1;
                        }
                    }
                }
                else{
                    if (!sOperando2.isEmpty()) {
                        if (sOperando2.matches("\\W(\\d+(\\W\\d+)?)")) {
                            Pattern grupNum = Pattern.compile("(\\d+(\\W\\d+)?)");
                            Matcher n = grupNum.matcher(sOperando2);
                            if (n.find(0)) {
                                sOperando2 = n.group(0);
                            }
                        } else {
                            sOperando2 = "(-" + sOperando2+")";
                        }
                    }
                }
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim inverte sinal

        //del
        findViewById(R.id.btnDel).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(!sOperando2.isEmpty()){
                    sOperando2=sOperando2.substring(0,sOperando2.length()-1);
                }
                else if(!sOperacao.isEmpty()){
                    sOperacao="";
                }else if(!sOperando1.isEmpty()){
                    sOperando1=sOperando1.substring(0,sOperando1.length()-1);
                }else{

                }
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });
        //fim do del

        findViewById(R.id.btnClear).setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v) {
                txtOperando.setText("");
                txtResultado.setText("");
                sOperando1="";
                sOperando2="";
                sOperacao="";
            }//fim onclick
        });//fim clear
        //-------------FIM DAS OPERAÇÕES

        //-------------INICIO DOS NÚMERO
        //btn0
        findViewById(R.id.btn0).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(sOperacao.isEmpty()){
                    sOperando1+="0";
                }
                else{
                    if(sOperando2.substring(0).equals("(")){
                        sOperando2="("+sOperando2.substring(1,sOperando2.length()-1)+"0"+")";
                    }
                    else{
                        sOperando2+="0";
                    }
                }
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim btn0
        //btn1
        findViewById(R.id.btn1).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(sOperacao.isEmpty()){
                    sOperando1+="1";
                }
                else{
                    if(sOperando2.substring(0).equals("(")){
                        sOperando2="("+sOperando2.substring(1,sOperando2.length()-1)+"1"+")";
                    }
                    else{
                        sOperando2+="1";
                    }
                }
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim btn1
        //btn2
        findViewById(R.id.btn2).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(sOperacao.isEmpty()){
                    sOperando1+="2";
                }
                else{
                    if(sOperando2.substring(0).equals("(")){
                        sOperando2="("+sOperando2.substring(1,sOperando2.length()-1)+"2"+")";
                    }
                    else{
                        sOperando2+="2";
                    }
                }
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim btn2
        //btn3
        findViewById(R.id.btn3).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(sOperacao.isEmpty()){
                    sOperando1+="3";
                }
                else{
                    if(sOperando2.substring(0).equals("(")){
                        sOperando2="("+sOperando2.substring(1,sOperando2.length()-1)+"3"+")";
                    }
                    else{
                        sOperando2+="3";
                    }
                }
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim btn3
        //btn4
        findViewById(R.id.btn4).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(sOperacao.isEmpty()){
                    sOperando1+="4";
                }
                else{
                    if(sOperando2.substring(0).equals("(")){
                        sOperando2="("+sOperando2.substring(1,sOperando2.length()-1)+"4"+")";
                    }
                    else{
                        sOperando2+="4";
                    }
                }
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim btn4
        //btn5
        findViewById(R.id.btn5).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(sOperacao.isEmpty()){
                    sOperando1+="5";
                }
                else{
                    if(sOperando2.substring(0).equals("(")){
                        sOperando2="("+sOperando2.substring(1,sOperando2.length()-1)+"5"+")";
                    }
                    else{
                        sOperando2+="5";
                    }
                }
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim btn5
        //btn6
        findViewById(R.id.btn6).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(sOperacao.isEmpty()){
                    sOperando1+="6";
                }
                else{
                    if(sOperando2.substring(0).equals("(")){
                        sOperando2="("+sOperando2.substring(1,sOperando2.length()-1)+"6"+")";
                    }
                    else{
                        sOperando2+="6";
                    }
                }
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim btn6
        //btn7
        findViewById(R.id.btn7).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(sOperacao.isEmpty()){
                    sOperando1+="7";
                }
                else{
                    if(sOperando2.substring(0).equals("(")){
                        sOperando2="("+sOperando2.substring(1,sOperando2.length()-1)+"7"+")";
                    }
                    else{
                        sOperando2+="7";
                    }
                }
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim btn7
        //btn8
        findViewById(R.id.btn8).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(sOperacao.isEmpty()){
                    sOperando1+="8";
                }
                else{
                    if(sOperando2.substring(0).equals("(")){
                        sOperando2="("+sOperando2.substring(1,sOperando2.length()-1)+"8"+")";
                    }
                    else{
                        sOperando2+="8";
                    }
                }
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim btn8
        //btn9
        findViewById(R.id.btn9).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(sOperacao.isEmpty()){
                    sOperando1+="9";
                }
                else{
                    if(sOperando2.substring(0).equals("(")){
                        sOperando2="("+sOperando2.substring(1,sOperando2.length()-1)+"9"+")";
                    }
                    else{
                        sOperando2+="9";
                    }
                }
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim btn9

        //btnPonto
        findViewById(R.id.btnPonto).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(sOperacao.isEmpty()){
                    sOperando1+=".";
                }
                else{
                    sOperando2+=".";
                }
                txtOperando.setText(sOperando1+sOperacao+sOperando2);
            }
        });//fim btnPonto
        //-------------FIM DOS NÚMERO

        //-------------INICIO CALCULAR
        findViewById(R.id.btnIgual).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(sOperando1.isEmpty() || sOperacao.isEmpty() || sOperando2.isEmpty()){
                    Toast.makeText(getBaseContext(), "Não sabe usar calculadora burrão?", Toast.LENGTH_LONG).show();
                }else{
                    //calculo mt louco aqui
                    if(sOperando2.substring(sOperando2.length()).equals("(")){
                        sOperando2=sOperando2.substring(1,sOperando2.length()-1);
                    }
                    n1=Double.parseDouble(sOperando1);
                    n2=Double.parseDouble(sOperando2);
                    if(sOperacao=="+"){
                        resultado=n1+n2;
                    }else if(sOperacao=="-"){
                        resultado=n1-n2;
                    }else if(sOperacao=="x"){
                        resultado=n1*n2;
                    }else{
                        resultado=n1/n2;
                    }
                    txtResultado.setText(""+String.valueOf(resultado));
                    //Toast.makeText(getBaseContext(), "calma precoçe", Toast.LENGTH_LONG).show();
                }
            }
        });
        //-------------INICIO CALCULAR
    }//fim oncreate


}//fim main activity
