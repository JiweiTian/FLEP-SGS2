# FLEP-SGS2
A Flexible and Low-cost Evaluation Platform for Smart Grid Systems Security to examine security scenarios in smart
grid. Power systems simulation tools are integrated with opensource software and code running on Raspberry Pis. FLEP-SGS2
allows to investigate the performance of the testbed components and evaluate different cyber-attack scenarios on the power system
operation while providing a user-friendly interface.

# Cite FLEP-SGS2

If you find our code useful, please consider citing

@inproceedings{konstantinou2019isgt,
    title={FLEP-SGS$^2$: a Flexible and Low-cost Evaluation Platform for Smart Grid Systems Security},
    author={Konstantinou, Charalambos and Sazos, Marios and Maniatakos, Michail},
    booktitle={Innovative Smart Grid Technologies (ISGT), 2019 IEEE PES},
    pages={1--5},
    year={2019},
    organization={IEEE}
}

# Getting started
Follow the instructions below to get a copy of the project and effortlessly develop FLEP-SGS2.

For the setup we are using the following equipment:
1.	A Raspberry Pi 2 with a UniPi extension board as the Bus6 overvoltage protection relay. 
2.	A Raspberry Pi 2 as the SCADA monitoring system. 
3.	A Raspberry Pi 2 as the State Estimation algorithm calculation. 
4.	A NI USB-6001 DAQ device as the data acquisition for the HIL simulation.
5.  A Windows machine to run the Matlab/Simulink IEEE 9bus model and Labview code.

The platform:

![alt text](https://github.com/momalab/FLEP-SGS2/blob/master/Setup_small.png)

The testbed architecture:

<p align="center">
  <img width="690" height="450" src="https://github.com/momalab/FLEP-SGS2/blob/master/Setup_configuration.png">
</p>

# Instructions

1. Make sure that the devices are assigned with the following static ips.
•	SCADA RPi IP: 192.168.1.1
•	Relay RPi IP: 192.168.1.2
•	State Estimation (SE) RPi IP: 192.168.1.3
•	Matlab/LabView PC IP: 192.168.1.4

2. Istall OpenPLC and PLCOpenEditor software on the relay RPi (with the UniPi board) following the intructions here: http://www.openplcproject.com/getting-started

Connect the push buttons, the relay outputs and the analog input to the UniPi (Check the wiring diagram):
•	FAULT P1: I01
•	FAULT P2: I02
•	FAULT P3: I03
•	LOCAL TRIP: I04
•	LOCAL CLOSE: I05
•	TRIP OUTPUT: Relay 1 (normally open)
•	CLOSE OUTPUT: Relay 2 (normally open)
•	Analog output from USB 6001 DAQ : AI1

To run the software necessary for the OpenPLC please follow the below steps:
•	Open RPi terminal
•	cd PLCopen\ Editor/
•	python PLCOpenEditor.py (to load the programming interface)
•	file->Open
•	PLCopen Editor->RelayIOR.xml (Instantaneous Overcurrent Relay)
•	File->Generate Program
•	Pi->OpenPLC_v2->st_files->relay
•	Open terminal (new tab)
•	cd OpenPLC_v2/
•	Sudo nodejs server.js
•	Open RPi web browser
•	Type 127.0.0.1:8080 at URL
•	Choose file
•	OpenPLC_v2->st_files->relay.st (choose all files on the right bottom to appear)
•	Upload program
•	Repeat steps 5-7 and 12-15 to change the type of the relay

3. Install the pvbrowser software on the SCADA RPi following the instructions here:
https://pvbrowser.de/pvbrowser/index.php?lang=en&menu=6

•   Copy the folder smart_grid
• 	Open RPi terminal
•	Run pvdevelop
•	file->open->smart_grid->pvs.pvproject
•	Deamon->Modbus->Open->SE.mkmodbus->Compile
•	Close
•	Deamon->Modbus->Open->MATLAB.mkmodbus->Compile
•	Close
•	Deamon->Modbus->Open->PLC.mkmodbus->Compile
•	Close
•	Open terminal (new tab)
•	cd smart_grid
•	./SE
•	./MATLAB
•	./PLC
•	Go to pvdevelop interface
•	Action->Make
•	Action->StartServer
•	Action->pvbrowser

4. For the codes of the State Estimation as well as detailed documentation please go the below GitHub directory:
https://github.com/harryskon/FLEP-SGS-2

5. Choose the simulation software and code of your choice and connect the Analog/digital signals from the NI-USB6001 to the relay RPi. If you choose Matlab/Simulink to develop your model use those blocks for UDP communications and connection to the DAQ device: 

https://www.mathworks.com/help/supportpkg/parrot/ref/udpsend.html?searchHighlight=UDP&s_tid=doc_srchtitle
https://www.mathworks.com/help/supportpkg/parrot/ref/udpreceive.html?searchHighlight=UDP&s_tid=doc_srchtitle
https://www.mathworks.com/help/sldrt/ref/realtimesync.html
https://www.mathworks.com/help/daq/simulink-data-acquisition.html

6. PCAP traffic snapshots of the following 2 simple scenarios are included at this repository:

  1. Monitor at the SCADA - Send trip command - Send close command
  2. Monitor at the Relay - Fault detected- Trip coil activated (report to SCADA) - Close command sends back to the relay after the fault is clear.

7. For Man-In-The-Middle attacks you can install Ettercap software:

https://www.ettercap-project.org/

8. For more information or additional data from this setup please contact Marios Sazos at marios.sazos@nyu.edu








