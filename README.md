# Neo
Neo package manager 

```
/neo/ 
 ├── cache/ 
 ├── cells/          
 ├── bin/            
 └── index.json (contains git hash commit) 
 ```    
so basically, our design uses 'cells' which will be isolated package SYMLINKS (for the actual package usage + after install).

and this is our PLAN (keyword) layout for our code incase you wanna commit or issues idk.

```src/
 ├── cli/
 │    └── args.cpp
 │
 ├── net/
 │    ├── download.hpp
 │    └── download.cpp
 │
 ├── pkg/
 │    ├── cell.hpp
 │    ├── cell.cpp
 │    ├── install.hpp
 │    └── install.cpp
 │
 │
 │── util/
 │    ├── 
 │    ├── 
 │    └── 
 │
 └── main.cpp (will link everything together)
```
