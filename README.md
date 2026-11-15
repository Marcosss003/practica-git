# Práctica de Git y GitHub

## Descripción

Este repositorio contiene la práctica de laboratorio de la asignatura Fundamentos de Programación, cuyo objetivo es aprender a utilizar Git como sistema de control de versiones y GitHub como plataforma de alojamiento de repositorios.

## Objetivos

- Comprender el funcionamiento del control de versiones.
- Crear y gestionar un repositorio local.
- Conectar un repositorio local con GitHub.
- Realizar commits para registrar los cambios del proyecto.
- Sincronizar archivos entre el repositorio local y remoto.

## Tecnologías utilizadas

- Git
- GitHub
- Lenguaje de programación C
- Windows PowerShell

## Comandos de Git

| Comando | Descripción |
|---------|-------------|
| `git init` | Inicializa un repositorio local. |
| `git add` | Prepara los archivos para un commit. |
| `git commit` | Registra los cambios realizados. |
| `git push` | Envía los cambios al repositorio remoto. |
| `git pull` | Descarga e integra los cambios del repositorio remoto. |
| `git status` | Muestra el estado actual del repositorio. |

## Autor

- **Nombre:** Marcos Saenz
- **Asignatura:** Fundamentos de Programación
- **Fecha:** 15/11/2026

## Sincronización de repositorios

Esta sección se ha añadido directamente desde GitHub para comprobar el funcionamiento del comando `git pull` y la sincronización entre el repositorio remoto y local.
## Calculadora básica en C

El repositorio incluye un programa desarrollado en lenguaje C
que permite realizar operaciones aritméticas con dos números.

### Funcionalidades

- Suma.
- Resta.
- Multiplicación.
- División.
- Control de la división entre cero.

### Compilación

Para compilar el programa utilizando GCC:

```bash
gcc -Wall -Wextra main.c -o calculator.exe
```

### Ejecución

```bash
./calculator.exe
```

### Ejemplo de funcionamiento

```text
=== CALCULADORA BASICA ===
Introduce el primer numero: 10
Introduce el segundo numero: 5

--- RESULTADOS ---
Suma: 15
Resta: 5
Multiplicacion: 50
Division: 2.00
```

### Estructura del repositorio

| Archivo | Descripción |
|---------|-------------|
| README.md | Documentación del proyecto. |
| main.c | Código fuente de la calculadora. |
| .gitignore | Exclusión de archivos generados durante la compilación. |
