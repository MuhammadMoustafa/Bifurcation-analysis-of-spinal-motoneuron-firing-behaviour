# Bifurcation-analysis-of-spinal-motoneuron-firing-behaviour

### Author:       Muhammad Ahmad
### Email:        muhammadmoustafa@eng1.cu.edu.eg
### Affiliation:  Systems and Biomedical Engineering Department, Faculty of Engineering, Cairo University
---
## 6c Reduced Model Morphology
![6c Reduced Model](6cModel/images/6cModel.png "6cModel")

---

## Requirements and Installation
- In order to run the model, You need to have some familiarity with XPPAUT.
- For XPPAUT installation please refer to [Link](http://www.math.pitt.edu/~bard/xpp/xpp.html) 

---

## File List

| File | Function |
| --- | --- |
| main.ode | model starting point |
| ah, and all ah files | Axon hilloc compartment and its channels |
| soma and dendrites files | same as ah |
| conn.inc | the connection eqaution "**conductance and resistance**" between each two compartments |
| func.inc | contains helper functions |
| glob.inc | constants used in the model |
| opt.inc | options used in xppaut |
| stim.inc | stimulation current equation |

---

## Steps
1. Open main.ode using XPPAUT 
2. Run time simulation till reaching steady state, usually running for till 600ms is enough
3. Open Auto and run steady state
4. Grab one of the second hopf bifurcation point and run periodic