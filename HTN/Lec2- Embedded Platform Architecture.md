Here is a detailed analysis of the **Embedded Platform Architecture** lecture slides (Course CO3053).

---

### **Slide 1: Title Slide**

**Detailed explanation (Lecturer’s Voice):**
Welcome to Chapter 2. In the previous chapter, we defined _what_ an embedded system is conceptually. Now, we are opening up the box to see _how_ it is built. This is **Embedded Platform Architecture**. We are moving away from abstract definitions and looking at the physical silicon, the copper wires, and the logical organization that allows code to control physics. We will discuss the "Computing Platform"—the brain—and how it connects to the outside world.

**Visual Content Analysis:**

- **Left Image:** A block diagram showing the "Computing Platform" (CPU + Bus + Storage) boxed in red. This highlights that our focus today is inside that box, not on the sensors or actuators yet.
- **Right Image:** A schematic showing the relationship between Hardware (Microprocessor, Peripherals) and Software (OS, Application).
  - _Intention:_ To show that "Architecture" isn't just hardware; it's the interface where hardware meets software.

**Meaning & Real-World Applications:**

- **Foundation:** Every device, from a $2 smart watch to a $50,000 industrial controller, follows this architectural pattern.
- **Component Selection:** Understanding this allows engineers to choose the right chips. You don't use a server architecture for a thermostat.

**Potential Exam Questions:**

- **Easy:** What is the primary focus of "Embedded Platform Architecture"?
  - _Hint: The internal hardware organization (CPU, Memory, Bus)._
- **Medium:** Looking at the diagram, how does the "Computing Platform" interact with the "I/O Front-End"?
  - _Hint: Via the Bus Controller and Interface lines._
- **Difficult:** Why is the separation between "Hardware" and "Software" layers in the right diagram theoretical rather than physical?
  - _Hint: In embedded systems (like FPGAs or Firmware), the line blurs; software is stored in hardware (Flash)._

---

### **Slide 2: Contents**

**Detailed explanation (Lecturer’s Voice):**
This is our agenda. We will break the hardware down into its four atomic elements:

1.  **Embedded hardware overview:** The big picture (PCBs).
2.  **Processor:** The decision maker. We'll look at RISC vs. CISC.
3.  **Memory:** Where data and code live. Not all memory is created equal.
4.  **Buses:** The nervous system. How signals travel between the brain and the memory.

**Meaning & Real-World Applications:**

- Troubleshooting a dead board usually involves checking these four in order: Is the board powered? Is the Processor running? Is Memory accessible? Are the Buses transmitting data?

---

### **Slide 3: Embedded Board**

**Detailed explanation (Lecturer’s Voice):**
Hardware doesn't float in the air. It lives on a **PCB (Printed Circuit Board)**. This is the physical foundation.
In the "Embedded System Model," the PCB represents the **Hardware Layer**.

- **Key Concept:** The PCB routes electrical signals between components using copper traces (wires printed on the board). It also provides mechanical stability and heat dissipation.

**Visual Content Analysis:**

- **Left Image:** The "Model" – Abstract layers (Application -> System Software -> Hardware).
- **Middle Image:** A "bare" PCB (looks like a router board). You can see the CPU (under a heatsink or central spot), capacitors (cylinders), and ports.
- **Right Image:** The final product (D-Link Router).
  - _Intention:_ To connect theory (the model) to reality (the green board) to the consumer product (the black box).

**Potential Exam Questions:**

- **Easy:** What does PCB stand for?
  - _Hint: Printed Circuit Board._
- **Medium:** Where does the PCB fit into the "Embedded System Model" hierarchy?
  - _Hint: The Hardware Layer._
- **Difficult:** Why must an embedded engineer understand PCB layout, even if they only write software?
  - _Hint: Signal integrity, heat, and physical port locations affect how software drivers are written._

---

### **Slide 4: Hardware Block Architecture**

**Detailed explanation (Lecturer’s Voice):**
This is the classic **Von Neumann Architecture**. Almost every embedded system uses a variation of this.

