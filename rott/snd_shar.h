/*
Copyright (C) 1994-1995 Apogee Software, Ltd.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
typedef enum {

D_LASTSOUND=-1,
// MENU SOUNDS

D_MENUFLIP,
D_ESCPRESSEDSND,
D_MOVECURSORSND,
D_SELECTSND,
D_WARNINGBOXSND,
D_INFOBOXSND,
D_QUESTIONBOXSND,
D_NOPESND,

// GAME SOUNDS

D_LEVELSTARTSND,
D_LEVELDONESND,
D_GAMEOVERSND,

// LEVEL END SCREEN

D_ENDBONUS1SND,

// PLAYER SOUNDS

D_HITWALLSND,
D_SELECTWPNSND,
D_NOWAYSND,
D_DONOTHINGSND,
//D_NOITEMSND,
D_PLAYERDYINGSND,

D_PLAYERTCDEATHSND,
D_PLAYERTCHURTSND,
D_PLAYERTCSND,
//D_WALK1SND,
//D_WALK2SND,
D_PLAYERBURNEDSND,
D_PLAYERLANDSND,
D_PLAYERCOUGHMSND,

// PLAYER WEAPONS

D_ATKPISTOLSND,
D_ATKTWOPISTOLSND,
D_ATKMP40SND,
D_RICOCHET1SND,
D_RICOCHET2SND,
D_RICOCHET3SND,
D_BAZOOKAFIRESND,
D_HEATSEEKFIRESND,
D_FIREBOMBFIRESND,
D_DRUNKFIRESND,
D_FLAMEWALLFIRESND,
D_FLAMEWALLSND,
D_GRAVSND,
D_FIREHITSND,
D_MISSILEFLYSND,
D_MISSILEHITSND,
D_GODMODEFIRESND,
D_GODMODE1SND,
D_GODMODE2SND,
D_GODMODE3SND,
D_LOSEMODESND,
D_GODMANSND,
D_FLYINGSND,

// PLAYER-CAUSED SOUNDS

D_GLASSBREAKSND,
D_ITEMBLOWSND,
D_BONUSBARRELSND,
D_TOUCHPLATESND,
D_BADTOUCHSND,
D_EXPLODEFLOORSND,
D_EXPLODESND,
//D_GASSTARTSND,
D_GASHISSSND,
D_GASENDSND,
D_GASMASKSND,

// GET ITEM SOUNDS

D_GETKEYSND,
D_GETBONUSSND,
D_GETHEALTH1SND,
D_COOKHEALTHSND,

D_GETWEAPONSND,
D_GETGODSND,
D_GETFLEETSND,
D_GETELASTSND,
D_GETSHROOMSSND,
D_GETBVESTSND,
D_GETAVESTSND,
D_GETMASKSND,

D_GET1UPSND,
D_RESPAWNSND,
D_PLAYERSPAWNSND,

// ACTOR SOUNDS

D_LOWGUARD1SEESND,
D_LOWGUARD1SEE2SND,
D_LOWGUARDOUCHSND,
D_LOWGUARD1DIESND,
D_SNEAKYSPRINGMSND,

D_HIGHGUARD1SEESND,
D_HIGHGUARDOUCHSND,
D_HIGHGUARDDIESND,

D_STRIKE1SEESND,
D_STRIKEROLLSND,
D_STRIKEOUCHSND,
D_STRIKEDIESND,

D_BLITZ1SEESND,
D_BLITZSTEALSND,
D_BLITZOUCHSND,
D_BLITZDIESND,
D_BLITZPLEADSND,
D_BLITZPLEAD1SND,
D_BLITZPLEAD2SND,

D_ENFORCERSEESND,
D_ENFORCERFIRESND,
D_ENFORCERTHROWSND,
D_ENFORCEROUCHSND,
D_ENFORCERDIESND,

D_ROBOTSEESND,
D_ROBOTFIRESND,
D_ROBOTDIESND,

D_KRISTMOTORSND,

// ENVIRONMENT SOUNDS

D_OPENDOORSND,
D_CLOSEDOORSND,
D_DOORHITSND,

D_FIRECHUTESND,
D_FIREBALLSND,
D_FIREBALLHITSND,
D_BLADESPINSND,
D_PUSHWALLSND,
D_PUSHWALLHITSND,
D_GOWALLSND,
D_TURBOWALLSND,
D_PITTRAPSND,
D_FIREJETSND,
D_ACTORSQUISHSND,
D_ACTORBURNEDSND,
D_ACTORSKELETONSND,

D_SPEARSTABSND,
D_CYLINDERMOVESND,
D_ELEVATORONSND,
D_ELEVATORENDSND,
D_SPRINGBOARDSND,
D_LIGHTNINGSND,
//D_WINDSND,

// SECRET SOUNDS

D_YOUSUCKSND,
D_BODYLANDSND,
D_GIBSPLASHSND,
D_ACTORLANDSND

} digisounds;


static sound_t sounds[MAXSOUNDS] = {
//SD_MENUFLIP,
//|-------DIGITAL--------|---------MUSE---------|-MIDI----------FLAGS---|
 {{D_MENUFLIP,            MUSE_MENUFLIPSND,      },  0,SD_PRIOMENU},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ESCPRESSEDSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ESCPRESSEDSND,       MUSE_ESCPRESSEDSND,    },  0,SD_PRIOMENU},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_MOVECURSORSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_MOVECURSORSND,       MUSE_MOVECURSORSND,    },  0,SD_PRIOMENU},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SELECTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_SELECTSND,           MUSE_SELECTSND,        },  0,SD_PRIOMENU},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_WARNINGBOXSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_WARNINGBOXSND,       MUSE_WARNINGBOXSND,    },  0,SD_PRIOMENU},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_INFOBOXSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_INFOBOXSND,          MUSE_INFOBOXSND,       },  0,SD_PRIOMENU},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_QUESTIONBOXSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_QUESTIONBOXSND,      MUSE_QUESTIONBOXSND,   },  0,SD_PRIOMENU},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_NOPESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_NOPESND,             MUSE_NOPESND,          },  0,SD_PRIOMENU},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_QUIT1SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,           MUSE_SELECTSND,        },  0,SD_PRIOQUIT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_QUIT2SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,            MUSE_SELECTSND,       },  0,SD_PRIOQUIT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_QUIT3SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,            MUSE_SELECTSND,       },  0,SD_PRIOQUIT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_QUIT4SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,            MUSE_SELECTSND,       },  0,SD_PRIOQUIT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_QUIT5SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,            MUSE_SELECTSND,       },  0,SD_PRIOQUIT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_QUIT6SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,            MUSE_SELECTSND,       },  0,SD_PRIOQUIT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_QUIT7SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,            MUSE_SELECTSND,       },  0,SD_PRIOQUIT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LEVELSTARTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LEVELSTARTSND,       MUSE_LEVELSTARTSND,    },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LEVELDONESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LEVELDONESND,        MUSE_LEVELENDSND,      },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GAMEOVERSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GAMEOVERSND,         MUSE_GAMEOVERSND,      },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ENDBONUS1SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ENDBONUS1SND,        MUSE_ENDBONUS1SND,     },  SD_PITCHSHIFTOFF,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_NOBONUSSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,          MUSE_NOBONUSSND,        },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PERCENT100SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,       MUSE_PERCENT100SND,        },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_HITWALLSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_HITWALLSND,          MUSE_HITWALLSND,       },  0,SD_PRIOPCAUSD},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SELECTWPNSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_SELECTWPNSND,        MUSE_SELECTWPNSND,     },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_NOWAYSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_NOWAYSND,            MUSE_NOWAYSND,         },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DONOTHINGSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_DONOTHINGSND,        MUSE_DONOTHINGSND,     },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_NOITEMSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_NOWAYSND,            MUSE_NOITEMSND,        },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERDYINGSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERDYINGSND,      MUSE_PLAYERDYINGSND,   },  SD_PITCHSHIFTOFF,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERTCDEATHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCDEATHSND,    MUSE_PLAYERDEATHSND,   },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERTBDEATHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCDEATHSND,    MUSE_PLAYERDEATHSND,   },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERDWDEATHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCDEATHSND,    MUSE_PLAYERDEATHSND,   },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERLNDEATHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCDEATHSND,    MUSE_PLAYERDEATHSND,   },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERIPFDEATHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCDEATHSND,    MUSE_PLAYERDEATHSND,   },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERTCHURTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCHURTSND,     MUSE_PLAYERHURTSND,    },  SD_PLAYONCE, SD_PRIOPHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERTBHURTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCHURTSND,     MUSE_PLAYERHURTSND,    },  SD_PLAYONCE, SD_PRIOPHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERDWHURTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCHURTSND,     MUSE_PLAYERHURTSND,    },  SD_PLAYONCE, SD_PRIOPHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERLNHURTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCHURTSND,     MUSE_PLAYERHURTSND,    },  SD_PLAYONCE, SD_PRIOPHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERIPFHURTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCHURTSND,     MUSE_PLAYERHURTSND,    },  SD_PLAYONCE, SD_PRIOPHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERTCSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCSND,         MUSE_PLAYERYESSND,     },  0,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERTBSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCSND,         MUSE_PLAYERYESSND,     },  0,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERDWSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCSND,         MUSE_PLAYERYESSND,     },  0,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERLNSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCSND,         MUSE_PLAYERYESSND,     },  0,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERIPFSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERTCSND,         MUSE_PLAYERYESSND,     },  0,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_WALK1SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
// {{D_WALK1SND,            MUSE_WALK1SND,       },  0,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_WALK2SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
// {{D_WALK2SND,            MUSE_WALK2SND,       },  0,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERBURNEDSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERBURNEDSND,     MUSE_PLAYERHURTSND,    },  SD_PLAYONCE,SD_PRIOPHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERLANDSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERLANDSND,       MUSE_PLAYERLANDSND,    },  0,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERCOUGHMSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERCOUGHMSND,     MUSE_LASTSOUND,        },  0,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERCOUGHFSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,     MUSE_LASTSOUND,              },  0,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_NETWIGGLESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_LASTSOUND,           },  0,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_NETFALLSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,          MUSE_NETFALLSND,        },  0,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ATKPISTOLSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ATKPISTOLSND,        MUSE_ATKPISTOLSND,     },  SD_WRITE,SD_PRIOPGUNS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ATKTWOPISTOLSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ATKTWOPISTOLSND,     MUSE_ATKPISTOLSND,     },  SD_WRITE,SD_PRIOPGUNS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ATKMP40SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ATKMP40SND,          MUSE_ATKMP40SND,       },  SD_WRITE,SD_PRIOPMP40},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_RICOCHET1SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_RICOCHET1SND,        MUSE_RICOCHETSND,      },  SD_WRITE,SD_PRIOPCAUSD},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_RICOCHET2SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_RICOCHET2SND,        MUSE_RICOCHETSND,      },  SD_WRITE,SD_PRIOPCAUSD},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_RICOCHET3SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_RICOCHET3SND,        MUSE_RICOCHETSND,      },  SD_WRITE,SD_PRIOPCAUSD},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BAZOOKAFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BAZOOKAFIRESND,      MUSE_MISSILEFIRESND,   },  SD_WRITE,SD_PRIOPMISS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_FIREBOMBFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_FIREBOMBFIRESND,     MUSE_MISSILEFIRESND,   },  SD_WRITE,SD_PRIOPMISS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_HEATSEEKFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_HEATSEEKFIRESND,     MUSE_MISSILEFIRESND,   },  SD_WRITE,SD_PRIOPMISS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DRUNKFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_DRUNKFIRESND,        MUSE_MISSILEFIRESND,   },  SD_WRITE,SD_PRIOPMISS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_FLAMEWALLFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_FLAMEWALLFIRESND,    MUSE_MISSILEFIRESND,   },  SD_WRITE,SD_PRIOPMISS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_FLAMEWALLSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_FLAMEWALLSND,        MUSE_FLAMEWALLSND,     },  0,SD_PRIOPMISS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SPLITFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_MISSILEFIRESND,      },  0,SD_PRIOPMISS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SPLITSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,            MUSE_MISSILEFIRESND,  },  0,SD_PRIOPMISS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GRAVBUILDSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_WEAPONBUILDSND,      },  0,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GRAVFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_ENERGYFIRESND,      },  0,SD_PRIOPMISS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GRAVSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GRAVSND,             MUSE_LASTSOUND,        },  0,SD_PRIOPMISS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GRAVHITSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,          MUSE_MISSILEHITSND,     },  0,SD_PRIOEXPL},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_FIREHITSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_FIREHITSND,          MUSE_MISSILEHITSND,    },  0,SD_PRIOEXPL},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_MISSILEFLYSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_MISSILEFLYSND,       MUSE_LASTSOUND,        },  0,SD_PRIOPCAUSD},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_MISSILEHITSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_MISSILEHITSND,       MUSE_MISSILEHITSND,    },  0,SD_PRIOEXPL},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_EXCALIBOUNCESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,     MUSE_LASTSOUND,              },  0,SD_PRIOPMISS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_EXCALISWINGSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_MISSILEFIRESND,        },  0,SD_PRIOPMISS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_EXCALIHITSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_MISSILEHITSND,       },  0,SD_PRIOEXPL},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_EXCALIBUILDSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_WEAPONBUILDSND,        },  0,SD_PRIOPSNDS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_EXCALIBLASTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_ENERGYFIRESND,         },  0,SD_PRIOPMISS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GODMODEFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GODMODEFIRESND,      MUSE_ENERGYFIRESND,    },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GODMODE1SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GODMODE1SND,         MUSE_LASTSOUND,        },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GODMODE2SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GODMODE2SND,         MUSE_LASTSOUND,        },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GODMODE3SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GODMODE3SND,         MUSE_LASTSOUND,        },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LOSEMODESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LOSEMODESND,         MUSE_LOSEMODESND,      },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DOGMODEPANTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_LASTSOUND,             },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DOGMODEBITE1SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_DOGBITESND,            },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DOGMODEBITE2SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_DOGBITESND,            },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DOGMODELICKSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_DOGLICKSND,            },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DOGMODEBLASTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_DOGBITESND,            },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DOGMODEPREPBLASTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND, MUSE_LASTSOUND,                  },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DOGMANSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,           MUSE_LASTSOUND,        },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DOGWOMANSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_LASTSOUND,          },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GODMANSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GODMANSND,           MUSE_LASTSOUND,        },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GODWOMANSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_LASTSOUND,          },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_FLYINGSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_FLYINGSND,           MUSE_LASTSOUND,        },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GLASSBREAKSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GLASSBREAKSND,       MUSE_GLASSBREAKSND,    },  0,SD_PRIOGLASS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ITEMBLOWSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ITEMBLOWSND,         MUSE_EXPLOSIONSND,     },  0,SD_PRIOEXPL},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BONUSBARRELSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BONUSBARRELSND,      MUSE_EXPLOSIONSND,     },  0,SD_PRIOEXPL},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_TOUCHPLATESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_TOUCHPLATESND,       MUSE_TOUCHPLATESND,    },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BADTOUCHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BADTOUCHSND,         MUSE_BADTOUCHSND,      },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_EXPLODEFLOORSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_EXPLODEFLOORSND,     MUSE_EXPLOSIONSND,     },  0,SD_PRIOEXPL},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_EXPLODESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_EXPLODESND,          MUSE_EXPLOSIONSND,     },  0,SD_PRIOEXPL},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GASSTARTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_TOUCHPLATESND,         MUSE_SWITCHSND,      },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GASHISSSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GASHISSSND,          MUSE_LASTSOUND,        },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GASENDSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GASENDSND,           MUSE_SWITCHSND,        },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GASMASKSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GASMASKSND,          MUSE_LASTSOUND,        },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETKEYSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GETKEYSND,           MUSE_GETKEYSND,        },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETBONUSSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GETBONUSSND,         MUSE_GETBONUSSND,      },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETHEALTH1SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GETHEALTH1SND,       MUSE_GETHEALTHSND,     },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETHEALTH2SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GETHEALTH1SND,       MUSE_GETHEALTHSND,     },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_COOKHEALTHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_COOKHEALTHSND,       MUSE_GETBONUSSND,      },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETWEAPONSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GETWEAPONSND,        MUSE_GETWEAPONSND,     },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETKNIFESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_GETWEAPONSND,       },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETGODSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GETGODSND,           MUSE_GETPOWERUPSND,    },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETDOGSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,           MUSE_GETPOWERUPSND,    },  0,SD_PRIOGODDOG},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETFLEETSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GETFLEETSND,         MUSE_GETPOWERUPSND,    },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETELASTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GETELASTSND,         MUSE_GETPOWERDOWNSND,  },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETSHROOMSSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GETSHROOMSSND,       MUSE_GETPOWERDOWNSND,  },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETBVESTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GETBVESTSND,         MUSE_GETARMORSND,      },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETAVESTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GETAVESTSND,         MUSE_GETARMORSND,      },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETMASKSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GETMASKSND,          MUSE_GETARMORSND,      },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETBATSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,           MUSE_GETWEIRDSND,      },  0,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GETHEADSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,          MUSE_GETWEIRDSND,       },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GET1UPSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GET1UPSND,           MUSE_GETLIFESND,       },   SD_PITCHSHIFTOFF,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GET3UPSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,           MUSE_GETLIFESND,       },   SD_PITCHSHIFTOFF,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_RESPAWNSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_RESPAWNSND,          MUSE_GETBONUSSND,      },   SD_PITCHSHIFTOFF,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PLAYERSPAWNSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PLAYERSPAWNSND,      MUSE_GETLIFESND,       },   SD_PITCHSHIFTOFF,SD_PRIOGAME},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LOWGUARD1SEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LOWGUARD1SEESND,     MUSE_ACTORSEESND,      },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LOWGUARD1ASEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LOWGUARD1SEESND,    MUSE_ACTORSEESND,       },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LOWGUARD1SEE3SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LOWGUARD1SEE2SND,    MUSE_ACTORSEESND,      },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LOWGUARD2SEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LOWGUARD1SEESND,     MUSE_ACTORSEESND,      },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LOWGUARD2ASEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LOWGUARD1SEESND,    MUSE_ACTORSEESND,       },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LOWGUARD2SEE3SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LOWGUARD1SEE2SND,    MUSE_ACTORSEESND,      },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LOWGUARDFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ATKPISTOLSND,     MUSE_ACTORFIRESND,        },  0,SD_PRIOAFIRE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LOWGUARDOUCHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LOWGUARDOUCHSND,     MUSE_ACTOROUCHSND,     },  0,SD_PRIOAHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LOWGUARD1DIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LOWGUARD1DIESND,    MUSE_ACTORDIESND,       },  0,SD_PRIOADEATH},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LOWGUARD2DIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LOWGUARD1DIESND,    MUSE_ACTORDIESND,       },  0,SD_PRIOADEATH},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SNEAKYSPRINGMSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_SNEAKYSPRINGMSND,    MUSE_ACTORDOITSND,     },  0,SD_PRIOASNEAK},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SNEAKYSPRINGFSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_SNEAKYSPRINGMSND,    MUSE_ACTORDOITSND,     },  0,SD_PRIOASNEAK},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_HIGHGUARD1SEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_HIGHGUARD1SEESND,    MUSE_ACTORSEESND,      },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_HIGHGUARD2SEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_HIGHGUARD1SEESND,    MUSE_ACTORSEESND,      },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_HIGHGUARDFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ATKMP40SND,          MUSE_ACTORFIRESND,     },  0,SD_PRIOAFIRE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_HIGHGUARDOUCHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_HIGHGUARDOUCHSND,    MUSE_ACTOROUCHSND,     },  0,SD_PRIOAHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_HIGHGUARDDIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_HIGHGUARDDIESND,     MUSE_ACTORDIESND,      },  0,SD_PRIOADEATH},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_OVERP1SEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_ACTORSEESND,         },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_OVERP2SEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_ACTORSEESND,         },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_OVERPFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ATKPISTOLSND,     MUSE_ACTORFIRESND,        },  0,SD_PRIOAFIRE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_OVERPNETSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_ACTORTHROWSND,      },  0,SD_PRIOASNEAK},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_OVERPOUCHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_ACTOROUCHSND,        },  0,SD_PRIOAHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_OVERPDIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_ACTORDIESND,        },  0,SD_PRIOADEATH},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_STRIKE1SEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_STRIKE1SEESND,       MUSE_ACTORSEESND,      },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_STRIKE2SEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_STRIKE1SEESND,       MUSE_ACTORSEESND,      },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_STRIKEFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ATKPISTOLSND,     MUSE_ACTORFIRESND,        },  0,SD_PRIOAFIRE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_STRIKEROLLSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_STRIKEROLLSND,       MUSE_ACTORROLLSND,     },  0,SD_PRIOASNEAK},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_STRIKEOUCHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_STRIKEOUCHSND,       MUSE_ACTOROUCHSND,     },  0,SD_PRIOAHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_STRIKEDIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_STRIKEDIESND,        MUSE_ACTORDIESND,      },  0,SD_PRIOADEATH},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BLITZ1SEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BLITZ1SEESND,        MUSE_ACTORSEESND,      },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BLITZ2SEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BLITZ1SEESND,        MUSE_ACTORSEESND,      },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BLITZFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ATKPISTOLSND,     MUSE_ACTORFIRESND,        },  0,SD_PRIOAFIRE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BLITZSTEALSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BLITZSTEALSND,       MUSE_GETPOWERDOWNSND,  },  0,SD_PRIOASNEAK},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BLITZOUCHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BLITZOUCHSND,        MUSE_ACTOROUCHSND,     },  0,SD_PRIOAHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BLITZDIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BLITZDIESND,         MUSE_ACTORDIESND,      },  0,SD_PRIOADEATH},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BLITZPLEADSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BLITZPLEADSND,       MUSE_LASTSOUND,        },  SD_PLAYONCE,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BLITZPLEAD1SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BLITZPLEAD1SND,       MUSE_LASTSOUND,       },  SD_PLAYONCE,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BLITZPLEAD2SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BLITZPLEAD2SND,       MUSE_LASTSOUND,       },  SD_PLAYONCE,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ENFORCERSEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ENFORCERSEESND,      MUSE_ACTORSEESND,      },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ENFORCERFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ENFORCERFIRESND,     MUSE_ACTORFIRESND,     },  0,SD_PRIOAFIRE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ENFORCERTHROWSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ENFORCERTHROWSND,    MUSE_ACTORTHROWSND,    },  0,SD_PRIOASNEAK},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ENFORCEROUCHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ENFORCEROUCHSND,     MUSE_ACTOROUCHSND,     },  0,SD_PRIOAHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ENFORCERDIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ENFORCERDIESND,      MUSE_ACTORDIESND,      },  0,SD_PRIOADEATH},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_MONKSEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,          MUSE_ACTORSEESND,       },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_MONKGRABSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_ACTORDOITSND,       },  0,SD_PRIOAFIRE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_MONKOUCHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_ACTOROUCHSND,       },  0,SD_PRIOAHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_MONKDIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,          MUSE_ACTORDIESND,       },  0,SD_PRIOADEATH},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_FIREMONKSEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_ACTORSEESND,           },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_FIREMONKFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,     MUSE_ACTORFIRESND,           },  0,SD_PRIOAFIRE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_FIREMONKOUCHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,     MUSE_ACTOROUCHSND,           },  0,SD_PRIOAHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_FIREMONKDIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_ACTORDIESND,           },  0,SD_PRIOADEATH},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ROBOTSEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ROBOTSEESND,         MUSE_ACTORSEESND,      },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ROBOTFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ROBOTFIRESND,        MUSE_ACTORFIRESND,     },  0,SD_PRIOAFIRE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ROBOTDIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ROBOTDIESND,         MUSE_ACTORDIESND,      },  0,SD_PRIOADEATH},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ROBOTMOVESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_KRISTMOTORSND,       MUSE_LASTSOUND,        },  SD_PLAYONCE,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BALLISTIKRAFTSEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BAZOOKAFIRESND,         MUSE_ACTORSEESND,   },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BALLISTIKRAFTFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ROBOTFIRESND,        MUSE_ACTORFIRESND,     },  0,SD_PRIOAFIRE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARIANSEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_BOSSSEESND,          },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARIANFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BAZOOKAFIRESND,       MUSE_BOSSFIRESND,     },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARIANGONNAUSESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,   MUSE_BOSSDOSND,                },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARIANUSESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_TOUCHPLATESND,       MUSE_BOSSDOSND,        },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARIANHIDESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,       MUSE_BOSSDOSND,            },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARIANDIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_BOSSDIESND,          },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARIANSAY1,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,          MUSE_BOSSWARNSND,       },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARIANSAY2,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,          MUSE_BOSSHEYSND,        },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARIANSAY3,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,          MUSE_BOSSWARNSND,       },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_KRISTSEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_BOSSSEESND,         },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_KRISTFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BAZOOKAFIRESND,      MUSE_BOSSFIRESND,      },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_KRISTMOTORSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,       MUSE_LASTSOUND,            },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_KRISTTURNSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_BOSSBEEPSND,         },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_KRISTDROPSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_BOSSDOSND,           },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_KRISTMINEBEEPSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,    MUSE_BOSSBEEPSND,             },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_KRISTMINEHITSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,     MUSE_MISSILEHITSND,          },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_KRISTDIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_BOSSDIESND,         },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_KRISTSAY1,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,           MUSE_BOSSWARNSND,      },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_KRISTSAY2,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,           MUSE_BOSSHEYSND,       },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_KRISTSAY3,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,           MUSE_BOSSWARNSND,      },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_NMESEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,           MUSE_BOSSSEESND,       },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_NMEREADYSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_BOSSWARNSND,        },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_NMEFIRE1SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BAZOOKAFIRESND,      MUSE_BOSSFIRESND,      },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_NMEAPARTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_BOSSBEEPSND,        },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_NMEUFOSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,           MUSE_MISSILEFIRESND,   },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_NMEDIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_EXPLODESND,           MUSE_BOSSDIESND,      },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARKMONKSEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_BOSSSEESND,            },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARKMONKFIRE1SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,    MUSE_BOSSFIRESND,             },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARKMONKFIRE2SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,    MUSE_BOSSFIRE2SND,            },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARKMONKFIRE3SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,    MUSE_BOSSFIRESND,             },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARKMONKFIRE4SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,    MUSE_BOSSFIRE2SND,            },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARKMONKRECHARGESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,   MUSE_WEAPONBUILDSND,           },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARKMONKFLOATSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,    MUSE_LASTSOUND,               },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARKMONKDIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_BOSSDIESND,            },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARKMONKSAY1,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_BOSSWARNSND,         },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARKMONKSAY2,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_BOSSHEYSND,          },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DARKMONKSAY3,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_BOSSWARNSND,         },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SNAKESEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_BOSSSEESND,         },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SNAKEREADYSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,       MUSE_BOSSBEEPSND,          },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SNAKECHARGESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_WEAPONBUILDSND,        },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SNAKEOUCHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_BOSSOUCHSND,         },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SNAKEDIESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_BOSSDIESND,         },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SNAKESPITSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_BOSSFIRESND,         },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SNAKESAY1,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,           MUSE_BOSSWARNSND,      },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SNAKESAY2,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,           MUSE_BOSSHEYSND,       },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SNAKESAY3,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,           MUSE_BOSSWARNSND,      },  0,SD_PRIOBOSS},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_EMPLACEMENTSEESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,   MUSE_SWITCHSND,                },  0,SD_PRIOAGREET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_EMPLACEMENTFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,  MUSE_EMPFIRESND,                },  0,SD_PRIOAFIRE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BIGEMPLACEFIRESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,   MUSE_EMPFIRESND,               },  0,SD_PRIOAFIRE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_OPENDOORSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_OPENDOORSND,        MUSE_OPENDOORSND,       },  0,SD_PRIOPCAUSD},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_CLOSEDOORSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_CLOSEDOORSND,       MUSE_CLOSEDOORSND,      },  0,SD_PRIOPCAUSD},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DOORHITSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ELEVATORENDSND,       MUSE_LASTSOUND,           },  0,SD_PRIOPCAUSD},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_FIRECHUTESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_FIRECHUTESND,        MUSE_MISSILEFIRESND,   },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_FIREBALLSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_FIREBALLSND,         MUSE_LASTSOUND,        },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_FIREBALLHITSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_FIREBALLHITSND,      MUSE_MISSILEHITSND,    },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BLADESPINSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BLADESPINSND,        MUSE_SPINBLADESND,     },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PUSHWALLSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PUSHWALLSND,         MUSE_PUSHWALLSND,      },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PUSHWALLHITSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PUSHWALLHITSND,      MUSE_MISSILEHITSND,    },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GOWALLSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GOWALLSND,           MUSE_PUSHWALLSND,      },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_TURBOWALLSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_TURBOWALLSND,        MUSE_PUSHWALLSND,      },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BOULDERHITSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,       MUSE_MISSILEHITSND,        },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BOULDERROLLSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_BOULDERSND,            },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BOULDERFALLSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,       MUSE_PITTRAPSND,           },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_PITTRAPSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_PITTRAPSND,          MUSE_PITTRAPSND,       },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_FIREJETSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_FIREJETSND,          MUSE_FIREJETSND,       },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ACTORSQUISHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ACTORSQUISHSND,      MUSE_ACTORSQUISHSND,   },  0,SD_PRIOADEATH},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ACTORBURNEDSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ACTORBURNEDSND,      MUSE_ACTOROUCHSND,     },  0,SD_PRIOAHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ACTORSKELETONSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ACTORSKELETONSND,    MUSE_LASTSOUND,        },  0,SD_PRIOAHURT},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SPEARSTABSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_SPEARSTABSND,        MUSE_STABBERSND,       },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_CYLINDERMOVESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_CYLINDERMOVESND,     MUSE_CYLINDERHITSND,   },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ELEVATORONSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ELEVATORONSND,       MUSE_ELEVATORSND,      },  0,SD_PRIOPCAUSD},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ELEVATORENDSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ELEVATORENDSND,      MUSE_LASTSOUND,        },  0,SD_PRIOPCAUSD},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SPRINGBOARDSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_SPRINGBOARDSND,      MUSE_SPRINGBOARDSND,   },  0,SD_PRIOPCAUSD},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LIGHTNINGSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LIGHTNINGSND,        MUSE_LASTSOUND,        },  0,SD_PRIOPCAUSD},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_WINDSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,             MUSE_LASTSOUND,        },  0,SD_PRIOPCAUSD},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_WATERSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,            MUSE_LASTSOUND,       },  0,SD_PRIOPCAUSD},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_BODYLANDSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_BODYLANDSND,         MUSE_LASTSOUND,        },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_GIBSPLASHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_GIBSPLASHSND,         MUSE_LASTSOUND,       },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_ACTORLANDSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_ACTORLANDSND,         MUSE_LASTSOUND,       },  0,SD_PRIOENVRON},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_DOPEFISHSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,         MUSE_LASTSOUND,          },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_YOUSUCKSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_YOUSUCKSND,          MUSE_LASTSOUND,        },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SILLYMOVESND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,        MUSE_LASTSOUND,           },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SOUNDSELECTSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,      MUSE_LASTSOUND,             },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_SOUNDESCSND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_YOUSUCKSND,         MUSE_LASTSOUND,         },  0,SD_PRIOSECRET},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_REMOTEM1SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_REMOTEM1SND,         MUSE_LASTSOUND,        },  0,SD_PRIOREMOTE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_REMOTEM2SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_REMOTEM2SND,         MUSE_LASTSOUND,        },  0,SD_PRIOREMOTE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_REMOTEM3SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_REMOTEM3SND,         MUSE_LASTSOUND,        },  0,SD_PRIOREMOTE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_REMOTEM4SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_REMOTEM4SND,         MUSE_LASTSOUND,        },  0,SD_PRIOREMOTE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_REMOTEM5SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_REMOTEM5SND,         MUSE_LASTSOUND,        },  0,SD_PRIOREMOTE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_REMOTEM6SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_REMOTEM6SND,         MUSE_LASTSOUND,        },  0,SD_PRIOREMOTE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_REMOTEM7SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_REMOTEM7SND,         MUSE_LASTSOUND,        },  0,SD_PRIOREMOTE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_REMOTEM8SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_REMOTEM8SND,         MUSE_LASTSOUND,        },  0,SD_PRIOREMOTE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_REMOTEM9SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_REMOTEM9SND,         MUSE_LASTSOUND,        },  0,SD_PRIOREMOTE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_REMOTEM10SND,
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_REMOTEM10SND,        MUSE_LASTSOUND,        },  0,SD_PRIOREMOTE},
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
//SD_LASTSOUND
//|-------DIGITAL--------|--------MUSE----------|----FLAGS---|
 {{D_LASTSOUND,           MUSE_LASTSOUND,        },  0,SD_PRIOSECRET}
//ΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ
};

