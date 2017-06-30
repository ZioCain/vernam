# vernam
C++ source for encrypting and decrypting any file

# install
Download the git and then just compile it with Make or any C++ compiler.
Copy the resulting executable file any of your $PATH folders to use the program from anywhere

# usage
From command line type:
Encrypting
```
vernam e|encrypt <file to encrypt> <destination file>
```

Decrypting
```
vernam d|decrypt <file to decrypt> <destination file>
```

# how it works
This software uses a very simple VERNAM encryption, as you can see from the code, it just adds the password letters one by one to the bytes in the file and viceversa for the decryption process

# BugFix
There are still some issues to be fixed, I'm still working on it

# License
Feel free to include this code in any of your projects