1.  **CPU:** The master. It fetches instructions and executes them.
2.  **Memory:** Stores the software (instructions) and data (variables). In Von Neumann, these share the same bus.
3.  **Input/Output:** These are "Slave" processors or electrical components. The CPU tells them what to do.
4.  **Bus:** The shared highway for data.

**Visual Content Analysis:**

- **Diagram:** Shows the **Central Processing Unit** containing the `Control Unit` (the traffic cop) and the `Arithmetic/Logic Unit` (the calculator). It is connected via arrows (Bus) to Memory and Input/Output.
  - _Intention:_ To illustrate the flow of data. Data moves from Memory -> CPU -> Processed -> Output.

**Common Mistakes:**

- **Mistake:** Thinking the Input/Output devices are "smart" on their own.
- **Correction:** In this basic model, they are "slaves." They wait for the CPU to read or write to them.

**Potential Exam Questions:**

- **Easy:** Which component is considered the "Master" in this architecture?
  - _Hint: The CPU._
- **Medium:** What are the two main sub-units inside the CPU shown in the diagram?
  - _Hint: Control Unit and Arithmetic/Logic Unit (ALU)._
- **Difficult:** What is the "Von Neumann bottleneck"?
  - _Hint: Shared bus for instruction and data limits speed._

---

### **Slide 5: Complex System Diagram (Example)**

**Detailed explanation (Lecturer’s Voice):**
This looks like a mobile phone architecture.

- **The takeaway:** A modern embedded system is not just _one_ processor. It is a collection of specialized hardware.
- **Application Processor:** Runs the OS (Android/iOS).
- **Baseband/RF:** Handles the radio (3G/4G/GSM). This is a separate computer!
- **DSP (Digital Signal Processor):** Handles audio/video math.
- **Peripheral Blocks:** Note how many there are (Bluetooth, WLAN, Camera, LCD).

**Visual Content Analysis:**

- **Diagram:** Shows "Baseband" (Radio) separate from "Application Processor."
  - _Intention:_ To show **Heterogeneous Computing**. Different chips for different jobs, all on one board (or one SoC).

**Meaning & Real-World Applications:**

- **Power Efficiency:** We use a DSP for audio because it uses less battery than the main ARM core.
- **Modularity:** You can upgrade the Camera module without changing the Baseband radio.

---

### **Slide 6: Cisco Catalyst 6500 Supervisor 2T**

**Detailed explanation (Lecturer’s Voice):**
This is an enterprise-grade example: A Cisco Network Switch supervisor engine.

- **Scale:** Compare this to the previous slide. Here we have huge memory (4GB), massive throughput, and specialized ASICs for networking (Switch Fabric).
- **Structure:** Even at this complexity, the pattern holds: CPU (Control Plane) + Memory (NVRAM/Bootdisk) + I/O (Ethernet/USB).

**Visual Content Analysis:**

- **Left (Block Diagram):** Logical view. Shows "Control Plane," "Switch Fabric," and "Bootdisk."
- **Right (Photo):** Physical view. You can see the massive heatsinks (processors underneath) and the connector pins (Backplane bus).
  - _Intention:_ To teach you to map a logical block diagram to a physical circuit board.

**Potential Exam Questions:**

- **Easy:** Identify one storage component in the block diagram.
  - _Hint: Bootdisk / NVRAM / Flash._
- **Medium:** What is the purpose of the "Console port" shown in the diagram?
  - _Hint: A direct Management I/O for configuring the device locally._
- **Difficult:** Why does this system have a specific "Control Plane" separate from the data switching logic?
  - _Hint: The CPU handles routing tables (complex, slow), while specialized hardware handles packet switching (simple, fast)._

---

### **Slide 7: iPhone 5S (A7 Chip)**

**Detailed explanation (Lecturer’s Voice):**
This represents a **System on Chip (SoC)**.

