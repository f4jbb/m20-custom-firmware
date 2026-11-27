/* MAIN CONFIG FILE FOR THIS PROJECT */
#ifndef INC_CONFIG_H_
#define INC_CONFIG_H_
/-----------------------------------------------------------------/
//  Sonde configuration, parameters that should be changed
#define TIME_PERIOD 12 // Time between starts of transmissions (in seconds) (must be more than 4+TX_PAUSE)
// Horus Binary 4FSK mode (V2 or V3)
#define HORUS_ENABLE 3 // 0 - disabled, 2 - V2, 3 - V3
const static float QRG_FSK4[] = {
437600000};       // 4FSK transmitted frequencies array (437.600 MHz - Standard Européen Horus)
#define FSK4_POWER 30 // RF power setting for horus transmission values 0-63
#define HORUS_V2_PAYLOAD_ID                                                                                                                          
256 // Sonde payload ID 256 - for 4FSKTEST-V2
#define HORUS_V3_PAYLOAD_CALLSIGN                                                                                                                    
"F4JBB-11" // Sonde payload callsign, 1 to 15 characters
#define FSK4_WAIT_TIME 0 // Time in ms of constant TX freq before actual modulation
#define TX_PAUSE 500 // Delay between HORUS and APRS
// APRS (AX.25 AFSK HDLC Bell 202)
#define APRS_ENABLE 1
const static float QRG_AFSK[] = {
432500000};               // AFSK transmitted frequencies array (432.500 MHz - Standard Européen APRS UHF)
#define AFSK_POWER FSK4_POWER // RF power setting AFSK transmission values 0-63
#define APRS_CALLSIGN "F4JBB"  // Sonde callsign, max 6 digits
#define APRS_SSID 11           // Sonde SSID, 11 is "balloons, aircraft, spacecraft, etc"
#define APRS_DESTINATION "APRM20" // Destination address, characterizing a M20 transmitter
#define APRS_DESTINATION_SSID 0   // Default 0 SSID
#define APRS_PATH "WIDE2" // Path, max 6 digits
#define APRS_PATH_SSID 1  // Path SSID (WIDE2-1 recommandé en vol)
#define APRS_TIMESTAMP 0 // Disable APRS timestamp sending by default
#define APRS_SYMBOL "/O" // Balloon symbol (/O obligatoire pour affichage sur SondeHub)
#define APRS_COMMENT_TELEMETRY 1 // Active l'envoi des données météo (Temp/Pression) et batterie en APRS
#define APRS_COMMENT_TEXT_ENABLE 1
#define APRS_COMMENT_TEXT "F4JBB M20 balloon" // Texte libre ajouté après la télémétrie météo
// LED settings
#define LED_MODE 2                 // 0 - disabled, 1 - flashes before transmit, 2 - GPS fix indication
#define LED_TIMER_PERIOD 150       // time between LED lighting
#define LED_PERIOD 10               // time between LED lighting
#define LED_DISABLE_ALT 1500       // Coupe la LED au-dessus de 1500m pour économiser la batterie
#define LED_RE_EANBLE 0		   // Ne rallume pas la LED à la descente
// Radio settings
#define RF_BOOST 1 // RF booster enabled (+15dB gain)
#define ADF_PPS_CORRECTION_ENABLE 0
#define ADF_PPS_CORRECTION_REQUIRE_FIX 1
#define ADF_PPS_DEFAULT_FALLBACK 0
#define ADF_MAX_PPS_CORRECTION 5000
#define ADF_FREQ_INITIAL_CORRECTION 20 // Décalage quartz initial (à vérifier au SDR avant le vol)
#define ADF_FREQ_CORRECTION 4
#define ADF_FSK_DEVIATION 5    // Déviation AFSK (~5.5 kHz)
// GPS configuration
#define GPS_TYPE 1 // 1 - u-blox MAX-M10M (sondes récentes) | 2 - XM1110 (anciennes sondes)
#define GPS_WATCHDOG 1 // Redémarre le GPS en cas de blocage
#define GPS_WATCHDOG_ARC 180
#define AscentRateTime TIME_PERIOD / 2
// Capteurs Météo et Batterie
#define LPS22_ENABLE 1   // Active le baromètre (Pression atmosphérique)
#define NTC_ENABLE 1     // Active la thermistance externe (Température)
#define BAT_ADC_ENABLE 1 // Active la mesure de tension des piles
// PV / payload voltage ADC
#define PV_ADC_ENABLE 0
#define PV_ADC_R1 1
#define PV_ADC_R2 2
#define IWDG_ENABLE 1 // Watchdog matériel de sécurité
// Debug
#define DEBUG 0
#define GPS_DEBUG 0
#define GPS_RAW_DEBUG 0
#endif /* INC_CONFIG_H_ */

