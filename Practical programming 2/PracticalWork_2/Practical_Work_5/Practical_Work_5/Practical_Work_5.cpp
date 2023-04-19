#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Абстрактный базовый класс для музыкальных произведений
class MusicPiece {
protected:
    string name;
    int duration;

public:
    MusicPiece(string name, int duration)
        : name(name), duration(duration) {}

    virtual void formatDescription() = 0;  // абстрактный метод
};

// Класс для песен
class Song : public MusicPiece {
private:
    string text;
    string author;

public:
    Song(string name, int duration, string text, string author)
        : MusicPiece(name, duration), text(text), author(author) {}

    void setText(string text) { this->text = text; }
    void setAuthor(string author) { this->author = author; }

    void formatDescription() {
        cout << "Название: " << name << endl;
        cout << "Продолжительность: " << duration << " секунд" << endl;
        cout << "Текст: " << text << endl;
        cout << "Автор текста: " << author << endl;
    }
};

// Класс для инструментальных произведений
class InstrumentalPiece : public MusicPiece {
private:
    vector<string> instruments;

public:
    InstrumentalPiece(string name, int duration, vector<string> instruments)
        : MusicPiece(name, duration), instruments(instruments) {}

    void addInstrument(string instrument) { instruments.push_back(instrument); }
    void removeInstrument(string instrument) {
        for (int i = 0; i < instruments.size(); i++) {
            if (instruments[i] == instrument) {
                instruments.erase(instruments.begin() + i);
                break;
            }
        }
    }

    void formatDescription() {
        cout << "Название: " << name << endl;
        cout << "Продолжительность: " << duration << " секунд" << endl;
        cout << "Инструменты-участники: ";
        for (int i = 0; i < instruments.size(); i++) {
            cout << instruments[i];
            if (i < instruments.size() - 1) cout << ", ";
        }
        cout << endl;
    }
};

// Класс для музыкальной коллекции
class MusicCollection {
private:
    string name;
    string owner;
    vector<MusicPiece*> pieces;

public:
    MusicCollection(string name, string owner)
        : name(name), owner(owner) {}

    void addPiece(MusicPiece* piece) { pieces.push_back(piece); }

    void formatCollection() {
        cout << "Коллекция: " << name << endl;
        cout << "Владелец: " << owner << endl << endl;

        for (int i = 0; i < pieces.size(); i++) {
            cout << "Музыкальное произведение #" << i + 1 << ":" << endl;
            pieces[i]->formatDescription();
            cout << endl;
        }
    }
};

int main() {
  // Создаем музыкальную коллекцию
  MusicCollection myCollection("Моя коллекция", "Иванов Иван");

  // Создаем три музыкальных произведения разных типов и добавляем их в альбомы
  Song song1("Песня 1", 180, "Текст песни 1", "Автор песни 1");
  Album album1("Альбом 1", "Группа 1", "Рок", 2020);
  album1.addSong(song1);
  myCollection.addAlbum(album1);

  Song song2("Песня 2", 240, "Текст песни 2", "Автор песни 2");
  Album album2("Альбом 2", "Группа 2", "Поп", 2015);
  album2.addSong(song2);
  myCollection.addAlbum(album2);

  InstrumentalPiece instrumental1("Инструментальное произведение 1", 300, {"Гитара", "Барабаны"});
  Album album3("Альбом 3", "Группа 3", "Джаз", 2021);
  album3.addInstrumentalPiece(instrumental1);
  myCollection.addAlbum(album3);

  // Выводим описание всех музыкальных произведений в коллекции
  for (const auto& album : myCollection.getAlbums()) {
    std::cout << "Альбом: " << album.getName() << std::endl;
    std::cout << "Группа/исполнитель: " << album.getArtist() << std::endl;
    std::cout << "Жанр: " << album.getGenre() << std::endl;
    std::cout << "Год выпуска: " << album.getYear() << std::endl;

    for (const auto& song : album.getSongs()) {
      std::cout << "  Песня:" << std::endl;
      std::cout << "  Название: " << song.getName() << std::endl;
      std::cout << "  Продолжительность: " << song.getDuration() << std::endl;
      std::cout << "  Текст: " << song.getLyrics() << std::endl;
      std::cout << "  Автор текста: " << song.getLyricsAuthor() << std::endl;
    }

    for (const auto& instrumental : album.getInstrumentalPieces()) {
      std::cout << "  Инструментальное произведение:" << std::endl;
      std::cout << "  Название: " << instrumental.getName() << std::endl;
      std::cout << "  Продолжительность: " << instrumental.getDuration() << std::endl;
      std::cout << "  Инструменты-участники: ";
      for (const auto& instrument : instrumental.getInstruments()) {
        std::cout << instrument << " ";
      }
      std::cout << std::endl;
    }
  }

  return 0;
}