- **Integration:** Instead of a CPU chip and a separate Memory controller chip on a board, they are all inside one silicon die (the A7).
- **Components:**
  - **MPU (Main Processor Unit):** ARM Cortex-M3 (Note: The slide says Cortex-M3, but the iPhone 5S A7 was actually ARMv8-A "Cyclone". The diagram might be illustrating the _sensor hub_ or a specific sub-controller, or it's a generic example labeled iPhone 5S. Let's assume it's an example of the M7 motion coprocessor inside the 5S).
  - **Peripherals:** LCD controller, Camera interface (Interface to MIPI), Audio (I2S).
  - **Buses:** Note the internal connecting lines.

**Visual Content Analysis:**

- **Yellow Blocks:** Digital Logic / Interfaces.
- **Blue Blocks:** Analog/Power or Memories.
  - _Intention:_ Shows how tightly packed modern electronics are.

**Common Mistakes:**

- **Mistake:** Thinking the "I2C" or "SPI" blocks are physical cables inside the chip.
- **Correction:** Inside the SoC, these are microscopic silicon pathways. They only become "wires" when they leave the chip.

---

### **Slide 8: Processors**

**Detailed explanation (Lecturer’s Voice):**
The CPU is the center of the platform.

1.  **Bit Width (32 vs 64):** How much data can it chew in one bite? 64-bit is the standard for modern phones/PCs; 32-bit is common for microcontrollers.
2.  **Instruction Set Architecture (ISA):**
    - **CISC (Complex Instruction Set Computer):** Intel x86. One instruction does a lot (e.g., "Load from memory, add 5, save to memory"). Good for code density.
    - **RISC (Reduced Instruction Set Computer):** ARM, MIPS. Simple instructions ("Load", "Add", "Save"). Requires more code but runs faster/more efficiently per watt.
3.  **Parallelism:**
    - **Scalar:** One instruction per clock cycle.
    - **Superscalar:** Multiple instructions per clock cycle.
    - **SISD (Single Instruction Single Data):** Standard processing.
    - **MIMD (Multiple Instruction Multiple Data):** Multi-core.

**Potential Exam Questions:**

- **Easy:** Give one example of a CISC processor and one example of a RISC processor.
  - _Hint: CISC = Intel; RISC = ARM._
- **Medium:** What is the main difference between Scalar and Superscalar architectures?
  - _Hint: Scalar = 1 instruction/cycle; Superscalar = >1 instruction/cycle._
- **Difficult:** Why is RISC generally preferred over CISC for battery-powered embedded systems?
  - _Hint: Simpler hardware decoding logic = lower power consumption._

---

### **Slide 9: System Memory Map**

**Detailed explanation (Lecturer’s Voice):**
How does the CPU find things? It uses a **Memory Map**.

- **The Concept:** The CPU has a list of addresses (e.g., 0 to 4 Billion).
- **Not just RAM:**
  - Some addresses point to **DRAM** (Main memory).
  - Some addresses point to **MMIO (Memory Mapped I/O)**.
- **MMIO:** If you write data to address `0xFFFF0001`, you aren't saving a number; you might be turning on an LED or sending a USB packet. The hardware redirects that address to a peripheral device.

**Visual Content Analysis:**

- **Diagram:** Shows the address range `0x0000,0000` to `0xFFFF,FFFF`.
- **Mapping:** Arrows show that the bottom chunk is DRAM, but the top chunk points to "Fixed IO Devices" (Flash, Timers) and PCI Bus devices (USB, Ethernet).

**Meaning & Real-World Applications:**

- **Driver Development:** Writing a device driver is literally just knowing which memory address controls which hardware feature.

**Potential Exam Questions:**

- **Easy:** What is a Memory Map?
  - _Hint: A list of physical addresses for all resources (memory + I/O)._
- **Medium:** What is MMIO?
  - _Hint: Memory Mapped I/O – accessing hardware peripherals using memory addresses._
- **Difficult:** Why is the "PCI Configuration" space mapped into the memory map?
  - _Hint: To allow the CPU to detect and configure plug-and-play devices on the bus._

---

### **Slide 10: Volatile Memory Types**

**Detailed explanation (Lecturer’s Voice):**
Memory comes in two flavors: Volatile (forgets when power is off) and Non-volatile (remembers).

1.  **Volatile (RAM):**
    - **SRAM (Static RAM):** Fast, expensive, uses flip-flops. Used for **Cache** inside the CPU.
    - **DRAM (Dynamic RAM):** Slower, cheap, uses capacitors (needs refreshing). Used for **Main Memory**.
    - _Versions:_ SDRAM, DDR2, DDR3 (Double Data Rate).
2.  **Non-volatile (Storage):**
    - **Flash (SSD):** No moving parts. NOR Flash (code execution), NAND Flash (file storage).
    - **Magnetic (HDD):** Spinning disks. Rare in small embedded systems now.

**Mnemonics:**

- **S**RAM is **S**peedy (and **S**tatic).
- **D**RAM is **D**ense (and **D**ynamic).

**Potential Exam Questions:**

- **Easy:** Which type of memory loses data when power is lost?
  - _Hint: Volatile (SRAM/DRAM)._
- **Medium:** Why is DRAM used for main memory instead of SRAM?
  - _Hint: DRAM is much cheaper and denser (more GB per chip)._
- **Difficult:** Explain the difference between NOR and NAND flash usage.
  - _Hint: NOR is for code execution (XIP); NAND is for mass data storage._

---

### **Slide 11: Buses**

**Detailed explanation (Lecturer’s Voice):**
A **Bus** is a collection of wires.

- **Components:**
  - **Data Lines:** Carry the actual info.
  - **Address Lines:** Say "where" the info goes.
  - **Control Lines:** Clock, Acknowledge (Ack), Read/Write signal.
- **Types:** System (internal), Backplane (connectors), I/O (peripherals).
- **Expansion:** Standards like PCI, USB allow us to add new hardware.
- **Arbitration:** Logic to decide who talks first so signals don't crash.

**Visual Content Analysis:**

- **Diagram:** A shared highway (Blue/Orange arrows) connecting ALU (CPU), RAM, ROM, and I/O.
  - _Intention:_ Illustrates shared infrastructure. If the RAM is talking, the ROM must be quiet.

**Potential Exam Questions:**

- **Easy:** What are the three types of signals carried by a bus?
  - _Hint: Data, Address, Control._
- **Medium:** Why does a bus need an "arbitration" mechanism?
  - _Hint: To prevent collisions when multiple masters try to use the bus simultaneously._
- **Difficult:** Differentiate between a "System Bus" and an "I/O Bus".
  - _Hint: System Bus = High speed, CPU-Memory. I/O Bus = Lower speed, Peripherals._

---

### **Slide 12: Bus Types**

**Detailed explanation (Lecturer’s Voice):**
Let's define the hierarchy:

1.  **System Bus:** The Autobahn. Connects CPU to Cache/Main Memory. Very short wires (inches), very high speed (GHz).
2.  **Backplane Bus:** The Connector. Connects the motherboard to daughter cards.
3.  **I/O Bus:** The Local Roads. Connects the System Bus (via a bridge) to slow things like Keyboards, Mice, or Hard Drives.

**Meaning & Real-World Applications:**

- **Bottlenecks:** You can have a fast CPU, but if your I/O bus is slow, your file transfer will crawl. This is why we moved from USB 2.0 to USB 3.0.

---

### **Slide 13: Bus Arbitration and Timing**

**Detailed explanation (Lecturer’s Voice):**

- **Arbitration:** Who drives the bus?
  - **Master:** Can start a conversation (e.g., CPU, DMA Controller).
  - **Slave:** Only speaks when spoken to (e.g., RAM, Sensor).
  - _Problem:_ If two Masters talk at once = Short Circuit/Garbage Data. We need an **Arbitrator**.
- **Handshaking:** The timing. "Are you ready?" "Yes." "Here is data." "Got it."

**Common Mistakes:**

- **Mistake:** Thinking memory is a "Master."
- **Correction:** Memory is almost always a "Slave." It waits for the CPU to ask for data.

**Potential Exam Questions:**

- **Easy:** Define a "Bus Master."
  - _Hint: A device that can initiate a bus transaction._
- **Medium:** What happens if two devices drive the bus at the same time without arbitration?
  - _Hint: Data collision / Electrical short._
- **Difficult:** Why do we need "Handshaking" in asynchronous buses?
  - _Hint: Because there is no shared clock to synchronize timing._

---

### **Slide 14: Bus Arbitration - Dynamic Central Parallel Scheme**

**Detailed explanation (Lecturer’s Voice):**

- **Central:** One specific hardware block (the Arbitrator) makes the decisions.
- **Parallel:** Every device has its own dedicated wire to the Arbitrator.
- **Mechanism:**
  1.  Device sends `request`.
  2.  Arbitrator checks FIFO or Priority.
  3.  Arbitrator sends `grant`.
  4.  Device uses bus, asserts `busy`.

**Visual Content Analysis:**

- **Diagram:** Shows Device 0, Device 1, Device N all wiring their `request` and `grant` lines to the "arb" box.
  - _Intention:_ Shows the star-topology of control signals.

**Potential Exam Questions:**

- **Easy:** In a central arbitration scheme, where is the decision logic located?
  - _Hint: In a single central arbitrator unit._
- **Medium:** What is the function of the `busy` line?
  - _Hint: To tell other devices (and the arbitrator) that the bus is currently in use._
- **Difficult:** What is the downside of the "Parallel" aspect regarding hardware connections?
  - _Hint: Requires many wires (2 per device) on the PCB._

---

### **Slide 15: FIFO-based Arbitration**

**Detailed explanation (Lecturer’s Voice):**

- **Algorithm:** First In, First Out. Like a line at the grocery store.
- **Pros:** Fair. Everyone eventually gets a turn.
- **Cons:** No urgency. If the Fire Alarm (Device A) requests the bus, but the Music Player (Device B) requested it first, the Fire Alarm waits.
- **Issue:** The arbitrator is dumb. It doesn't kick anyone off (non-preemptive). If the device at the front crashes while holding the bus, the system hangs.

**Potential Exam Questions:**

- **Easy:** What does FIFO stand for?
  - _Hint: First In First Out._
- **Medium:** What is a major disadvantage of FIFO arbitration for real-time systems?
  - _Hint: High-priority tasks might wait behind low-priority tasks (Priority Inversion)._
- **Difficult:** Why does the slide say the arbitrator "don't intervene"?
  - _Hint: It is non-preemptive; it cannot force a master to release the bus._

---

### **Slide 16: Priority-based Arbitration**

**Detailed explanation (Lecturer’s Voice):**

- **Algorithm:** Every device has a rank (Priority).
- **Preemptive:** This is key. If Master 2 (Low Priority) is using the bus, and Master 3 (High Priority) asks for it, the Arbitrator kicks Master 2 off _immediately_.
- **Usage:** Essential for Real-Time Operating Systems (RTOS) and safety-critical hardware.

**Visual Content Analysis:**

- **Graph:**
  - Start: Low Priority (Master 1) runs.
  - Middle: Master 2 interrupts.
  - Peak: Master 3 (High) interrupts Master 2.
  - End: When Master 3 finishes, Master 2 resumes.
  - _Intention:_ Visualizing **Preemption**.

**Potential Exam Questions:**

- **Easy:** In priority arbitration, which device gets the bus?
  - _Hint: The one with the highest assigned priority._
- **Medium:** What does "preemption" mean in this context?
  - _Hint: Stopping a currently active transfer to allow a higher-priority one._
- **Difficult:** What is "Starvation" in priority systems?
  - _Hint: Low-priority devices may never get the bus if high-priority devices are chatty._

---

### **Slide 17: Bus Arbitration - Central-serialized Scheme**

**Detailed explanation (Lecturer’s Voice):**
Also called **Daisy-chain**.

- **Mechanism:** The Arbitrator grants the bus to the _first_ device physically connected to it. If that device doesn't need it, it passes the token to the next.
- **Implicit Priority:** The device closest to the arbitrator has the highest priority.
- **Pros:** Fewer wires (Simple).
- **Cons:** If Device 1 breaks, Device 2 never sees the signal. Slow propagation (signal must hop through every device).

**Visual Content Analysis:**

- **Diagram:** A chain of Grant lines: Arbiter -> Device 1 -> Device 2 -> Device N.
  - _Intention:_ Shows the serial nature of the grant signal.

**Potential Exam Questions:**

- **Easy:** What is another name for Central-serialized arbitration?
  - _Hint: Daisy-chain._
- **Medium:** How is priority determined in this scheme?
  - _Hint: By physical proximity to the arbiter._
- **Difficult:** What is the reliability risk of daisy-chaining?
  - _Hint: Single point of failure; if one link breaks, downstream devices are cut off._

---

### **Slide 18: Bus Arbitration - Distributed Arbitration Scheme**

**Detailed explanation (Lecturer’s Voice):**

- **No Boss:** There is no central arbitrator.
- **Self-Selection:** Devices look at the bus. If it's free, they claim it.
- **Collision Detection:** If two claim it at once, they detect the "crash," back off, wait a random time, and try again (like Ethernet).
- **Priority ID:** Alternatively, they put their ID on the line. The lowest ID wins (like CAN Bus).

**Visual Content Analysis:**

- **Diagram:** All devices share the `busy` line and `request` lines. No central box.

**Meaning & Real-World Applications:**

- **CAN Bus (Cars):** Uses distributed arbitration. Essential because if the central controller died in a car, the whole car would fail. Distributed is more robust.

---

### **Slide 19: Bus Timing Scheme**

**Detailed explanation (Lecturer’s Voice):**

1.  **Synchronous:**
    - **The Drumbeat:** Everyone marches to a global CLOCK signal.
    - **Data:** Read/Write happens on the "Rising Edge" (0 to 1) or "Falling Edge" (1 to 0).
    - **Pros:** Fast, simple logic.
    - **Cons:** **Clock Skew**. On long wires, the clock signal arrives at the end later than the start. This limits speed/length.
2.  **Asynchronous:**
    - **Handshake:** No clock.
    - **Protocol:** "Request" -> "Ack" -> "Data".
    - **Pros:** Flexible. Can connect a fast CPU to a slow Sensor. Long distance is okay.
    - **Cons:** Slower (waiting for Ack), complex hardware (Synchronizer).

**Potential Exam Questions:**

- **Easy:** Which timing scheme requires a clock signal?
  - _Hint: Synchronous._
- **Medium:** What is "Clock Skew"?
  - _Hint: The time difference in clock arrival at different parts of the bus due to distance._
- **Difficult:** Why is Asynchronous timing better for connecting devices with very different speeds?
  - _Hint: The fast device can wait for the "Ack" from the slow device; they don't need to lock to a common frequency._

---

### **Slide 20: Bus Expansion**

**Detailed explanation (Lecturer’s Voice):**

- **Expandable:** Designed for the user to add things.
  - _Examples:_ **PCI** (add a video card), **USB** (add a mouse), **PCMCIA** (old laptop cards).
  - _Cost:_ Expensive connectors, complex protocols to handle "Plug and Play."
- **Non-expandable:** Designed for the engineer, inside the box.
  - _Examples:_ **I2C, SPI**. You soldering a sensor to the board. You can't just "plug" it in while running.

**Potential Exam Questions:**

- **Easy:** List two expandable bus types.
  - _Hint: PCI, USB, SCSI._
- **Medium:** What makes a bus "non-expandable"?
  - _Hint: It lacks hot-plug capability or standardized user-accessible connectors._
- **Difficult:** Why are expandable buses more expensive to implement?
  - _Hint: They require robust physical connectors, power protection, and dynamic configuration software._

---

### **Slide 21: PCI Bus**

**Detailed explanation (Lecturer’s Voice):**
**PCI (Peripheral Component Interconnect)**. This is a classic synchronous parallel bus.

- **Specs:**
  - Clock: 33MHz or 66MHz.
  - Width: 32 bits or 64 bits (parallel wires).
- **Throughput Calculation:**
  - Formula: `Clock Frequency * Bus Width (in bytes)`
  - Example: 33 MHz \* 32 bits.
  - 32 bits = 4 Bytes.
  - $33,000,000 \text{ cycles/s} \times 4 \text{ Bytes} = 132 \text{ MB/s}$.
  - Example: 66 MHz \* 64 bits (8 Bytes) = 528 MB/s.

**Formula Display:**

```text
Throughput (MB/s) = Frequency (MHz) × (Bus Width (bits) / 8)
```

**Potential Exam Questions:**

- **Easy:** Is PCI Synchronous or Asynchronous?
  - _Hint: Synchronous._
- **Medium:** Calculate the throughput of a 33MHz, 64-bit PCI bus.
  - _Hint: 33 _ 8 = 264 MB/s.\*
- **Difficult:** Why has PCI largely been replaced by PCIe (PCI Express)?
  - _Hint: PCI is parallel (clock skew issues); PCIe is serial (much faster)._

---

### **Slide 22: I2C Bus**

**Detailed explanation (Lecturer’s Voice):**
**I2C (Inter-Integrated Circuit)**. The most common bus for sensors.

- **Wires:** Only 2!
  1.  **SDA:** Serial Data (Data goes back and forth here).
  2.  **SCL:** Serial Clock (Master controls the beat).
- **Architecture:** Master/Slave.
  - Master generates clock.
  - Master sends "Start" + "Address" + "Read/Write".
  - Slave says "Ack".
- **Speed:** Slow (Standard 100kHz, Fast 400kHz).
- **Data:** 8-bit chunks.

**Visual Content Analysis:**

- **Diagram:** Shows One Master controlling multiple Slaves (Audio, Tuner, Memory) all sharing the same 2 lines.
  - _Intention:_ Illustrates **Bus Topology**.

**Mnemonics:**

- **I2C:** **2** Wires. **2** Easy.

**Potential Exam Questions:**

- **Easy:** How many wires does I2C use?
  - _Hint: Two (SDA, SCL)._
- **Medium:** Who generates the clock in I2C?
  - _Hint: The Master._
- **Difficult:** How does the Master select a specific slave on I2C?
  - _Hint: By sending the unique 7-bit address of the slave at the start of the transaction._

---

### **Slide 23: SPI Bus**

**Detailed explanation (Lecturer’s Voice):**
**SPI (Serial Peripheral Interface)**. Faster than I2C, but more wires.

- **Wires:** 4 (Standard).
  1.  **SCLK:** Serial Clock.
  2.  **MOSI:** Master Output Slave Input (Data out).
  3.  **MISO:** Master Input Slave Output (Data in).
  4.  **SS/CS:** Slave Select / Chip Select.
- **Mechanism:** Full Duplex. Data flows in both directions at the same time.
- **Select:** No addresses. The Master pulls the "CS" wire low for the specific device it wants to talk to.
- **Application:** Flash memory (Boot code), SD cards.

**Visual Content Analysis:**

- **Diagram:** Shows the 4 connections. Note arrows on IO lines: MOSI goes Right, MISO goes Left.

**Comparison (I2C vs SPI):**

- **I2C:** 2 wires, Address-based, Slow, Half-Duplex.
- **SPI:** 4 wires, Chip-Select based, Fast (80MHz), Full-Duplex.

**Potential Exam Questions:**

- **Easy:** What does SPI stand for?
  - _Hint: Serial Peripheral Interface._
- **Medium:** Identify the function of the MOSI line.
  - _Hint: Data travels from Master to Slave._
- **Difficult:** Why is SPI preferred over I2C for booting the system from Flash?
  - _Hint: Speed. Copying the OS to RAM needs high throughput (80MHz vs 400kHz)._

---

### **Slide 24: Summary**

**Detailed explanation (Lecturer’s Voice):**
This concludes Chapter 2. We have covered:

1.  **Architecture:** The Von Neumann model.
2.  **The Brain:** CPU types (RISC/CISC) and Arbitration.
3.  **The Body:** Bus types (PCI, I2C, SPI) and Memory maps.
    Make sure you understand the difference between Synchronous and Asynchronous timing, and the specific use cases for I2C vs. SPI.

**Exam Prep:**

- Review the Throughput formula.
- Be able to draw the 4 wires of SPI vs the 2 wires of I2C.
- Understand why we need arbitration.
