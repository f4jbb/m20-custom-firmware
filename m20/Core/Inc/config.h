
/*   MAIN CONFIG FILE FOR THIS PROJECT   */

#ifndef INC_CONFIG_H_
#define INC_CONFIG_H_

// =========================================================================
// CONFIGURATION MATERIELLE DE LA SONDE M20
// =========================================================================
#define GPS_TYPE 1                  // 1 = u-blox MAX-M10M | 2 = XM1110
#define GPS_WATCHDOG 1              // 1 = activé | 0 = désactivé
#define GPS_WATCHDOG_ARC 10         // Nombre de boucles sans fix avant redémarrage GPS
#define AscentRateTime 5            // Temps de calcul vitesse verticale (s)

#define ADF_FREQ_CORRECTION 0       // Correction fréquence quartz (pas de 244 Hz)
#define ADF_FSK_DEVIATION 12        // Déviation AFSK (ne pas modifier)
#define ADF_PPS_CORRECTION_ENABLE 0 // 1 = correction via 1PPS (modif matérielle requise)

// =========================================================================
// GESTION DE LA LED
// =========================================================================
#define LED_MODE 0                  // 0 = éteinte | 1 = avant TX | 2 = état fix GPS
#define LED_PERIOD 5000
#define LED_DISABLE_ALT 1500
#define LED_MODE_2_BLINK_TIME 100
#define LED_MODE_2_BLINK_PAUSE 200

// =========================================================================
// CONFIGURATION HORUS BINARY (4-FSK)
// =========================================================================
#define HORUS_ENABLE 0              // 0 = désactivé | 2 = Horus V2 | 3 = Horus V3
#define HORUS_V2_PAYLOAD_ID 256     // Obligatoire même si HORUS_ENABLE = 0
#define HORUS_V3_PAYLOAD_CALLSIGN "F4JBB"
#define QRG_FSK4 {437600000}
#define FSK4_POWER 25
#define FSK4_WAIT_TIME 500
#define TX_PAUSE 500

// =========================================================================
// CONFIGURATION APRS (AFSK 1200 bauds)
// =========================================================================
#define APRS_ENABLE 1
#define APRS_CALLSIGN "F4JBB"       // 6 caractères max
#define APRS_SSID 7                 // 11 = ballon, 7 = portable/gonio
#define APRS_DESTINATION "APZM20"   // Obligatoire (6 caractères max)
#define APRS_DESTINATION_SSID 0     // Obligatoire
#define APRS_PATH "WIDE2"           // Obligatoire (max 6 caractères)
#define APRS_PATH_SSID 0            // 0 = pas de répétition digipeater
#define APRS_SYMBOL "/-"            // Chaîne de 2 caractères ("/-" = Maison, "/O" = Ballon)
#define APRS_COMMENT_TELEMETRY 0    // 0 = désactivé (recommandé pour la chasse au renard)
#define APRS_COMMENT_TEXT "Chasse au renard M20 F4JBB"

#define QRG_AFSK {432500000}        // Fréquence APRS en Hz
#define AFSK_POWER 15               // Puissance (0 à 63)

// =========================================================================
// CADENCE, PUISSANCE ET CAPTEURS
// =========================================================================
#define TIME_PERIOD 4               // Intervalle en secondes (minimum 4)
#define RF_BOOST 0                  // 0 = désactivé (~15dB d'atténuation) | 1 = activé

#define LPS22_ENABLE 1              // Capteur pression/température interne
#define NTC_ENABLE 1                // Sonde température externe
#define BAT_ADC_ENABLE 1            // Mesure tension batterie
#define PV_ADC_ENABLE 0             // ADC externe PA0
#define PV_ADC_R1 1
#define PV_ADC_R2 2

// =========================================================================
// DEBUG UART
// =========================================================================
#define DEBUG 0
#define GPS_DEBUG 0
#define GPS_RAW_DEBUG 0

#endif /* INC_CONFIG_H_ */


#endif /* INC_CONFIG_H_ */

