int redPin = 13;
char ab;
void setup() {
    Serial.begin(9600);
    pinMode(redPin, OUTPUT);
}
void loop() {
    int i;
    if (Serial.available()>0)
    {
        ab=Serial.read();
        Serial.print(ab);
        if (ab=='h'||ab=='H'){
            for(i=0;i<4;i++){
            	p();
			}
        }
        else if(ab=='e'||ab=='E'){
            p();
        }
        else if(ab=='l'){
            p();
            l();
            p();
            p();
        }
        else if(ab==' '){
            sp();
        }
        else if(ab=='o'){
            for(i=0;i<3;i++){
            	l();
			}
        }
        else if(ab=='a'){
            p();
            l();
        }
        else if(ab=='b'){
            l();
            for(i=0;i<3;i++){
            	p();
			}
        }
        else if(ab=='c'){
            for(i=0;i<2;i++){
            	l();
            	p();
			}
        }
        else if(ab=='d'){
            l();
            p();
            p();
        }
        else if(ab=='f'){
            p();
            p();
            l();
            p();
        }
        else if(ab=='g'){
            l();
            l();
            p();
        }
        else if(ab=='i'){
            p();
            p();
        }
        else if(ab=='j'){
            p();
            for(i=0;i<3;i++){
            	l();
			}
        }
        else if(ab=='k'){
            l();
            P();
            l();
        }
        else if(ab=='m'){
            l();
            l();
        }
        else if(ab=='n'){
            l();
            p();
        }
        else if(ab=='p'){
            p();
			l();
			l();
			p(); 
        }
        else if(ab=='q'){
            l();
            l();
            p();
            l();
        }
        else if(ab=='r'){
            p();
            l();
            p();
        }
        else if(ab=='s'){
            for(i=0;i<3;i++){
            	p();
			}
        }
        else if(ab=='t'){
            l();
        }
        else if(ab=='u'){
            p();
            p();
            l();
        }
        else if(ab=='v'){
            for(i=0;i<3;i++){
            	p();
			}
			l();
        }
        else if(ab=='w'){
            p();
            l();
            l();
        }
        else if(ab=='x'){
            l();
            p();
            p();
            l();
        }
        else if(ab=='y'){
            l();
            p();
            l();
            l();
        }
        else if(ab=='z'){
            l();
            l();
            p();
        }
        else  {
            Serial.println("input error!");
        }
    }
    
}

void sp(){
    Serial.print("");
}
void p(){//摩斯密码中的点 
        digitalWrite(redPin,HIGH);
        delay(300);
        digitalWrite(redPin,LOW);
        delay(300);
}
void l(){//摩斯密码中的划 
	digitalWrite(redPin,HIGH);
	delay(800);
	digitalWrite(redPin,LOW);
	delay(300);
}

