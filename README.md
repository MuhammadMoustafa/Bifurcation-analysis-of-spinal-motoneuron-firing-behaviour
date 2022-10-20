# Bifurcation-analysis-of-spinal-motoneuron-firing-behaviour

### Authors:  
Muhammad Mustafa 1* , Mohamed H. Mousa 2* , Mohamed S. Saad 3 , Tamer Basha 1 , and Sherif M.Elbasiouny 2,4
### Affiliation:  
1. Department of Systems and Biomedical Engineering, Faculty of Engineering, Cairo University, Giza, Postal code: 12316, Egypt
2. Department of Biomedical, Industrial and Human Factors Engineering, College of
Engineering and Computer Science, Wright State University, Dayton, Ohio, 45435, USA
3. Department of Electrical Power and Machines, Faculty of Engineering, Cairo University,
Giza, Postal code: 12316, Egypt,
4. Department of Neuroscience, Cell Biology, and Physiology, Boonshoft School of Medicine
and College of Science and Mathematics, Wright State University, Dayton, Ohio, 45435,
USA

### Email:  
muhammadmoustafa@eng1.cu.edu.eg, sherif.elbasiouny@wright.edu

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
| ah.inc, and all ah files | Axon hilloc compartment and its channels |
| soma.inc and dendrites files | same as ah |
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
