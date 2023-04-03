// Por Roberto A. Zavala
// https://github.com/QuiahEditorial
// Libro : https://www.amazon.com.mx/dp/B074TTGLL2
// 🙏🏼    : DNv7acPAeVBhTXbKv26itJecPG1SPy2o4F

// Siendo la ecuación de la distribución normal
// \frac{1}{\sigma sqrt{2*pi}} e^{-(\frac{x-\mu)^2}{2*\sigma^2}},
// donde \sigma = 1, \mu = 0
// se genera un vector G[N] de entradas
// G(x) = \frac{1}{\sqrt{2\pi}} e^{-\frac{x{2}{2}}

float pi = 3.1415916;
float e  = 2.7182818;

const int N = 30;     // número de entradas
float G[N+1];         // vector Gauss
float d = 3;          // dominio
float i = d / N;      // incremento en x
float a = 0.3989423;  //   \frac{1}{\sqrt{2\pi}}
float b;              // - \frac{x^2}{2}
int   j=0;            // Contador

void setup()
{
Serial.begin(9600);
}

void loop()
{
for ( float x=0; x<=d; x+=i )
    {
    Serial.print(j); Serial.print("\t");            // despliega el contador
//    Serial.print(x); Serial.print("\t");          // despliega x
    b = -0.5*pow(x,2);
    G[j]= a * pow(e,b) * 0.997;                     // 0.997 ajuste | \sum_{0}^{3} \cong 0.4987 
//    Serial.print(G[j],7); Serial.println("\t");   // despliega la densidad de probabilidad
    j++;                                            // contador
    delayMicroseconds(100);
    }
//Serial.println(sizeof(G));                        // tamaño del vector G
//Serial.println(micros());                         // tiempo para realizar la tarea
exit(0);
}
