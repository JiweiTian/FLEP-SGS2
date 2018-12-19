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
5.  A Windows machine to run the Matlab/Simulink IEEE 9bus model.

The platform is presented in (photo1) and the wiring diagram in photo2.
