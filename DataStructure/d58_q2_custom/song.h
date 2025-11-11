#ifndef __SONG_H__
#define __SONG_H__

#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <functional>
#include "priority_queue.h"

using namespace std;

class Song {
  public:
    std::string artist,title;
    int count;

    Song() { }
    Song(const Song &s) : artist(s.artist), title(s.title), count(s.count) { }
    Song(std::string artist,std::string title,int count) :  artist(artist), title(title), count(count) { }

    friend std::ostream& operator<<(std::ostream &out,const Song &s) {
      return out << "Artist: " << s.artist << " Title: " << s.title << " count: " << s.count;
    }
  
};


  bool Q1(const Song &a, const Song &b) {
    if(a.artist == b.artist){
      if(a.title == b.title){
        return a.count > b.count;
      }
      else return a.title > b.title;
    }
    else return a.artist > b.artist;

  }
  bool Q2 (const Song &a, const Song &b){
    if(a.count == b.count){
      if(a.artist == b.artist){
        return a.title > b.title;
      }
      else return a.artist > b.artist;
    }
    else return a.count < b.count;

  }

  
CP::priority_queue<Song, function<decltype(Q1)>> pq1(Q1);

    

CP::priority_queue<Song, function<decltype(Q2)>> pq2(Q2) ;

#endif
