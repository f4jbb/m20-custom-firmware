#ifndef INC_CONFIG_H_
#define INC_CONFIG_H_

// =========================================================================
// CONFIGURATION MATERIELLE DE LA SONDE M20
// =========================================================================
// 1 = u-blox MAX-M10M (sondes récentes) | 2 = XM1110 (anciennes sondes)
#define GPS_TYPE 1

// Correction de fréquence du quartz en pas (~100-200 Hz) si décalage constaté
#define ADF_FREQ_CORRECTION 0

// Mode de la LED : 0 = éteinte | 1 = recherche GPS uniquement | 2 = toujours active
// Mis à 0 pour plus de discrétion lors de la recherche finale et économiser la pile
#define LED_MODE 0

// =========================================================================
// CONFIGURATION HORUS BINARY (Télémétrie longue portée 4-FSK)
// =========================================================================
// 0 = désactivé | 2 = Horus V2 | 3 = Horus V3 (recommandé avec indicatif)
// Désactivé (0) pour concentrer l'émission sur l'APRS et éviter les interférences
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

// Votre indicatif (6 caractères max) et SSID (11 = ballon, 7 ou 9 = test au sol)
#define APRS_CALLSIGN "F4JBB"
#define APRS_SSID 7

// Symbole APRS ('O' = Ballon, '>' = Voiture, '-' = Maison/Station fixe)
#define APRS_SYMBOL '-'

// Chemin de répétition APRS ("WIDE2-1" en vol, "WIDE1-1,WIDE2-1" au sol)
// Mis à "" (vide) pour éviter d'inonder les digipeaters locaux avec des trames rapides
#define APRS_PATH ""

// Commentaire transmis dans la trame APRS
#define APRS_COMMENT "Chasse au renard M20 F4JBB"

// Fréquence APRS UHF en Hz (432.500 MHz standard en Europe)
// Note : En France, la bande 433.400 - 433.600 MHz est souvent utilisée pour la gonio UHF
#define QRG_AFSK {432500000}

// Puissance d'émission APRS (8 à 63)
// Réduite à 15 (~15-20mW) pour éviter de saturer les récepteurs à courte distance
#define AFSK_POWER 15

// =========================================================================
// CADENCE ET GESTION D'ENERGIE
// =========================================================================
// Intervalle en secondes entre deux émissions (minimum 4 secondes)
// Cadence rapide (4s) pour faciliter le relèvement à l'antenne directive
#define TIME_PERIOD 4

// Amplification RF (1 = activé jusqu'à 130mW | 0 = désactivé)
// Désactivé (0) pour limiter la puissance et augmenter l'autonomie
#define RF_BOOST 0

#endif /* INC_CONFIG_H_ */

