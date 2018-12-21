# FLEP-SGS2
A Flexible and Low-cost Evaluation Platform for Smart Grid Systems Security assessment. Power systems simulation tools are integrated with open-source software running on Raspberry Pis. FLEP-SGS2 allows to investigate the performance of the testbed components and evaluate different cyber-attack scenarios on the power system operation while providing a user-friendly interface.

## Cite FLEP-SGS
If you find our code useful, please cite
```
@inproceedings{konstantinou2019isgt,
    title={FLEP-SGS$^2$: a Flexible and Low-cost Evaluation Platform for Smart Grid Systems Security},
    author={Konstantinou, Charalambos and Sazos, Marios and Maniatakos, Michail},
    booktitle={Innovative Smart Grid Technologies (ISGT), 2019 IEEE PES},
    pages={1--5},
    year={2019},
    organization={IEEE}
}
```

## Getting started
Follow the instructions below to instantiate FLEP-SGS2.

Equipment needed:
```
Raspberry Pi 2 with a UniPi extension board as the Bus6 overcurrent protection relay. 
Raspberry Pi 2 as the SCADA monitoring system. 
Raspberry Pi 2 as the State Estimation algorithm calculation. 
NI USB-6001 DAQ device as the data acquisition for the HIL simulation.
A Windows machine to run the Matlab/Simulink IEEE 9bus model and Labview code for UDP/Modbus communication.
```
The platform:

![alt text](https://github.com/momalab/FLEP-SGS2/blob/master/Setup.png)

The testbed architecture:

<p align="center">
  <img width="690" height="450" src="https://github.com/momalab/FLEP-SGS2/blob/master/Setup_configuration.png">
</p>

### Prerequisites

PLC code uploader - [OpenPLC](http://www.openplcproject.com/getting-started)

PLC ladder logic programming- [PLCOpenEditor](http://www.openplcproject.com/plcopen-editor)

SCADA monitoring software - [pvbrowser](https://pvbrowser.de/pvbrowser/index.php?lang=en&menu=6)

### Instructions

1. Make sure that the devices are assigned the following static IPs:
```
SCADA RPi IP: 192.168.1.1
Relay RPi IP: 192.168.1.2
State Estimation (SE) RPi IP: 192.168.1.3
Matlab/LabView PC IP: 192.168.1.4
```
2. Install OpenPLC and PLCOpenEditor software on the relay RPi (with the UniPi board).

3. Connect the push buttons, the relay outputs and the analog input to the UniPi board:
```
FAULT P1: I01
FAULT P2: I02
FAULT P3: I03
LOCAL TRIP: I04
LOCAL CLOSE: I05
TRIP OUTPUT: Relay 1 (normally open)
CLOSE OUTPUT: Relay 2 (normally open)
Analog output from USB 6001 DAQ : AI1
```

4. To run the software necessary for the OpenPLC please follow the below steps:
```
Open RPi terminal
$ cd PLCopen\ Editor/
$ python PLCOpenEditor.py (to load the programming interface)
file->Open
PLCopen Editor->RelayIOR.xml (Instantaneous Overcurrent Relay)
File->Generate Program
Pi->OpenPLC_v2->st_files->relay
Open new terminal
$ cd OpenPLC_v2/
$ sudo nodejs server.js
Open RPi web browser
Type 127.0.0.1:8080 at URL
Choose file
OpenPLC_v2->st_files->relay.st (choose all files on the right bottom to appear)
Upload program
Repeat steps to change the type of the relay (IOR, DTOR, IDMTOR)
```

5. Install the pvbrowser software on the SCADA RPi.

6. To run the software necessary for the pvbrowser please follow the below steps:

```
Copy the folder smart_grid
Open RPi terminal
$ pvdevelop
file->open->smart_grid->pvs.pvproject
Deamon->Modbus->Open->SE.mkmodbus->Compile
Close
Deamon->Modbus->Open->MATLAB.mkmodbus->Compile
Close
Deamon->Modbus->Open->PLC.mkmodbus->Compile
Close
Open new terminal
$ cd smart_grid
$ ./SE
$ ./MATLAB
$ ./PLC
Go to pvdevelop interface
Action->Make
Action->StartServer
Action->pvbrowser
```

7. For the codes of the State Estimation as well as detailed documentation please go to the below GitHub repository:

**[FLEP-SGS - State Estimation](https://github.com/harryskon/FLEP-SGS-2)**

8. Choose the simulation software and code of your choice and connect the Analog/digital signals from the NI-USB6001 to the relay RPi. If you choose Matlab/Simulink to develop your model use those blocks for UDP communication, real time simulation and for connection to the DAQ device:

[Simulink UDP send](https://www.mathworks.com/help/supportpkg/parrot/ref/udpsend.html)

[Simulink UDP receive](https://www.mathworks.com/help/supportpkg/parrot/ref/udpreceive.html)

[Simulink real time sync](https://www.mathworks.com/help/sldrt/ref/realtimesync.html)

[Simulink data acquisition](https://www.mathworks.com/help/daq/simulink-data-acquisition.html)

9. PCAP traffic snapshots, captured on [Wireshark software](https://www.wireshark.org/), of the following 2 scenarios are included at this repository:

  **SCADA Monitoring:**  
  a) Send trip command to the relay  
  b) Send close command to the relay  
  
  **Relay Monitoring:**  
  a) Fault detected by the relay  
  b) Trip coil activated and report the trip coil to SCADA  
  c) Close command sends back to the relay after the fault is clear  

10. For Man-In-The-Middle attacks you can install and use the Ettercap software:

[Ettercap](https://www.ettercap-project.org/)

**For more information or additional data from this setup please contact Marios Sazos at marios.sazos@nyu.edu**
