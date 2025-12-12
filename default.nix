{ pkgs ? import <nixpkgs> {} }:

pkgs.stdenv.mkDerivation {
  pname = "neo";
  version = "0.1";

  src = ./.;

  buildInputs = [ pkgs.gcc pkgs.nlohmann_json ];

  buildPhase = ''
    mkdir -p bin
    g++ -Wall -Wextra -std=c++17 -I./src/cli -I./src/net -I./src/pkg -I./src/util -o bin/neo \
      src/cli/args.cpp src/net/download.cpp src/pkg/install.cpp src/main.cpp
  '';

  installPhase = ''
    mkdir -p $out/bin
    cp bin/neo $out/bin/
  '';
}
