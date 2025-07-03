Desarrolle tres ejercicios de los 6 propuestos, utilice todas las librerías y herramientas disponibles. 
<br>
<br>
# 1. Maximizar la función 𝑓(𝑥) = 𝑥 𝑠𝑒𝑛(10 π x) + 1, con 𝑥 ∈ [0,1].<br>
En el siguiente código se encuentra el código correspondiente al primer ejercicio [maxFunction](Entrega3/MaximizarFuncion.ipynb) o en un cuaderno en Google Collab [GoogleCollab_maxFunction](https://colab.research.google.com/drive/1iavzqVRqT_YKZZ6GAoQbHitQTUXyChLb?authuser=1)
<br>
Explicación del código
<br>

### 1. Codificación del individuo. <br>
Usamos representación binaria: codificacmos x con 16 bits para con ello respresentar 2^16=65,536 valor posibles

𝑥 = valor entero del cromosoma / (2^16−1)

### 2. Inicialización
Creamos una población inicial de N individuos (por ejemplo, 100), cada uno con una cadena binaria de 16 bits.

### 3. Función de aptitud
La función de aptitud es simplemente:<br>
𝑓(𝑥)=𝑥⋅sin(10𝜋𝑥)+1 <br>
Nota: se le suma 1 para asegurar que la función sea positiva, ya que los AGs generalmente trabajan mejor con valores positivos para selección proporcional.

### 4. Selección
Para iniciar, se usa un torneo de 2 individuos (simple y eficaz).

### 5. Cruce
Cruce de un punto (por ejemplo en el bit 8 de 16), con probabilidad 𝑝𝑐=0.7

### 6. Mutación
Mutación bit a bit con una probabilidad baja, por ejemplo 𝑝𝑚=1/16 

### 7. Condición de paro
Después de un número de generaciones (por ejemplo, 100) o si la aptitud no mejora significativamente.
<br>
<br>
# 2. Verdadera democracia. Suponga que usted es el jefe de gobierno y está interesado en que pasen los proyectos de su programa político. Sin embargo, en el congreso conformado por 5 partidos, no es fácil su tránsito, por lo que debe repartir el poder, conformado por ministerios y otras agencias del gobierno, con base en la representación de cada partido. Cada entidad estatal tiene un peso de poder, que es el que se debe distribuir. Suponga que hay 50 curules, distribuya aleatoriamente, con una distribución no informe entre los 5 partidos esas curules. Defina una lista de 50 entidades y asígneles aleatoriamente un peso político de 1 a 100 puntos. Cree una matriz de poder para repartir ese poder, usando AGs. 
En el siguiente código se encuentra el código correspondiente al segundo ejercicio [VerdaderaDemocracia](Entrega3/VerdaderaDemocracia.ipynb) o en un cuaderno en Google Collab [GoogleCollab_VerdaderaDemocracia](https://colab.research.google.com/drive/13g4SPs4N0e3oZzFYWNl1BOMVslp4gxgw?usp=sharing)
<br>
Explicación del código
<br>

### 1. Parámetros iniciales
Se definieron que hay 5 partidos y 50 entidades (ministerios/agencias).

### 2. Distribución no uniforme de curules
Genera una distribución aleatoria pero no uniforme de las 50 curules entre los 5 partidos.

### 3. Pesos de las entidades
Asigna un peso político aleatorio (1–100) a cada entidad estatal.

### 4. Representación del inidividuo
Cada individuo es una lista de 50 números, cada uno representando a qué partido se asigna una entidad.

### 5. Función de aptitud
Calcula el error cuadrático entre: 
<li>
  Poder que debería tener cada partido (según curules)
  Poder que efectivamente tiene (según entidades asignadas)
</li>
Cuanto menor el error → mejor el individuo.

### 6. Selección 
Selecciona el mejor de 3 individuos elegidos al azar para reproducirse.

### 7. Cruce
Intercambia fragmentos de dos individuos (corte en un punto aleatorio).

### 8. Mutación
Cambia al azar el partido asignado a algunas entidades.

### 9. Ciclo del AG
Durante 100 generaciones, se reproducen, cruzan y mutan individuos para buscar la mejor asignación posible.

### 10. Resultado
Muestra cómo quedó distribuido el poder (sumas de pesos) entre los partidos, comparado con sus curules.

# 3. Una empresa proveedora de energía eléctrica dispone de cuatro plantas de generación para satisfacer la demanda diaria de energía eléctrica en Cali, Bogotá, Medellín y Barranquilla. Cada una puede generar 3, 6, 5 y 4 GW al día respectivamente. Las necesidades de Cali, Bogotá, Medellín y Barranquilla son de 4, 3, 5 y 3 GW al día respectivamente. Los costos por el transporte de energía por cada GW entre plantas y ciudades se dan en la siguiente tabla
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
<br>
Encontrar usando AGs el mejor despacho de energía minimizando los costos de transporte y generación. <br>
<br>
En el siguiente código se encuentra el código correspondiente al primer ejercicio [DespachoDeEnergia](Entrega3/DespachoDeEnergia.ipynb) o en un cuaderno en Google Collab [GoogleCollab_DespachoDeEnergia](https://colab.research.google.com/drive/1SAD6NVeu_025cVRv5mBh0_QFxKnV0_KV?usp=sharing)
<br>
Explicación del código
<br>

### 1. Planteamiento del problema
Queremos asignar cuántos gigavatios (GW) envía cada planta a cada ciudad, minimizando el costo total (generación + transporte), cumpliendo con:
<li> Las capacidades máximas de generación de cada planta.</li>
<li> La demanda específica de cada ciudad.</li>

### 2. Codificación de individuos
Cada individuo es una matriz 4x4 donde:
<li>Filas = plantas generadoras (C, B1, M, B2).</li>
<li>Columnas = ciudades (Cali, Bogotá, Medellín, Barranquilla).</li>
Cada celda representa los GW asignados desde una planta a una ciudad.

### 3. Inicialización
Se generan individuos aleatorios que cumplen con las restricciones básicas:
<li>No se supera la capacidad de ninguna planta.</li>
<li>Se satisface completamente la demanda de cada ciudad.</li>

### 4. Función de aptitud (fitness)
Se evalúa cada individuo calculando:
<li>El costo total = generación + transporte para cada GW asignado.</li>
<li>Cuanto menor sea el costo, mejor es el individuo.</li>

### 5. Mutación y reparación
Se aplican pequeñas modificaciones (mutación) a la asignación:
<li>Se transfieren unidades de GW entre plantas manteniendo la ciudad.</li>
<li>Se repara la solución para garantizar que siga cumpliendo las restricciones.</li>

### 6. Selección y evolución
En cada generación:
<li>Se guarda el mejor individuo (elitismo).</li>
<li>Se generan nuevos individuos por mutación.</li>
<li>Se repite por un número de generaciones (p. ej. 200).</li>

### 7. Resultado
<li>Se obtiene una asignación óptima o casi óptima de GW desde plantas a ciudades.</li>
<li>Se calcula el costo total mínimo.</li>
<li>Se grafica la evolución del fitness (costo) para visualizar la mejora generacional.</li>

