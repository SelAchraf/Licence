#include <stdio.h>
#include <stdlib.h>

int main() {
	float TD_ARCH,TP_ARCH,TD_ALGO,TP_ALGO,TD_SI,TP_SI,NOTE_MN,NOTE_LM,NOTE_TG;
	float EXAMEN_ARCH,EXAMEN_ALGO,EXAMEN_SI,EXAMEN_MN,EXAMEN_LM,EXAMEN_TG,EXAMEN_ENG;
	float MOY_ARCH,MOY_ALGO,MOY_SI,MOY_MN,MOY_LM,MOY_TG;
	float MOY_SEM;
	printf("Entrer la note du TD et Tp et EXAMEN ARCH\n");
	scanf("%f%f%f",&TD_ARCH,&TP_ARCH,&EXAMEN_ARCH);
	printf("Entrer la note du TD et Tp et EXAMEN ALGO\n");
	scanf("%f%f%f",&TD_ALGO,&TP_ALGO,&EXAMEN_ALGO);
	printf("Entrer la note du TD et Tp et EXAMEN SI\n");
	scanf("%f%f%f",&TD_SI,&TP_SI,&EXAMEN_SI);
	printf("Entrer la note du TD/Tp et EXAMEN MN\n");
	scanf("%f%f",&NOTE_MN,&EXAMEN_MN);
	printf("Entrer la note du TD/TP et EXAMEN LM\n");
	scanf("%f%f",&NOTE_LM,&EXAMEN_LM);
	printf("Entrer la note du TD/TP et EXAMEN TG\n");
	scanf("%f%f",&NOTE_TG,&EXAMEN_TG);
	printf("Entrer la note d'EXAMEN ENG\n");
	scanf("%f",&EXAMEN_ENG);
	MOY_ARCH = ((TD_ARCH+TP_ARCH)/2)*0.40 + EXAMEN_ARCH*0.60 ;
	MOY_ALGO = ((TD_ALGO+TP_ALGO)/2)*0.40 + EXAMEN_ALGO*0.60 ;
	MOY_SI = ((TD_SI+TP_SI)/2)*0.40 + EXAMEN_SI*0.60 ;
	MOY_MN = NOTE_MN*0.40 + EXAMEN_MN*0.60 ;
	MOY_LM = NOTE_LM*0.40 + EXAMEN_LM*0.60 ;
	MOY_TG = NOTE_TG*0.40 + EXAMEN_TG*0.60 ;
	MOY_SEM = ((MOY_ARCH*3)+ (MOY_ALGO*3)+ (MOY_SI*3)+ (MOY_MN*2)+ (MOY_LM*2)+ (MOY_TG*2)+ EXAMEN_ENG)/16;
	printf("la moyenne du semestre est : %f",MOY_SEM);
	return 0;
}
