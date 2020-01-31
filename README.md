![Quick Turn Studio](http://quickturnstudio.com/wp-content/uploads/2020/01/quick-turn-studio-logo@3x.png)

# Running Test in compile time

This project is example hot to run test in compile time. You can find article about it at Quick Turn Studios's blog: [Running Test in compile time – how?](http://quickturnstudio.com/running-test-in-compile-time/)

### Cloning repository

```
git clone https://github.com/Quick-Turn-Studio/run-test-in-compile-time.git --recursive
```

or 

```
git clone https://github.com/Quick-Turn-Studio/run-test-in-compile-time.git
git submodule update --init 
```

### Building

```
mkdir build
cd build
cmake ..
make all
```