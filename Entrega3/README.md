# Tercer entrega [IA y mini-robots]

* Francisco Josse Roja Rojas (frrojasr@unal.edu.co)
* Yeira Liseth Rodríguez Rodríguez (yrodriguezro@unal.edu.co)
<br>
<br>
A continuación se encuentran los enlaces del desarrollo de tres ejercicios de los 6 propuestos, según el enunciado en el capítulo 3. 
<br>
<br>

### 1. Maximizar la función 𝑓(𝑥) = 𝑥 𝑠𝑒𝑛(10 π x) + 1, con 𝑥 ∈ [0,1].<br>
En el siguiente código se encuentra el archivo correspondiente al primer ejercicio [maxFunction](Entrega3/MaximizarFuncion.ipynb) o en un cuaderno en Google Collab [GoogleCollab_maxFunction](https://colab.research.google.com/drive/1iavzqVRqT_YKZZ6GAoQbHitQTUXyChLb?authuser=1)
<br>

###  2. Verdadera democracia. Suponga que usted es el jefe de gobierno y está interesado en que pasen los proyectos de su programa político. Sin embargo, en el congreso conformado por 5 partidos, no es fácil su tránsito, por lo que debe repartir el poder, conformado por ministerios y otras agencias del gobierno, con base en la representación de cada partido. Cada entidad estatal tiene un peso de poder, que es el que se debe distribuir. Suponga que hay 50 curules, distribuya aleatoriamente, con una distribución no informe entre los 5 partidos esas curules. Defina una lista de 50 entidades y asígneles aleatoriamente un peso político de 1 a 100 puntos. Cree una matriz de poder para repartir ese poder, usando AGs. 
En el siguiente código se encuentra el archivo correspondiente al segundo ejercicio [VerdaderaDemocracia](Entrega3/VerdaderaDemocracia.ipynb) o en un cuaderno en Google Collab [GoogleCollab_VerdaderaDemocracia](https://colab.research.google.com/drive/13g4SPs4N0e3oZzFYWNl1BOMVslp4gxgw?usp=sharing)

###  3. Una empresa proveedora de energía eléctrica dispone de cuatro plantas de generación para satisfacer la demanda diaria de energía eléctrica en Cali, Bogotá, Medellín y Barranquilla. Cada una puede generar 3, 6, 5 y 4 GW al día respectivamente. Las necesidades de Cali, Bogotá, Medellín y Barranquilla son de 4, 3, 5 y 3 GW al día respectivamente. Los costos por el transporte de energía por cada GW entre plantas y ciudades se dan en la siguiente tabla
<br>

| Planta   | Cali | Bogotá | Medellín | Barranquilla |
|:--------:|:----:|:------:|:--------:|:------------:|
| Planta C |  1   |   4    |    3     |      6       |
| Planta B |  4   |   1    |    4     |      5       |
| Planta M |  3   |   4    |    1     |      4       |
| Planta B |  6   |   5    |    4     |      1       |
<br>
Los costos del KW-H por generador se dan en la siguiente tabla: <br>

| Generador | KW-H |
| :----------: | :-----: |
| Planta C | 680 |
| Planta B | 720 |
| Planta M | 660 |
| Planta B | 750 |

Encontrar usando AGs el mejor despacho de energía minimizando los costos de transporte y generación.

En el siguiente código se encuentra el archivo correspondiente al primer ejercicio [DespachoDeEnergia](Entrega3/DespachoDeEnergia.ipynb) o en un cuaderno en Google Collab [GoogleCollab_DespachoDeEnergia](https://colab.research.google.com/drive/1SAD6NVeu_025cVRv5mBh0_QFxKnV0_KV?usp=sharing)

