#ifndef TILESETIMAGE_H
#define TILESETIMAGE_H

class TileSetImage{

	private:
		const char* source_;
		const int width_;
		const int height_;
		
	public:
		TileSetImage(const char* source, const int& width, const int height);
		~TileSetImage();
		
		const char* getSource() const;
		int getWidth() const;
		int getHeight() const;

};

#endif
