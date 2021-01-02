#include <Encoder.h>
#include <Control_Surface.h> // Include the Control Surface library
#include <Def/Channel.hpp>
// Instantiate a MIDI over USB interface.
USBMIDI_Interface midi;
using namespace MIDI_Notes;

const Channel Channel_Current = CHANNEL_6;

const MIDIAddress MIDIAddress1 = {note(D, 0), Channel_Current};   //Note 38
const MIDIAddress MIDIAddress2 = {note(Eb,0), Channel_Current};   //Note 39
const MIDIAddress MIDIAddress3 = {note(E, 0), Channel_Current};   //Note 40 
const MIDIAddress MIDIAddress4 = {note(Eb, 3), Channel_Current};   //Note 41

const MIDIAddress MIDIAddress5 = {note(Gb,0), Channel_Current};   //Note 42
const MIDIAddress MIDIAddress6 = {note(G, 0), Channel_Current};   //Note 43
const MIDIAddress MIDIAddress7 = {note(Ab,0), Channel_Current};   //Note 44 
const MIDIAddress MIDIAddress8 = {note(A, 0), Channel_Current};   //Note 45

// Instantiate a CCRotaryEncoder object
CCRotaryEncoder enc_channel = {
  {0, 1},       // pins
  MIDIAddress1,  // MIDI address (CC number + optional channel)
  1,            // optional multiplier if the control isn't fast enough
};
CCRotaryEncoder enc_back = {
  {3, 4},       // pins
  MIDIAddress2,  // MIDI address (CC number + optional channel)
  1,            // optional multiplier if the control isn't fast enough
};
CCRotaryEncoder enc03_ls = {
  {11, 6},       // pin 6 used as it is Interrupt equipped.
  MIDIAddress3,  // MIDI address (CC number + optional channel)
  1,            // optional multiplier 
};
CCRotaryEncoder enc_select = {
  {7, 8},       // pins
  MIDIAddress4,  // MIDI address (CC number + optional channel)
  1,            // optional multiplier if the control isn't fast enough
};

NoteButton button02 = {
  2,                       // Push button on pin 3
  MIDIAddress1, // 
};
NoteButton button05 = {
  5,                       // Push button on pin 5
  MIDIAddress2, // 
};
NoteButton button09 = {
  9,                       // Push button on pin 9
  MIDIAddress3, // 
};
NoteButton button10 = {
  10,                       // Push button on pin 10   Swapped with pin 6 for interupt for encoder
  MIDIAddress4, // 
};


// Front panel switches
NoteButton frontbutton1 = {
  21,                       // Push button on pin 21
  MIDIAddress5, 
};
NoteButton frontbutton2 = {
  20,                       // Push button on pin 20
  MIDIAddress6, 
};
NoteButton frontbutton3 = {
  12,                       // Push button on pin 12
  MIDIAddress7, 
};
NoteButton frontbutton4 = {
  13,                       // Push button on pin 13
  MIDIAddress8, 
};



void setup() {

  Control_Surface.begin(); // Initialize Control Surface
}
void loop() {
  Control_Surface.loop(); // Update the Control Surface
}
