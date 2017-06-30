# VERNAM encrypter
Small command-line software to encrypt and decrypt any filetype through vernam algorithm. This software is a very simple encrypter/decrypter, not meant to be used to decrypt already encrypted files

## Getting Started
There's only one cpp file in the project, this means you only have to compile it and execute it.

### Prerequisites

What things you need to install the software and how to install them
Any and whatever c++ compiler.
I've been using g++ on my linux to develop and test

### Installing
Once you got the `main.cpp` file and the `Makefile`, type `make` into terminal to compile

### Usage
Encrypting
```
vernam e|encrypt <file to encrypt> <destination file>
```

Decrypting
```
vernam d|decrypt <file to decrypt> <destination file>
```

## Deployment
If you want this to work from any directory in your system, place the executable file into any of the directory targeted by the $PATH variable

## Built With

[Atom.io](https://atom.io/)
G++

## Authors

Myself [ZioCain](http://twitter.com/ZioCain)

## License

This software comes with no license and no warranty.

## Acknowledgments
[Gilbert Vernam](https://en.wikipedia.org/wiki/Gilbert_Vernam)
