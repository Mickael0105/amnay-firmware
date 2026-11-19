#pragma once
#include <Arduino.h>

// ---------- Réseau ----------
constexpr char WIFI_SSID[]     = "NOM_DU_WIFI";
constexpr char WIFI_PASSWORD[] = "MOT_DE_PASSE_WIFI";
constexpr char DEVICE_HOSTNAME[] = "amnay-esp32";
constexpr uint16_t HTTP_PORT = 80;

// ---------- Authentification ----------
constexpr char API_USERNAME[] = "admin";
constexpr char API_PASSWORD[] = "CHANGER_CE_MOT_DE_PASSE";

// ---------- Éclairage : 5 circuits (sorties) ----------
constexpr uint8_t PIN_LIGHT_SALON   = 16;
constexpr uint8_t PIN_LIGHT_CHAMBRE = 17;
constexpr uint8_t PIN_LIGHT_CUISINE = 18;
constexpr uint8_t PIN_LIGHT_JARDIN  = 19;
constexpr uint8_t PIN_LIGHT_GARAGE  = 21;

// ---------- Contacts de portes : 3 (entrées) ----------
constexpr uint8_t PIN_DOOR_ENTREE   = 32;
constexpr uint8_t PIN_DOOR_INTERIEUR = 33;
constexpr uint8_t PIN_DOOR_TERRASSE = 25;

// ---------- Contacts de fenêtres : 3 (entrées) ----------
constexpr uint8_t PIN_WINDOW_SALON   = 26;
constexpr uint8_t PIN_WINDOW_CHAMBRE = 27;
constexpr uint8_t PIN_WINDOW_CUISINE = 14;

// ---------- Capteurs de présence PIR : 3 (entrées seulement) ----------
constexpr uint8_t PIN_PIR_SALON = 34;
constexpr uint8_t PIN_PIR_HALL  = 35;
constexpr uint8_t PIN_PIR_ALLEE = 36;

// ---------- Verrouillage, garage et alarme ----------
constexpr uint8_t PIN_LOCK_RELAY       = 13;
constexpr uint8_t PIN_GARAGE_RELAY_UP  = 22;
constexpr uint8_t PIN_GARAGE_RELAY_DOWN = 23;
constexpr uint8_t PIN_BUZZER           = 4;

// ---------- Capteurs de climat ----------
constexpr uint8_t PIN_DHT       = 5;   // température et humidité
constexpr uint8_t PIN_LIGHT_SENSOR = 39; // luminosité (entrée analogique)

// ---------- Thermostat (mêmes valeurs que l'application) ----------
constexpr float SETPOINT_MIN  = 16.0;
constexpr float SETPOINT_MAX  = 30.0;
constexpr float SETPOINT_STEP = 0.5;
constexpr float SETPOINT_DEFAULT = 21.0;

// ---------- Durées ----------
constexpr uint32_t GARAGE_TRAVEL_MS = 8000;  // durée d'ouverture ou de fermeture
constexpr uint32_t SENSOR_PERIOD_MS = 2000;  // lecture des capteurs
constexpr uint8_t  EVENT_LOG_SIZE   = 50;    // événements gardés en mémoire

// ---------- Niveaux logiques des relais (selon ton module) ----------
constexpr bool RELAY_ON  = LOW;   // beaucoup de modules relais s'activent à l'état bas
constexpr bool RELAY_OFF = HIGH;