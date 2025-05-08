1. Observe sus comportamientos en la casa, en la universidad y en el medio de transporte que utiliza.
Encuentre, para cada uno de estos escenarios sus reglas básicas. <br>
1. En la casa <br>
<ul>
  <li>Respetar los espacios y pertenencias de los demás.</li>
  <li>Mantener el orden y la limpieza.</li>
  <li>Cumplir con las responsabilidades del hogar.</li>
</ul>

2. En la universidad<br>
<ul>
  <li>Asistir y participar en clases puntualmente.</li>
  <li>Respetar a profesores, compañeros y personal administrativo.</li>
  <li>Cumplir con las normas académicas y de comportamiento.</li>
  <li>Mantener el orden en los espacios comunes.</li>
</ul>

3. En el medio de transporte<br>
<ul>
  <li>Ceder el asiento a quienes lo necesitan.</li>
  <li>Respetar el espacio personal de otros pasajeros.</li>
  <li>No hacer ruidos molestos o comportarse de manera inapropiada.</li>
  <li>Conservar limpio y en buen estado el vehículo.</li>
</ul>
<br>
<br>
<br>
2. Suponga una enfermedad, o un incendio forestal, o una moda, desarrolle un modelo de difusión
usando ACs probabilísticos. O simule un robot con dos ruedas que evite obstáculos. Use LLMs.<br>

Para la simulación del robot con dos ruedas que evite obstáculos se tuvo en cuenta lo siguiente: <br>

Estados del sistema <br>
Cada celda puede estar en uno de estos estados:<br>
<ul>
  <li>0: espacio libre</li>
  <li>1: obstáculo</li>
  <li>R: robot (con dirección)</li>
</ul>
<br>
La orientación puede ser: ↑, →, ↓, ← (Norte, Este, Sur, Oeste)<br>
<br>
Reglas de transición del robot<br>
En cada paso, el robot decide su próxima acción según su entorno local: <br>
<ul>
  <li>
    Si hay obstáculo al frente: Gira a la derecha (o aleatoriamente entre derecha/izquierda).
  </li>
  <li>
    Si camino libre al frente: Avanza una celda.
  </li>
</ul>
<br>
Este comportamiento puede representarse como una máquina de estados finitos o como un sistema reactivo basado en reglas.
<br> 
El código se encuentra en el siguiente link de Google Collab [AC's probabílisticos]{} <br>
<br>
<br>
<br>
3. Tome el plano de una ciudad pequeña y localice, por ejemplo, las droguerías, o colegios ¿es
posible que falte alguno en la ciudad? Incluya información adicional como densidad de personas.
Utilice diagramas de Voronoi.<br>
Para el diagrama de Voronoi se tomaron las Farmacias de Chinquirá, Boyacá, adquirido por medio de Google Maps. <br>
{insertar imagen}
<br>
<br>
<br>






