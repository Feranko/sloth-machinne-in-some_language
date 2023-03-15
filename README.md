# sloth-machinne-in-C-python-rust-java-C++
sloth machine

to run the rust code you need 2 think 
-A linux Sistem 
-And nothing elese

Now you can decide were you want to create your personale virtual machine for example Wmware and VirtualBox
And you can decide the distro you want , I don't promis you , this code work to every distribution.

ok now you open your terminal 

create a folder with(mkdir)<- ad a name to the directory
example:
  mkdir dir_name
now write the comand 'sudo apt install rustc' <- this work on UBUNTU I don't know in other distro
if ask you anything press ENTER or y+ENTER

now you write cargo init
good now are created a folder and a file named Cargo.toml open this file , with the current comand nano Cargo.toml
in this file int the dependesis section write (rand="0.8.4") good now save with ctrl+s and exit with ctrl+x

good at this point move to the folder that are named src and digit ls to see the list of file , you see a main.rs , good open the file with (nano main.rs), take my code and make normal thing ctrl+c and ctrl+v , if you work on vscod else you take mid window and write in your file , if you are working on the terminal.

for now you need to run this file , to make this use the current comand cd to go to the original folder , cd Desktop/'name of your folder' and to run your file 'cargo run' now your file are compiled and runned , this is a little tutorial to , how to run a rust file ; I don't know if this i possibly on windows probaply no.

Always in linux best system:
oh yes if you won't to try to run the c file install the gcc , with the current comand sudo apt install gcc , ok after you install it run the current comand (gcc file.c -o file) , for run you write ./file because now is a exeguible file

To build the cpp file you can do that in alread in the real two system Linux and windows , you need to install the MinGW package https://sourceforge-net.translate.goog/projects/mingw/?_x_tr_sl=en&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=sc <= you can download here , put ready to all voices you see ,this for windows and for linux you need to use comand (sudo apt update && sudo apt install g++) I think in Arch is that ( sudo pacman -Syu && sudo pacman -Sy g++) <= first to update repository and second to instal the libraries ; to build file you use g++ "name file.cpp" -o "new name file".
