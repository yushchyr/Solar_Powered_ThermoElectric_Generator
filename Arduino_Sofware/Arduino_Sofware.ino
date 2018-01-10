/*
 * Authors:
 *  Roman Yushchyk
 *  Damien Bolingbroke
*/

/*
 * Context:
   1) Thermoelectric effect -https://en.wikipedia.org/wiki/Thermoelectric_effect#Seebeck_effect
    a) Seebeck coefficient - https://en.wikipedia.org/wiki/Seebeck_coefficient
    b) Peltier effect
    c) Thomson effect
    
*/

// Constants
  double Speed_Of_Light = 299792458; // Speed of light
  
// Variables
  float T1; // Concentrator temperature Hight
  float T2; // Coolling side temperature Low
  
  // Seebeck coefficient 
  float J; //  The local current density - https://en.wikipedia.org/wiki/Current_density
  float sigma; // Is the local conductivity - https://en.wikipedia.org/wiki/Electrical_conductivity
  float delta_V; // Is the local voltage - https://en.wikipedia.org/wiki/Voltage
  float E_emf; // Electromotive field - https://en.wikipedia.org/wiki/Electromotive_force
  float S; // Where S is the Seebeck coefficient (also known as thermopower), 
  float delta_T; // Temperature difference
 
  // Peltier effect
  

void Seebeck_coefficient_Equations(){
  /*
   Definition:
     * The Seebeck coefficient (also known as thermopower, thermoelectric power, and thermoelectric sensitivity) of a material 
     * is a measure of the magnitude of an induced thermoelectric voltage in response to a 
     * temperature difference across that material, as induced by the Seebeck effect. The SI unit of the Seebeck coefficient 
     * is volts per kelvin (V/K),although it is more often given in microvolts per kelvin (μV/K).
     * WIKI Abstract.
     * 
   */
   
   
  /*  
   History:
   *  One way to define the Seebeck coefficient is the voltage built up when a small temperature gradient is applied 
   *  to a material, and when the material has come to a steady state 
   *  where the current density is zero everywhere. 
   *  If the temperature difference ΔT between the two ends of a material is small, 
   *  then the Seebeck coefficient of a material is defined as a equation: 
   *  S = - (delta_V / delta_T).
  */

  /*
  Equations:
      J = sigma * (-delta_V + E_emf);
      J = - sigma * delta_V +  sigma * E_emf); // Expansion of equation to help with logistics
    Where V is the local voltage, and sigma  is the local conductivity.
      
    In general, the Seebeck effect is described locally by the 
    creation of an electromotive field.
       E_emf = -S * delta_T

  Logic:
    delta_T = T2 - T1; // Temperature difference beatween hot and a cold chambers
    E_emf = -S * delta_T; //  Electromotive field equation
    J = sigma * (-delta_V + E_emf)

  Condition:
   * If the system reaches a steady state, where J = 0,
   * then the voltage gradient is given simply by the next equation. 

  Resulting equation:
    -V = S *Delta_T.

  Application:
    This simple relationship, which does not depend on conductivity,
    is used in the thermocouple to measure a temperature difference; 
    an absolute temperature may be found by performing the voltage measurement at a known reference temperature.
    
  */
}

void Peltier_effect_Equations(){
  /*
 Definition:
   The Peltier effect is the presence of heating or cooling at an electrified junction of two different conductors 
   and is named after French physicist Jean Charles Athanase Peltier, who discovered it in 1834. 
   When a current is made to flow through a junction between two conductors, A and B,
   heat may be generated or removed at the junction.
   The Peltier heat generated at the junction per unit time is

   Q = (Pi_A - Pi_B)*I
   
   The Peltier coefficients represent how much heat is carried per unit charge. 
   Since charge current must be continuous across a junction, the associated heat flow will develop 
   a discontinuity if Pi_A and Pi_B are different. 
   The Peltier effect can be considered as the back-action counterpart to the Seebeck effect 
   (analogous to the back-emf in magnetic induction): if a simple thermoelectric circuit is closed,
   then the Seebeck effect will drive a current, which in turn (by the Peltier effect) will always transfer heat 
   from the hot to the cold junction.
   The close relationship between Peltier and Seebeck effects can be seen in the direct connection between their coefficients: 
   
   Pi_X = TS 
   
   A typical Peltier heat pump involves multiple junctions in series, through which a current is driven.
   Some of the junctions lose heat due to the Peltier effect, while others gain heat. 
   Thermoelectric heat pumps exploit this phenomenon, as do thermoelectric cooling devices found in refrigerators.
 
 Equations:
     Pi_X = TS 
     Q = (P_A - P_B)*I

 Application:
    if  Pi_X = TS 
    and Q = (P_A - P_B)*I
   then Q = (T_A * S_A - T_B * S_B)*I
  */
}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
