
# Deterministic Finite Automaton (DFA)

## Problem
Design a DFA to check whether a binary string ends with "01".

## States
- q0: Start state
- q1: Last symbol was 0
- q2: Ends with 01 (Final state)

## Logic
The automaton changes states based on input (0 or 1).

## Output
Input: 1101  
Output: Accepted

Input: 111  
Output: Rejected