(C)arlos
=============

<div> 
  <img align="right" src="https://github.com/AnotherProgrammerrr/carlos/blob/main/carlos.png?raw=true"/>
  Uma pequena tentativa de fazer alguma coisa em C. <br>
  Apenas por diversão mesmo, nada demais.
</div>

Compilando
=============

Para compilar tenha certeza de ter o libraylib.a e o header da raylib no diretóio em uma pasta bin e include, respectivamente, e usar o comando:
```
$ gcc main.c -o Carlos -O1 -Wall  -std=c11 -Wno-missing-braces -L ./lib/ -lraylib -lopengl32 -lgdi32 -lwinmm -mwindows
```
