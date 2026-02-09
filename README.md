# ESP32_moitoreoBT_ultrasonico

Monitoreo de Sensor Ultrasónico con ESP32 y App InventorEste proyecto permite medir la distancia mediante un sensor ultrasónico (HC-SR04) utilizando una placa ESP32. Los datos se visualizan en tiempo real tanto en el monitor serial como en una aplicación móvil creada en MIT App Inventor a través de una conexión Bluetooth Classic.🚀 CaracterísticasMicrocontrolador: ESP32.Comunicación: Bluetooth Serial.Sensor: Ultrasónico HC-SR04.Interfaz: Aplicación móvil (App Inventor).🛠️ Conexiones (Pinout)Para que el código funcione correctamente, realiza las siguientes conexiones:ComponentePin ESP32Trigger (Sensor)GPIO 15Echo (Sensor)GPIO 17VCC (Sensor)5VGND (Sensor)GND
Nota: Algunos sensores HC-SR04 funcionan mejor con 5V, pero recuerda que el pin Echo de la ESP32 solo soporta 3.3V. Se recomienda usar un divisor de voltaje si experimentas inestabilidad.

-Configuración de la App (App Inventor)
En App Inventor, utiliza el componente BluetoothClient.

Busca el dispositivo con el nombre: ESP32_Chema.

Configura un Reloj (Clock) para recibir los datos cada 100ms y mostrarlos en una etiqueta (Label).

Instalación
Clona este repositorio o descarga el archivo .ino.

Abre el código en el Arduino IDE.

Asegúrate de tener instalado el soporte para placas ESP32 en el gestor de tarjetas.

Selecciona tu placa y el puerto COM correcto.

¡Sube el código y abre el monitor serial a 115200 baudios!
