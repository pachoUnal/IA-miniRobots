1. Observe sus comportamientos en la casa, en la universidad y en el medio de transporte que utiliza.  
   Encuentre, para cada uno de estos escenarios, sus reglas básicas.

   **En la casa:**
   - Respetar los espacios y pertenencias de los demás.
   - Mantener el orden y la limpieza.
   - Cumplir con las responsabilidades del hogar.

   **En la universidad:**
   - Asistir y participar en clases puntualmente.
   - Respetar a profesores, compañeros y personal administrativo.
   - Cumplir con las normas académicas y de comportamiento.
   - Mantener el orden en los espacios comunes.

   **En el medio de transporte:**
   - Ceder el asiento a quienes lo necesitan.
   - Respetar el espacio personal de otros pasajeros.
   - No hacer ruidos molestos o comportarse de manera inapropiada.
   - Conservar limpio y en buen estado el vehículo.

2. Suponga una enfermedad, o un incendio forestal, o una moda, desarrolle un modelo de difusión usando ACs probabilísticos. O simule un robot con dos ruedas que evite obstáculos. Use LLMs.

   Para la simulación del robot con dos ruedas que evite obstáculos se tuvo en cuenta lo siguiente:  

   **Estados del sistema:**  
   Cada celda puede estar en uno de estos estados:
   - `0`: espacio libre
   - `1`: obstáculo
   - `R`: robot (con dirección)

   La orientación puede ser: ↑, →, ↓, ← (Norte, Este, Sur, Oeste)

   **Reglas de transición del robot:**
   - Si hay obstáculo al frente: Gira a la derecha (o aleatoriamente entre derecha/izquierda).
   - Si camino libre al frente: Avanza una celda.

   Este comportamiento puede representarse como una máquina de estados finitos o como un sistema reactivo basado en reglas.

   El código se encuentra en el siguiente link de Google Collab: [AC's probabílisticos]()

3. Tome el plano de una ciudad pequeña y localice, por ejemplo, las droguerías, o colegios. ¿Es posible que falte alguno en la ciudad? Incluya información adicional como densidad de personas. Utilice diagramas de Voronoi.

   Para el diagrama de Voronoi se tomaron las Farmacias de Sogamoso, Boyacá, adquirido por medio de Google Maps.

   ![Droguería Sogamoso]([https://github.com/pachoUnal/IA-miniRobots/blob/main/Entrega2/droguer%C3%ADas%20sogamoso.png](https://github.com/pachoUnal/IA-miniRobots/blob/main/Entrega2/droguerías%20sogamoso.png))
