
#ifdef __STATE_MACHINE_H__
#define __STATE_MACHINE_H__

/**
*
*enum to declare state of the audio player
*
*/
enum state{Stopped=0,Playing,Paused};

/**
*
*enum to declare various transition from current state of audio player
*
*/
enum transition{Play=1,Pause,Stop,Fast_forward,Rewind};





