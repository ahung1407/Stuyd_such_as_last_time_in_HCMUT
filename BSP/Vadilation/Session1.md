
### **Week 1 – System Architecture & Development Environment**

#### **Session 1:**

#### **Overview of Embedded Linux Architecture: Bootloader → Kernel → RootFS → User-space**

This describes the boot-up sequence of an embedded Linux system. It's a multi-stage process where each stage hands off control to the next.

1.  **Bootloader (e.g., U-Boot):** This is the first piece of software that runs when the device is powered on. Its primary job is to initialize the essential hardware (like RAM and CPU clocks) and then load the next stage—the Linux Kernel—into memory and execute it.
2.  **Kernel:** The core of the operating system. Once the Bootloader hands over control, the Kernel takes over. It initializes the rest of the hardware (drivers), manages system resources (CPU, memory), and mounts the Root File System.
3.  **Root File System (RootFS):** This is a special file system that contains all the necessary files, libraries, and programs required for the system to run. Once the Kernel mounts the RootFS, it starts the first user-space program, typically called `init`.
4.  **User-space:** This is where all the user applications and services run. The `init` process (from the RootFS) starts other system processes and applications, bringing the device to its fully operational state where it can run its designated tasks (e.g., a web server on a router, a user interface on a smart display).



***

#### **Components of a BSP (Board Support Package)**

A BSP is a collection of software and tools specifically tailored to make Linux run on a particular piece of hardware (a "board"). It bridges the gap between the generic Linux Kernel and the specific hardware design.

* **U-Boot:** The most common **Bootloader** used in embedded systems. It's responsible for the initial hardware setup and loading the Linux Kernel.
* **Kernel:** A version of the Linux Kernel that has been configured and patched to work with the specific board's processor and peripherals.
* **Device Tree:** A data structure that describes the hardware components on the board in a way the Linux Kernel can understand, without needing to hard-code the hardware details into the kernel source code itself.
* **RootFS:** The **Root File System** that contains the specific libraries, applications, and configuration files needed for the final product.

***

#### **The Role of the Device Tree & How the Kernel Maps Hardware**

Before the Device Tree, information about the specific hardware layout of a board was often hard-coded directly into the Linux Kernel C code. This was inefficient because it meant a new, custom kernel was needed for every slightly different hardware design.

The **Device Tree** solves this problem by separating the hardware description from the kernel's driver code.

* **Role of the Device Tree:** Its role is to be a **hardware description**. It's a text file (with a `.dts` or `.dtsi` extension) that lists all the components on the board—like the CPU, memory, I2C controllers, SPI devices, GPIO pins, etc.—and their properties and connections. This file is compiled into a binary blob (`.dtb`) that the bootloader loads into memory along with the kernel.
* **How the Kernel Maps Hardware:** When the Kernel starts, it doesn't have built-in knowledge of the hardware it's running on. Instead, it looks at the **Device Tree Blob (DTB)** that the bootloader placed in memory. It parses this data to learn what hardware is present. For each device described in the tree, the kernel finds the appropriate driver that "binds" to it. This binding process allows the generic driver code to configure and control the specific hardware described in the Device Tree, effectively **mapping** the software drivers to the physical hardware components.

## 2\. Khái niệm Sysroot

In cross-compilation, the **sysroot** is a fundamental concept.

Think of it as a "system root" directory (`/`) for your _target_ device (the Raspberry Pi), but located on your _host_ machine (your PC). When the cross-compiler builds your program, it needs to link against libraries (like `glibc`) and use header files (`.h` files).

*   **Without a sysroot**, the compiler would mistakenly try to use your PC's x86 libraries, leading to an incompatible program.
    
*   **With a sysroot**, you tell the compiler: "When you look for libraries and headers, don't look in your own `/usr/lib` or `/usr/include`. Instead, look inside this special directory that contains the ARM versions of everything."
    

Essentially, the sysroot (`--sysroot=/path/to/target/filesystem`) provides the necessary target-specific files for the compiler to correctly link your application. When you use Buildroot or Yocto later, they automatically create and manage a sysroot for you.