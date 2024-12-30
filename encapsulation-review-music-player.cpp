#include "MusicPlayer.hpp"

MusicPlayer::MusicPlayer() : currentSongIndex(0), isPlaying(false), volume(50) {}

string MusicPlayer::Song::getTitle() {
  return title;
}

string MusicPlayer::Song::getArtist() {
  return artist;
}

void MusicPlayer::addSong(const Song& song) {
  playlist.push_back(song);
}

void MusicPlayer::play() {
  if (!playlist.empty()) {
    isPlaying = true;
  }
}

void MusicPlayer::pause() {
  isPlaying = false;
}

void MusicPlayer::nextSong() {
  if (!playlist.empty() && currentSongIndex < playlist.size() - 1) {
    currentSongIndex++;
  }
}

void MusicPlayer::previousSong() {
  if (!playlist.empty() && currentSongIndex > 0) {
    currentSongIndex--;
  }
}

int MusicPlayer::getVolume() {
  return volume;
}

void MusicPlayer::setVolume(int v) {
  validateVolume(v);
  volume = v;
}

bool MusicPlayer::isPlayingStatus() {
  return isPlaying;
}

void MusicPlayer::validateVolume(int v) {
  if (v < 0) {
    volume = 0;
  } else if (v > 100) {
    volume = 100;
  } else {
    volume = v;
  }
}
