#include "MusicPlayer.hpp"
#include <iostream>

using namespace std;

int main() {
  MusicPlayer player;

  // Add songs to the playlist
  player.addSong(MusicPlayer::Song("Song One", "Artist A"));
  player.addSong(MusicPlayer::Song("Song Two", "Artist B"));
  player.addSong(MusicPlayer::Song("Song Three", "Artist C"));

  // Play music
  player.play();
  cout << "Music is playing: " << (player.isPlayingStatus() ? "Yes" : "No") << endl;

  // Adjust volume
  player.setVolume(75);
  cout << "Current volume: " << player.getVolume() << endl;

  // Move to the next song
  player.nextSong();
  cout << "Playing next song." << endl;

  // Pause music
  player.pause();
  cout << "Music is playing: " << (player.isPlayingStatus() ? "Yes" : "No") << endl;

  // Set an invalid volume to test validation
  player.setVolume(150);
  cout << "Volume after setting to 150: " << player.getVolume() << endl;

  return 0;
}
