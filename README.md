# CPP template

This template is structured for setting up a `CPP` project quickly using `CMAKE`.

## Build and installation:
Application can be build in two ways:

1. CMAKE
2. DOCKER


1. **CMAKE:**
Application name can be changed in the `build_application.sh` file. Simply change:
```bash
APP_NAME="<desired_app_name>"
```

2. **DOCKER:**
Dockerfile using `Ubuntu 18:04` as base. Run:

```bash
docker-compose up --build
```

## Structure of the application

This project is structured with external libraries and using bin files in mind. Feel free to change the `CMakeLists.txt` file to customize the behaviour of the compilation.

[APP_ROOT]
|- docker
| |- dockerfile 
|- libs
| |- external 
| | |- Rapidjson 
| |- internal 
|- src
| |- app 
| |- main.cpp 
| |- CMakeLists.txt 
|- .clang-format
|- .dockerignore
|- CmakeLists.txt
|- LICENSE
|- README.md
|- docker-compose.yaml
