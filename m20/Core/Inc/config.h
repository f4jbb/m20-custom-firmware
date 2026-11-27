#ifndef INC_CONFIG_H_
#define INC_CONFIG_H_

// =========================================================================
// CONFIGURATION MATERIELLE DE LA SONDE M20
// =========================================================================
// 1 = u-blox MAX-M10M (sondes récentes / 0.10) | 2 = XM1110 (anciennes sondes)
#define GPS_TYPE 1

// Correction de fréquence du quartz en pas (~100-200 Hz) si décalage constaté
#define ADF_FREQ_CORRECTION 0

// Mode de la LED : 0 = éteinte (discrétion renard) | 1 = recherche GPS | 2 = active
#define LED_MODE 0

// =========================================================================
// CONFIGURATION HORUS BINARY (Télémétrie longue portée 4-FSK)
// =========================================================================
// 0 = désactivé (100% APRS pour la chasse au renard)
#define HORUS_ENABLE 0

// Votre indicatif radioamateur pour Horus V3
#define HORUS_V3_PAYLOAD_CALLSIGN "F4JBB"

// Fréquence(s) d'émission Horus en Hz (ex: 437.600 MHz)
#define QRG_FSK4 {437600000}

// Puissance d'émission Horus (8 = ~5mW à 63 = ~130mW avec RF_BOOST)
#define FSK4_POWER 25

// =========================================================================
// CONFIGURATION APRS (AFSK 1200 bauds)
// =========================================================================
// 1 = activé | 0 = désactivé
#define APRS_ENABLE 1

// Votre indicatif (6 caractères max) et SSID (7 = portable/gonio)
#define APRS_CALLSIGN "F4JBB"
#define APRS_SSID 7

// Symbole APRS ('O' = Ballon, '>' = Voiture, '-' = Maison/Station fixe)
#define APRS_SYMBOL '-'

// Chemin de répétition APRS ("WIDE1-1" pour portée locale sans saturer le réseau)
#define APRS_PATH "WIDE1-1"

// Commentaire transmis dans la trame APRS
#define APRS_COMMENT "Chasse au renard M20 F4JBB"

// Fréquence APRS UHF en Hz (432.500 MHz standard en Europe)
#define QRG_AFSK {432500000}

// Puissance d'émission APRS (8 à 63)
#define AFSK_POWER 25

// =========================================================================
// CADENCE ET GESTION D'ENERGIE
// =========================================================================
// Intervalle en secondes entre deux émissions (minimum 4 secondes)
#define TIME_PERIOD 4

// Amplification RF (0 = désactivé / atténué pour éviter la saturation proche)
#define RF_BOOST 0

#endif /* INC_CONFIG_H_ */

