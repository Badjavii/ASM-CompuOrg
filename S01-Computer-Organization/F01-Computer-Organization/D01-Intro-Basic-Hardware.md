# Introduction to Computer Organization

## What is a Computer?

Philosophically, a computer is an extension of human needs, especially the brain, to perform logical and arithmetic operations. The advantages of a computer are its greater efficiency and fewer errors compared to the human brain. However, the challenge with computers is that they require specific instructions to achieve the user's objectives.

-> A digital computer is a machine that can solve problems by executing instructions received from people through data input instruments (peripherals).

## What are Electrical Circuits in a Computer?

An electrical circuit is an interconnection of electrical components that transport electric current through a closed path. These systems allow the flow of electric current to perform various functions and operations in electronic devices.

The electronic circuits of a computer can recognize and directly execute a limited set of simple instructions.

## What is a Program?

A program is a sequence of instructions that describes how to perform a specific task.

All programs must be converted into a series of simple instructions for the computer to execute them in its electronic circuits within the CPU.

The simple (or primitive) instructions together constitute the machine language that allows people to communicate with computers.

#### Example of Simple Instructions

1. Add two numbers.
2. Check if a number is 0.
3. Copy data from one part of the memory to another.

## What are Machine Languages?

Machine language or machine code is the system of codes directly interpretable by a microprogrammable circuit, such as a computer's microprocessor or an automaton's microcontroller.

People who design a new computer must decide which instructions to include in its machine language. Typically, the goal is to make the primitive instructions as simple as possible, thereby reducing the complexity and cost of the circuits.

Machine languages are so basic that they are difficult and tedious for people to use.

## Structured Organization of Computers

Over the years, computers have been structured into a series of abstraction levels, each building on the previous one, allowing complexity to be controlled and systems to be designed in an organized manner.

- **Hardware Level**: Physical components such as the processor and memory.
- **Microprogramming Level**: Microinstructions that control the hardware.
- **Machine Language Level**: Instructions that the processor executes directly.
- **Operating System Level**: Manages resources and facilitates program execution.
- **High-Level Language Level**: User-friendly programming languages like Python or Java.
- **Application Level**: Programs used by end-users, such as browsers and games.

## Components of a Computer

A computer is composed of software and hardware.

### Software

The intangible component that allows a computer to perform specific tasks.

- **Applications**: Software designed for end-users.
- **Operating Systems (OS)**: Interface between applications and computer hardware.
- **System Software**: Routines necessary to start the operating system (BIOS).

### Hardware

The set of physical and tangible components of a computer.

- **CPU**: The Central Processing Unit of the computer.
- **Main Memory**: The CPU's working area.
- **Secondary Memory**: Permanent storage area.
- **Peripherals**: Input and output devices.

## Deep Dive into von Neumann Architecture

The von Neumann architecture is a computer design model that describes a system where the CPU and memory share a single bus for data and instruction transfer. This design can lead to a bottleneck known as the von Neumann bottleneck, where the system's speed is limited by the capacity of the shared bus.

### Data Bus in von Neumann Architecture

The data bus is the channel through which data is transferred between the CPU and memory. The width of the data bus, measured in bits, determines how much data can be transferred simultaneously. For example, a 32-bit data bus can transfer 32 bits of data at a time.

The bit size of the operating system is closely related to the width of the data bus. A 32-bit operating system is designed to work with a 32-bit data bus, meaning it can handle data in 32-bit blocks. Similarly, a 64-bit operating system can handle data in 64-bit blocks, taking advantage of a wider data bus to improve system performance and efficiency.

It is important that the operating system is compatible with the data bus of the hardware. If we install a 32-bit operating system on a computer with a 64-bit data bus, we will not be utilizing the full processing capacity available, resulting in a loss of efficiency. For this reason, most modern operating systems come in 64-bit versions, allowing better utilization of current hardware and offering superior performance.
