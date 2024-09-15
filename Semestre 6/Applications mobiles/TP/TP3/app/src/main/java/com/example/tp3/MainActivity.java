package com.example.tp3;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    EditText  edit1,edit2,edit3 ;
    TextView resultView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        edit1 = findViewById(R.id.editTextNumberDecimal);
        edit2 = findViewById(R.id.editTextNumberDecimal2);
        edit3 = findViewById(R.id.editTextNumberDecimal3);
        resultView = findViewById(R.id.textView4);
        Button max = findViewById(R.id.maxbutton);
        max.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                maximum();
            }
        });
        Button Effacer = findViewById(R.id.effacerbutton);
        Effacer.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                edit1.setText("");
                edit2.setText("");
                edit3.setText("");
                resultView.setText("");
            }
        });
    }
    private double[] getValeursSaisies(){
        double[]valeurs = new double[3];
        valeurs[0]=Double.parseDouble(edit1.getText().toString());
        valeurs[1]=Double.parseDouble(edit2.getText().toString());
        valeurs[2]=Double.parseDouble(edit3.getText().toString());

        return valeurs;
    }
    private void maximum(){
        double[] valeurs = getValeursSaisies();
        double max = Math.max(valeurs[0],Math.max(valeurs[1],valeurs[2]));
        resultView.setText("Maximum : "+max);
    }
    private void minimum(){
        double[] valeurs = getValeursSaisies();
        double max = Math.min(valeurs[0],Math.min(valeurs[1],valeurs[2]));
        resultView.setText("Minimum : "+main);
    }
}