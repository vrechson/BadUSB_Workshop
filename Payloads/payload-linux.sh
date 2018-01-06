#!/bin/bash
# Example script to change windows background according to WM

cd '/tmp'
mkdir '.pastaescondida'
cd '.pastaescondida'
wget 'http://www.indiewire.com/wp-content/uploads/2017/07/rick-and-morty.png'

if [ "$XDG_CURRENT_DESKTOP" == "GNOME" ] || [ "$XDG_CURRENT_DESKTOP" == "Unity" ] || [ "$XDG_CURRENT_DESKTOP" == "X-Cinnamon" ]; then
   gsettings set org.gnome.desktop.background picture-uri '/tmp/.pastaescondida/rick-and-morty.png'
elif [ "$XDG_CURRENT_DESKTOP" == "XFCE" ]; then
  xfconf-query -c xfce4-desktop -l | grep "last-image$" | while read line ; do echo xfconf-query -c xfce4-desktop -p $line -s  '/tmp/.pastaescondida/rick-and-morty.png' ; done
elif [ "$XDG_CURRENT_DESKTOP" == "KDE" ]; then
  dcop kdesktop KBackgroundIface setWallpaper '/tmp/.pastaescondida/rick-and-morty.png' 5
elif [ "$XDG_CURRENT_DESKTOP" == "" ]; then
  exec --no-startup-id feh --bg-scale '/tmp/.pastaescondida/rick-and-morty.png'
fi
