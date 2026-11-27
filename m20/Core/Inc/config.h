/* MAIN CONFIG FILE FOR THIS PROJECT */

#ifndef INC_CONFIG_H_
#define INC_CONFIG_H_

// =========================================================================
// CONFIGURATION MATERIELLE DE LA SONDE M20
// =========================================================================
#define GPS_TYPE 1                      // 1 = u-blox MAX-M10 (compatible 0.10) | 2 = XM1110
#define GPS_WATCHDOG 1                  // 1 = activé (relance le GPS sous couvert forestier)
#define GPS_WATCHDOG_ARC 10             // Nombre de boucles sans fix avant redémarrage GPS
#define AscentRateTime 5                // Temps de calcul vitesse verticale (s)

#define ADF_FREQ_CORRECTION 0           // Correction fréquence quartz (pas de 244 Hz)
#define ADF_FSK_DEVIATION 12            // Déviation AFSK (ne pas modifier)
#define ADF_PPS_CORRECTION_ENABLE 0     // 1 = correction via 1PPS (modif matérielle requise)

// =========================================================================
// GESTION DE LA LED (DISCRETION MAXIMALE)
// =========================================================================
#define LED_MODE 0                      // 0 = éteinte en permanence (invisible une fois cachée)
#define LED_PERIOD 5000
#define LED_DISABLE_ALT 1500
#define LED_MODE_2_BLINK_TIME 100
#define LED_MODE_2_BLINK_PAUSE 200

// =========================================================================
// CONFIGURATION HORUS BINARY (DESACTIVE)
// =========================================================================
#define HORUS_ENABLE 0                  // Désactivé pour consacrer 100% des émissions à l'APRS
#define HORUS_V2_PAYLOAD_ID 256         // Obligatoire même si HORUS_ENABLE = 0
#define HORUS_V3_PAYLOAD_CALLSIGN "F4JBB"
#define QRG_FSK4 {437600000}
#define FSK4_POWER 25
#define FSK4_WAIT_TIME 500
#define TX_PAUSE 500

// =========================================================================
// CONFIGURATION APRS (OPTIMISE CHASSE AU RENARD)
// =========================================================================
#define APRS_ENABLE 1
#define APRS_CALLSIGN "F4JBB"           // 6 caractères max
#define APRS_SSID 7                     // 7 = portable / gonio
#define APRS_DESTINATION "APZM20"       // Obligatoire (6 caractères max)
#define APRS_DESTINATION_SSID 0         // Obligatoire
#define APRS_PATH "WIDE2"               // Obligatoire (max 6 caractères)
#define APRS_PATH_SSID 0                // 0 = pas de répétition digipeater (reste local)
#define APRS_SYMBOL "/'"                // "/'" = Cible/Avion léger (ou "/-" pour Maison)
#define APRS_COMMENT_TELEMETRY 0        // 0 = trame courte (plus rapide à relever en gonio)
#define APRS_COMMENT_TEXT "Renard M20 F4JBB" // Texte court = trame plus rapide
#define QRG_AFSK {432500000}            // Fréquence APRS UHF officielle (432,500 MHz)
#define AFSK_POWER 25                   // Puissance modérée (25/63) pour portée locale

// =========================================================================
// CADENCE, PUISSANCE ET CAPTEURS (ECONOMIE BATTERIE)
// =========================================================================
#define TIME_PERIOD 5                   // Émission toutes les 5 s (bon compromis gonio/batterie)
#define RF_BOOST 0                      // 0 = atténué (~15dB) pour éviter la saturation proche

#define LPS22_ENABLE 0                  // Désactivé (inutile au sol, économise la pile)
#define NTC_ENABLE 0                    // Désactivé (inutile au sol, économise la pile)
#define BAT_ADC_ENABLE 1                // Gardé actif pour surveiller la pile avant le départ
#define PV_ADC_ENABLE 0                 // ADC externe PA0
#define PV_ADC_R1 1
#define PV_ADC_R2 2

// =========================================================================
// DEBUG UART
// =========================================================================
#define DEBUG 0
#define GPS_DEBUG 0
#define GPS_RAW_DEBUG 0

#endif /* INC_CONFIG_H_ */
