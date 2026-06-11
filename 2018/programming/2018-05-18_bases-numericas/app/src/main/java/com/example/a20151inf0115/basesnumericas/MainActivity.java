package com.example.a20151inf0115.basesnumericas;

import android.provider.MediaStore;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.TextView;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class MainActivity extends AppCompatActivity {

    TextView saida1,saida2,saida3, msg;
    EditText numero;
    RadioButton radioDec, radioBin, radioOct, radioHex;
    String rgxDec,rgxBin,rgxOct,rgxHex, sNum;
    int dec, bin, oct, hex, num;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        numero=(EditText)findViewById(R.id.numero);
        sNum = numero.getText().toString();
        saida1=(TextView)findViewById(R.id.txt1);
        saida2=(TextView)findViewById(R.id.txt2);
        saida3=(TextView)findViewById(R.id.txt3);
        msg=(TextView)findViewById(R.id.txtMsg);
        rgxDec="^\\d+$";
        rgxBin="[01]+";
        rgxOct="[0-7]+";
        rgxHex="[0-9A-F]+";
        radioDec=(RadioButton)findViewById(R.id.rdDec);
        radioBin=(RadioButton)findViewById(R.id.rdBin);
        radioOct=(RadioButton)findViewById(R.id.rdOct);
        radioHex=(RadioButton)findViewById(R.id.rdHex);
        findViewById(R.id.botao).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(radioDec.isSelected()){
                    Pattern expressao = Pattern.compile(rgxDec);
                    Matcher alvo = expressao.matcher(sNum);
                    msg.setText("Informação válida!");

                    if(alvo.matches()){
                        msg.setText("Informação válida!");
                    }else{
                        msg.setText("Informação inválida!");
                    }


                    //num = Integer.parseInt(numero.getText().toString(),10);

                }else if (radioBin.isSelected()){
                    //num = Integer.parseInt(numero.getText().toString(),2);
                }else if (radioOct.isSelected()){
                    //num = Integer.parseInt(numero.getText().toString(),8);
                }else{
                    //num = Integer.parseInt(numero.getText().toString(),16);
                }
            }
        });


    }
}
