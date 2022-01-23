#ifndef LIBRETRO_CORE_OPTIONS_H__
#define LIBRETRO_CORE_OPTIONS_H__

#include <stdlib.h>
#include <string.h>

#include <libretro.h>
#include <retro_inline.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_ENGLISH */

/* Default language:
 * - All other languages must include the same keys and values
 * - Will be used as a fallback in the event that frontend language
 *   is not available
 * - Will be used as a fallback for any missing entries in
 *   frontend language definition */

struct retro_core_option_definition option_defs_us[] = {
   {
      "bluemsx_msxtype",
      "Machine Type (Restart)",
      "Manually select the machine type you would like the core to start in.",
      {
         { "Auto",   NULL },
         { "MSXturboR",   NULL },
         { "MSXturboR - European",   NULL },
         { "MSXturboR - Panasonic FS-A1GT",   NULL },
         { "MSXturboR - Panasonic FS-A1ST",   NULL },
         { "MSXturboR - Panasonic FS-A1ST (a)",   NULL },
         { "MSXturboR - Panasonic FS-A1ST (b)",   NULL },
         { "MSX2+",   NULL },
         { "MSX2+ - Brazilian",   NULL },
         { "MSX2+ - C-BIOS",   NULL },
         { "MSX2+ - Ciel Expert 3 IDE",   NULL },
         { "MSX2+ - Ciel Expert 3 Turbo",   NULL },
         { "MSX2+ - European",   NULL },
         { "MSX2+ - Gradiente Expert AC88+",   NULL },
         { "MSX2+ - Gradiente Expert DDX+",   NULL },
         { "MSX2+ - MSXPLAYer 2003",   NULL },
         { "MSX2+ - Panasonic FS-A1FX",   NULL },
         { "MSX2+ - Panasonic FS-A1WSX",   NULL },
         { "MSX2+ - Panasonic FS-A1WX",   NULL },
         { "MSX2+ - Panasonic FS-A1WX (a)",   NULL },
         { "MSX2+ - Sanyo Wavy PHC-35J",   NULL },
         { "MSX2+ - Sanyo Wavy PHC-70FD1",   NULL },
         { "MSX2+ - Sanyo Wavy PHC-70FD2",   NULL },
         { "MSX2+ - Sony HB-F1XDJ",   NULL },
         { "MSX2+ - Sony HB-F1XV",   NULL },
         { "MSX2+ - Sony HB-F9S+",   NULL },
         { "MSX2",   NULL },
         { "MSX2 - Al Alamiah AX-350",   NULL },
         { "MSX2 - Al Alamiah AX-370",   NULL },
         { "MSX2 - Arabic",   NULL },
         { "MSX2 - Brazilian",   NULL },
         { "MSX2 - C-BIOS",   NULL },
         { "MSX2 - Daewoo CPC-300",   NULL },
         { "MSX2 - Daewoo CPC-300E",   NULL },
         { "MSX2 - Daewoo CPC-400",   NULL },
         { "MSX2 - Daewoo CPC-400S",   NULL },
         { "MSX2 - Estonian",   NULL },
         { "MSX2 - French",   NULL },
         { "MSX2 - German",   NULL },
         { "MSX2 - Gradiente Expert 2.0",   NULL },
         { "MSX2 - Japanese",   NULL },
         { "MSX2 - Korean",   NULL },
         { "MSX2 - National FS-4500",   NULL },
         { "MSX2 - National FS-4600",   NULL },
         { "MSX2 - National FS-4700",   NULL },
         { "MSX2 - National FS-5000",   NULL },
         { "MSX2 - National FS-5500",   NULL },
         { "MSX2 - National FS-5500F1",   NULL },
         { "MSX2 - National FS-5500F2",   NULL },
         { "MSX2 - Only PSG",   NULL },
         { "MSX2 - Panasonic FS-A1",   NULL },
         { "MSX2 - Panasonic FS-A1 (a)",   NULL },
         { "MSX2 - Panasonic FS-A1F",   NULL },
         { "MSX2 - Panasonic FS-A1FM",   NULL },
         { "MSX2 - Panasonic FS-A1MK2",   NULL },
         { "MSX2 - Philips NMS-8220",   NULL },
         { "MSX2 - Philips NMS-8220 (a)",   NULL },
         { "MSX2 - Philips NMS-8245",   NULL },
         { "MSX2 - Philips NMS-8245F",   NULL },
         { "MSX2 - Philips NMS-8250",   NULL },
         { "MSX2 - Philips NMS-8255",   NULL },
         { "MSX2 - Philips NMS-8280",   NULL },
         { "MSX2 - Philips NMS-8280G",   NULL },
         { "MSX2 - Philips VG-8230",   NULL },
         { "MSX2 - Philips VG-8235",   NULL },
         { "MSX2 - Philips VG-8235F",   NULL },
         { "MSX2 - Philips VG-8240",   NULL },
         { "MSX2 - Russian",   NULL },
         { "MSX2 - Sanyo Wavy MPC-25FD",   NULL },
         { "MSX2 - Sanyo Wavy PHC-23",   NULL },
         { "MSX2 - Sharp Epcom HotBit 2.0",   NULL },
         { "MSX2 - Sony HB-F1",   NULL },
         { "MSX2 - Sony HB-F1II",   NULL },
         { "MSX2 - Sony HB-F1XD",   NULL },
         { "MSX2 - Sony HB-F1XDMK2",   NULL },
         { "MSX2 - Sony HB-F500",   NULL },
         { "MSX2 - Sony HB-F500P",   NULL },
         { "MSX2 - Sony HB-F700D",   NULL },
         { "MSX2 - Sony HB-F700F",   NULL },
         { "MSX2 - Sony HB-F700P",   NULL },
         { "MSX2 - Sony HB-F700S",   NULL },
         { "MSX2 - Sony HB-F900",   NULL },
         { "MSX2 - Sony HB-F900 (a)",   NULL },
         { "MSX2 - Sony HB-F9P",   NULL },
         { "MSX2 - Sony HB-F9P Russian",   NULL },
         { "MSX2 - Sony HB-F9S",   NULL },
         { "MSX2 - Sony HB-G900AP",   NULL },
         { "MSX2 - Sony HB-G900P",   NULL },
         { "MSX2 - Spanish",   NULL },
         { "MSX2 - Spectravideo SVI-738-2 CUC",   NULL },
         { "MSX2 - Spectravideo SVI-738-2 JP Grobler",   NULL },
         { "MSX2 - Spectravideo SVI-738-2 LC Grosso",   NULL },
         { "MSX2 - Swedish",   NULL },
         { "MSX2 - Talent TPC-310",   NULL },
         { "MSX2 - Toshiba HX-23",   NULL },
         { "MSX2 - Toshiba HX-23F",   NULL },
         { "MSX2 - Virtual Haesung Console",   NULL },
         { "MSX2 - Yamaha CX7M",   NULL },
         { "MSX2 - Yamaha CX7M-128",   NULL },
         { "MSX",   NULL },
         { "MSX - Al Alamiah AX-170",   NULL },
         { "MSX - Arabic",   NULL },
         { "MSX - Brazilian",   NULL },
         { "MSX - C-BIOS",   NULL },
         { "MSX - Canon V-10",   NULL },
         { "MSX - Canon V-20",   NULL },
         { "MSX - Daewoo DPC-100",   NULL },
         { "MSX - Daewoo DPC-180",   NULL },
         { "MSX - Daewoo DPC-200",   NULL },
         { "MSX - Daewoo DPC-200E",   NULL },
         { "MSX - Estonian",   NULL },
         { "MSX - Frael Bruc 100-1",   NULL },
         { "MSX - French",   NULL },
         { "MSX - German",   NULL },
         { "MSX - Goldstar FC-200",   NULL },
         { "MSX - Gradiente Expert 1.0",   NULL },
         { "MSX - Gradiente Expert 1.1",   NULL },
         { "MSX - Gradiente Expert 1.3",   NULL },
         { "MSX - Gradiente Expert DDPlus",   NULL },
         { "MSX - Gradiente Expert Plus",   NULL },
         { "MSX - Japanese",   NULL },
         { "MSX - JVC HC-7GB",   NULL },
         { "MSX - Korean",   NULL },
         { "MSX - Mitsubishi ML-F80",   NULL },
         { "MSX - Mitsubishi ML-FX1",   NULL },
         { "MSX - National CF-1200",   NULL },
         { "MSX - National CF-2000",   NULL },
         { "MSX - National CF-2700",   NULL },
         { "MSX - National CF-3000",   NULL },
         { "MSX - National CF-3300",   NULL },
         { "MSX - National FS-1300",   NULL },
         { "MSX - National FS-4000",   NULL },
         { "MSX - Olympia PHC-2",   NULL },
         { "MSX - Olympia PHC-28",   NULL },
         { "MSX - Panasonic CF-2700G",   NULL },
         { "MSX - Philips NMS-801",   NULL },
         { "MSX - Philips VG-8000",   NULL },
         { "MSX - Philips VG-8010",   NULL },
         { "MSX - Philips VG-8010F",   NULL },
         { "MSX - Philips VG-8020-00",   NULL },
         { "MSX - Philips VG-8020-20",   NULL },
         { "MSX - Philips VG-8020F",   NULL },
         { "MSX - Pioneer PX-7",   NULL },
         { "MSX - Pioneer PX-V60",   NULL },
         { "MSX - Russian",   NULL },
         { "MSX - Sanyo MPC-100",   NULL },
         { "MSX - Sanyo MPC-64",   NULL },
         { "MSX - Sanyo PHC-28L",   NULL },
         { "MSX - Sanyo PHC-28S",   NULL },
         { "MSX - Sanyo Wavy MPC-10",   NULL },
         { "MSX - Sharp Epcom HotBit 1.1",   NULL },
         { "MSX - Sharp Epcom HotBit 1.2",   NULL },
         { "MSX - Sharp Epcom HotBit 1.3b",   NULL },
         { "MSX - Sharp Epcom HotBit 1.3p",   NULL },
         { "MSX - Sony HB-10P",   NULL },
         { "MSX - Sony HB-201",   NULL },
         { "MSX - Sony HB-201P",   NULL },
         { "MSX - Sony HB-20P",   NULL },
         { "MSX - Sony HB-501P",   NULL },
         { "MSX - Sony HB-55D",   NULL },
         { "MSX - Sony HB-55P",   NULL },
         { "MSX - Sony HB-75D",   NULL },
         { "MSX - Sony HB-75P",   NULL },
         { "MSX - Spanish",   NULL },
         { "MSX - Spectravideo SVI-728",   NULL },
         { "MSX - Spectravideo SVI-738",   NULL },
         { "MSX - Spectravideo SVI-738 Henrik Gilvad",   NULL },
         { "MSX - Spectravideo SVI-738 Swedish",   NULL },
         { "MSX - Swedish",   NULL },
         { "MSX - Talent DPC-200",   NULL },
         { "MSX - Talent DPC-200A",   NULL },
         { "MSX - Toshiba HX-10",   NULL },
         { "MSX - Toshiba HX-10S",   NULL },
         { "MSX - Toshiba HX-20",   NULL },
         { "MSX - Yamaha CX5M",   NULL },
         { "MSX - Yamaha CX5M-1",   NULL },
         { "MSX - Yamaha CX5M-128",   NULL },
         { "MSX - Yamaha CX5M-2",   NULL },
         { "MSX - Yamaha CX5MII",   NULL },
         { "MSX - Yamaha YIS303",   NULL },
         { "MSX - Yamaha YIS503",   NULL },
         { "MSX - Yamaha YIS503F",   NULL },
         { "MSX - Yamaha YIS503II",   NULL },
         { "MSX - Yamaha YIS503IIR",   NULL },
         { "MSX - Yamaha YIS503IIR Estonian",   NULL },
         { "MSX - Yamaha YIS503M",   NULL },
         { "MSX - Yashica YC-64",   NULL },
         { "MSX - Yeno DPC-64",   NULL },
         { "MSX - Yeno MX64",   NULL },
         { "COL - Bit Corporation Dina",   NULL },
         { "COL - ColecoVision",   NULL },
         { "COL - ColecoVision with Opcode Memory Extension",   NULL },
         { "COL - Spectravideo SVI-603 Coleco",   NULL },
         { "Forte II Games - Pesadelo",   NULL },
         { "SEGA - SC-3000",   NULL },
         { "SEGA - SF-7000",   NULL },
         { "SEGA - SG-1000",   NULL },
         { "SVI - Spectravideo SVI-318",   NULL },
         { "SVI - Spectravideo SVI-328",   NULL },
         { "SVI - Spectravideo SVI-328 80 Column",   NULL },
         { "SVI - Spectravideo SVI-328 80 Swedish",   NULL },
         { "SVI - Spectravideo SVI-328 MK2",   NULL },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bluemsx_overscan",
      "Crop Overscan",
      "Forces cropping of overscanned frames",
      {
         { "disabled",   NULL },
         { "enabled",   NULL },
         { "MSX2",   NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "bluemsx_vdp_synctype",
      "VDP Sync Type (Restart)",
      "Match the game/machine region frequency to avoid emulated speed issues.",
      {
         { "Auto",   NULL },
         { "50Hz",   NULL },
         { "60Hz",   NULL },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bluemsx_nospritelimits",
      "No Sprite Limit",
      "Remove the 4 sprite per line limit which can reduce or remove sprite flicker in some games.",
      {
         { "OFF",   NULL },
         { "ON",   NULL },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bluemsx_ym2413_enable",
      "Sound YM2413 Enable (Restart)",
      "Awaiting description.",
      {
         { "enabled",   NULL },
         { "disabled",   NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "bluemsx_cartmapper",
      "Cart Mapper Type (Restart)",
      "When a ROM game or application is in the database, the emulator uses the databases to apply the correct mapper. If the sha1 value of a dump is not yet in the databases, it uses an automatic mapper detection system, but it can fail in some cases. In this situation, you can manually select the correct mapper.",
      {
         { "Auto",   NULL },
         { "Normal",   NULL },
         { "mirrored",   NULL },
         { "basic",   NULL },
         { "0x4000",   NULL },
         { "0xC000",   NULL },
         { "ascii8",   NULL },
         { "ascii8sram",   NULL },
         { "ascii16",   NULL },
         { "ascii16sram",   NULL },
         { "ascii16nf",   NULL },
         { "konami4",   NULL },
         { "konami4nf",   NULL },
         { "konami5",   NULL },
         { "konamisynth",   NULL },
         { "korean80",   NULL },
         { "korean90",   NULL },
         { "korean126",   NULL },
         { "MegaFlashRomScc",   NULL },
         { "MegaFlashRomSccPlus",   NULL },
         { "msxdos2",   NULL },
         { "scc",   NULL },
         { "sccexpanded",   NULL },
         { "sccmirrored",   NULL },
         { "sccplus",   NULL },
         { "snatcher",   NULL },
         { "sdsnatcher",   NULL },
         { "SegaBasic",   NULL },
         { "SG1000",   NULL },
         { "SG1000Castle",   NULL },
         { "SG1000RamA",   NULL },
         { "SG1000RamB",   NULL },
         { "SC3000",   NULL },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bluemsx_auto_rewind_cas",
      "Auto Rewind Cassette",
      "",
      {
         { "ON",   NULL },
         { "OFF",   NULL },
         { NULL, NULL },
      },
      "ON"
   },
   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

/*
 ********************************
 * Language Mapping
 ********************************
*/

struct retro_core_option_definition *option_defs_intl[RETRO_LANGUAGE_LAST] = {
   option_defs_us, /* RETRO_LANGUAGE_ENGLISH */
   NULL,           /* RETRO_LANGUAGE_JAPANESE */
   NULL,           /* RETRO_LANGUAGE_FRENCH */
   NULL,           /* RETRO_LANGUAGE_SPANISH */
   NULL,           /* RETRO_LANGUAGE_GERMAN */
   NULL,           /* RETRO_LANGUAGE_ITALIAN */
   NULL,           /* RETRO_LANGUAGE_DUTCH */
   NULL,           /* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */
   NULL,           /* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */
   NULL,           /* RETRO_LANGUAGE_RUSSIAN */
   NULL,           /* RETRO_LANGUAGE_KOREAN */
   NULL,           /* RETRO_LANGUAGE_CHINESE_TRADITIONAL */
   NULL,           /* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
   NULL,           /* RETRO_LANGUAGE_ESPERANTO */
   NULL,           /* RETRO_LANGUAGE_POLISH */
   NULL,           /* RETRO_LANGUAGE_VIETNAMESE */
   NULL,           /* RETRO_LANGUAGE_ARABIC */
   NULL,           /* RETRO_LANGUAGE_GREEK */
   NULL,           /* RETRO_LANGUAGE_TURKISH */
};

/*
 ********************************
 * Functions
 ********************************
*/

/* Handles configuration/setting of core options.
 * Should be called as early as possible - ideally inside
 * retro_set_environment(), and no later than retro_load_game()
 * > We place the function body in the header to avoid the
 *   necessity of adding more .c files (i.e. want this to
 *   be as painless as possible for core devs)
 */

static INLINE void libretro_set_core_options(retro_environment_t environ_cb)
{
   unsigned version = 0;

   if (!environ_cb)
      return;

   if (environ_cb(RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION, &version) && (version == 1))
   {
      struct retro_core_options_intl core_options_intl;
      unsigned language = 0;

      core_options_intl.us    = option_defs_us;
      core_options_intl.local = NULL;

      if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
          (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH))
         core_options_intl.local = option_defs_intl[language];

      environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_INTL, &core_options_intl);
   }
   else
   {
      size_t i;
      size_t num_options               = 0;
      struct retro_variable *variables = NULL;
      char **values_buf                = NULL;

      /* Determine number of options */
      while (true)
      {
         if (option_defs_us[num_options].key)
            num_options++;
         else
            break;
      }

      /* Allocate arrays */
      variables  = (struct retro_variable *)calloc(num_options + 1, sizeof(struct retro_variable));
      values_buf = (char **)calloc(num_options, sizeof(char *));

      if (!variables || !values_buf)
         goto error;

      /* Copy parameters from option_defs_us array */
      for (i = 0; i < num_options; i++)
      {
         const char *key                        = option_defs_us[i].key;
         const char *desc                       = option_defs_us[i].desc;
         const char *default_value              = option_defs_us[i].default_value;
         struct retro_core_option_value *values = option_defs_us[i].values;
         size_t buf_len                         = 3;
         size_t default_index                   = 0;

         values_buf[i] = NULL;

         if (desc)
         {
            size_t num_values = 0;

            /* Determine number of values */
            while (true)
            {
               if (values[num_values].value)
               {
                  /* Check if this is the default value */
                  if (default_value)
                     if (strcmp(values[num_values].value, default_value) == 0)
                        default_index = num_values;

                  buf_len += strlen(values[num_values].value);
                  num_values++;
               }
               else
                  break;
            }

            /* Build values string */
            if (num_values > 1)
            {
               size_t j;

               buf_len += num_values - 1;
               buf_len += strlen(desc);

               values_buf[i] = (char *)calloc(buf_len, sizeof(char));
               if (!values_buf[i])
                  goto error;

               strcpy(values_buf[i], desc);
               strcat(values_buf[i], "; ");

               /* Default value goes first */
               strcat(values_buf[i], values[default_index].value);

               /* Add remaining values */
               for (j = 0; j < num_values; j++)
               {
                  if (j != default_index)
                  {
                     strcat(values_buf[i], "|");
                     strcat(values_buf[i], values[j].value);
                  }
               }
            }
         }

         variables[i].key   = key;
         variables[i].value = values_buf[i];
      }
      
      /* Set variables */
      environ_cb(RETRO_ENVIRONMENT_SET_VARIABLES, variables);

error:

      /* Clean up */
      if (values_buf)
      {
         for (i = 0; i < num_options; i++)
         {
            if (values_buf[i])
            {
               free(values_buf[i]);
               values_buf[i] = NULL;
            }
         }

         free(values_buf);
         values_buf = NULL;
      }

      if (variables)
      {
         free(variables);
         variables = NULL;
      }
   }
}

#ifdef __cplusplus
}
#endif

#endif
