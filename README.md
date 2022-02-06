# Cross Compile Example
### Cross compiles C++ & GLFW with Rust, to Arm/x86 linux x64
(And Hopefully windows via mingw)

This currently doesn't work and I'm uploading it early so I can share it and get some assistance.

### Setup Commands
```
rustup target add x86_64-unknown-linux-gnu
rustup target add aarch64-unknown-linux-gnu
rustup target add x86_64-pc-windows-gnu
```

```
sudo apt install libssl-dev libglfw3 libglfw3-dev clang gcc g++ cmake build-essential
sudo apt install gcc-aarch64-linux-gnu g++-aarch64-linux-gnu gcc-mingw-w64-x86-64 g++-mingw-w64-x86-64
```

### Running
Build - Linux 64-bit x86
```
cargo build --release --target x86_64-unknown-linux-gnu
```

Build - Linux 64-bit ARM
```
cargo build --release --target aarch64-unknown-linux-gnu
```

Build - Windows 64-bit x86
```
cargo build --release --target x86_64-pc-windows-gnu
```