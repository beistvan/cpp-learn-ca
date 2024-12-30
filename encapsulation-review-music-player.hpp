#include <string>
#include <vector>

using namespace std;

class MusicPlayer {
public:
  class Song {
  private:
    string title;
    string artist;

  public:
    Song(string t, string a) : title(t), artist(a) {}

    string getTitle();
    string getArtist();
  };

  MusicPlayer();

  void addSong(const Song& song);
  void play();
  void pause();
  void nextSong();
  void previousSong();

  int getVolume();
  void setVolume(int v);

  bool isPlayingStatus();

private:
  vector<Song> playlist;
  int currentSongIndex;
  bool isPlaying;
  int volume;

  void validateVolume(int v);
};
