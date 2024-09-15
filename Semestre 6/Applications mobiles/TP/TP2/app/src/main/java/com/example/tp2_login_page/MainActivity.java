package com.example.tp2_login_page;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        EditText userName = findViewById(R.id.nameTxt);
        EditText password = findViewById(R.id.pwdTxt);
        Button ok = findViewById(R.id.okBtn);
        Button cancel = findViewById(R.id.cancelBtn);
        ok.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String textUser = userName.getText().toString();
                String textPwd = password.getText().toString();
                Toast.makeText(MainActivity.this,"userName: "+textUser+"password:"+textPwd,Toast.LENGTH_LONG).show();
                if ("test".equals(textUser)&&("password".equals(textPwd)))
                    Toast.makeText(MainActivity.this,"Login reussi",Toast.LENGTH_SHORT).show();
                else
                    Toast.makeText(MainActivity.this,"Login incorrect, merci de ressaisir les informations de login",Toast.LENGTH_SHORT).show();
            }
        });
    }
}