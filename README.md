🐟 Arduino Automatic Fish Feeder

This project is a **low-cost automatic fish feeder** built with simple components.  
I made it because I had to leave home for a few days, and commercial feeders are often expensive.  

The system works by rotating a **servo motor every 8 hours** to drop food into the aquarium.  
Between feedings, the **servo is completely disconnected from the battery** using a MOSFET, which greatly saves power and allows the feeder to run for several days.  

---

## ⚙️ Components Used
- **Arduino Uno** – main controller, keeps track of time
- **Servo Motor (SG90)** – rotates the food container
- **P-Channel MOSFET (NDP6020P)** – acts as an electronic switch to save battery
- **2 × 14500 Li-ion Batteries (in parallel)** – power source for servo
- **MT3608 Boost Converter** – steps up battery voltage to stable 5V
- **Capacitor (470µF)** – smooths out voltage drops from servo current spikes
- **Breadboard Power Supply Module** – powers the Arduino Uno

---

## 🔌 Circuit Notes
- All grounds are connected together.  
- The MOSFET disconnects the servo’s power line when idle.  
- A capacitor across the servo input prevents Arduino resets.  



## 💻 Arduino Code
The full code is in [`fish_feeder.ino`](fish_feeder.ino).  
- The servo rotates **180° forward and back every 8 hours**.  
- You can change the feeding interval by editing the delay value in the code.  

---

## 🚀 How to Use
1. Upload the code to your Arduino Uno via Arduino IDE.  
2. Connect the circuit as shown in the wiring diagram.  
3. Power the Arduino + battery pack.  
4. Every 8 hours, food will be dispensed automatically!  

---

## 📜 License
This project is open-source under the MIT License.  
Feel free to use and modify it.  

---

## 👨‍💻 Author
Developed by [Muzaddid Mehrab].  
