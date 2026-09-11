# Hospital Patient Priority Queue

## Description

This project is a simple C program that uses a priority queue to manage hospital patients.

Each patient is given a priority number:

- 1 = Emergency
- 2 = Urgent
- 3 = Routine

The patient with the lowest priority number is treated first.

## Features

- Add a patient with a priority
- Treat the next patient
- Automatically select the highest-priority patient

## Test Data

P1 - Priority 3  
P2 - Priority 1  
P3 - Priority 2  
P4 - Priority 1  
P5 - Priority 3  
P6 - Priority 2  

## Treatment Order

P2 → P4 → P3 → P6 → P1 → P5

## Emergency Test

After treating two patients, a new Emergency patient P7 with priority 1 is added.

P7 is treated before the remaining Urgent and Routine patients.

## Language

C# hospital-patient-priority-queue
